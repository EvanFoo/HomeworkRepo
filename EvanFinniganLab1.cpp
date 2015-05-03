/*//============================================================================
// Name        : CIS22B.cpp
// Author      : Evan Finnigan
// Version     : 1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;




 * binary search psuedocode:
 * set index equal to zero
 * set midpoint equal to end plus start divided by two
 *
 * if end is less than start
 * 		set the index to -1
 * else
 * 		if the element to find is less than array[midpoint]
 * 			set the index equal to the return of binarySearch with arguments element to find, array, start and midpoint minus one
 * 		else if the element to find is greater than array[midpoint]
 * 			set the index equal to the return of binarySearch with arguments element to find, array, midpoint plus one and end
 * 		else if the elment to find is equal to array[midpoint]
 * 			set the index equal to the midpoint
 * 		else
 * 			set index equal to -1

int binarySearch(string toFind, string array[], int start, int end){
	int index = 0;
	int midPoint = (end + start)/2;

	if(end < start)
		index =  -1;
	else{
		if(toFind < array[midPoint]){
			index = binarySearch(toFind, array, start, midPoint - 1);
		}else if(toFind > array[midPoint]){
			index = binarySearch(toFind, array, midPoint + 1, end);
		}else if(toFind == array[midPoint]){
			index = midPoint;
		}else{
			index = -1;
		}
	}

	return index;
}


 * selection sort psuedocode:
 *
 *if the starting index is not greater than or equal to the array length minus one
 *		set the minimum index equal to the starting index
 *
 *		for index starting at start index + 1 and ending at array length
 *			if the array[index] is less than the array[minimum index]
 *				set the minimum index equal to the index
 *
 *		set temporary equal to array[starting index]
 *		set array[starting index] equal to array[minimum index]
 *		set array[minimum index] equal to temporary
 *		call selection sort with arguments array, starting index plus one and array length

void selectionSort(string array[], int startIndex, int arrayLen){

		if ( !(startIndex >= arrayLen - 1 )){
		    int minIndex = startIndex;
		    for ( int index = startIndex + 1; index < arrayLen; index++ )
		    {
		        if (array[index] < array[minIndex] )
		            minIndex = index;
		    }
		    string temp = array[startIndex];
		    array[startIndex] = array[minIndex];
		    array[minIndex] = temp;
		    selectionSort(array, startIndex + 1, arrayLen);

		}
	}


void selectionSort(string array[], int startIndex, int arrayLen, int counter, int minIndex){

		if (startIndex < arrayLen){
			if(counter < arrayLen + 1){
				if(array[counter] < array[minIndex]){
					minIndex = counter;
				}
				counter++;
			}else{
				string temp = array[startIndex];
				array[startIndex] = array[minIndex];
				array[minIndex] = temp;

				startIndex++;

				counter = startIndex;
			}

			selectionSort(array, startIndex, arrayLen, counter, minIndex);
		}
	}


psuedocode for main
 *
 * set word counter equal to zero
 * input a file name
 * open the input file with location of the input file name
 * open an output file with name "WordsLog.txt"
 *
 * if the input file is open
 * 		Display "reading input file contents"
 * 		Output "reading input file contents" to the output file
 *
 *
 * 		while the end of file has not been reached
 * 			get a word from the input file, as save it as temporary
 *
 * 			if temporary is longer than one character
 * 				save it in words[word counter]
 * 				increment word counter by one
 *
 * 		Display "file contents read"
 * 		Output "file contents read" to the output file
 * 	else
 * 		Display "file could not be opened"
 * 		Output "file could not be opened" to the output file
 *
 * 	call selection sort, with arguments words, 0, and word counter
 *
 * 	display "Sorted array: "
 * 	output "Sorted array: " to the output file
 *
 * 	for every element in words less than word counter
 * 		Display element
 * 		Output element to the output file
 *
 * 	set string search equal to ""
 * 	display "You can now seach for words"
 * 	call selection sort, with arguments words, 0, and word counter
 *
 *
 * 	while search is not "q"
 * 			display "Enter a word (q to quit)"
 * 			input the search word
 *
 * 			set index equal to binary search with arguements search, words, 0, and word counter
 *
 * 			if the index is equal to -1 and the search is not "q"
 * 				Display search and "not found"
 * 			else if index is not equal to -1
 * 				Display search, "word found at location", index
 * 				Output search, "word found at location", index to the output file
 *
 * 	close the input file
 * 	close the output file
 *


int main() {
	ifstream inputFile;
	ofstream outputFile;

	//need to use a c style string because the file.open() function only takes c strings
	char inputFileName[100];
	char outputFileName[100];

	static string words[1024];
	int wordCounter = 0;

	//ask for a file name and open the file
	cout << "Please enter an input file to open (use full path: 'C:/.../example.txt')";
	cin >> inputFileName;
	inputFile.open(inputFileName);

	cout << "Please enter an output file to create (use full path: 'C:/.../example.txt')";
	cin >> outputFileName;
	//file where everything is logged
	outputFile.open(outputFileName);

	//parse the file and put all of the words longer than 1 character
	//into the array words
	if(inputFile.is_open()){

		cout << "Reading " << inputFileName <<  " contents" << endl;
		outputFile << "Reading " << inputFileName <<  " contents" << endl;

		while(!inputFile.eof()){
			string temp;
			getline(inputFile, temp, ' ');

			if(temp.length() > 1){
				words[wordCounter] = temp;
				wordCounter ++;
			}

		}

		cout << "File contents have been read" << endl;
		outputFile << "File contents have been read" << endl;
	}else{
		cout << inputFileName << " could not be opened" << endl;
		outputFile << inputFileName << "could not be opened" << endl;
	}

	//perform the selection sort, with the array length being the number of words input
	selectionSort(words, 0 , wordCounter);

	//display the sorted words and output the sorted words to the output file
	cout <<  "Sorted words: " << endl;
	outputFile << "Sorted words: " << endl;
	for(int i = 0; i < wordCounter; i++){
		cout << words[i] << endl;
		outputFile << words[i] << endl;
	}

	string search = "";
	cout << "You can now search for words" << endl;

	while(search != "q"){
		cout << "Enter a word (q to quit): ";
		cin >> search;
		cout << endl;

		int index = binarySearch(search, words, 0, wordCounter);

		if(index == -1 && search != "q"){
			cout << search << " not found" << endl;
			outputFile << search << " not found" << endl;
		}else if (index != -1){
			cout << search << " found at location " << index << endl;
			outputFile << search << " found at location " << index << endl;
		}

	}

	//close the file, it is no longer needed
	inputFile.close();
	//close the output file, it is not longer needed
	outputFile.close();

	return 0;
}*/
