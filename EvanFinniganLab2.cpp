/*
 * Author: Evan Finnigan
 * Description: This program implements my recreations of strlen, strcpy, strcat, and strcmp.
 * It allows the user to enter strings that they can use to test these functions.
 */


#include <iostream>

using namespace std;


/*Psudocode for stringLength:
 * inputs: pointer to the first element of a string
 * set the pointer point equal to the input pointer
 * set the length equal to zero
 * while point is not pointing to a character with value '\0'
 * 		increment length
 * 		increment point
 *
 * return length
 */

int stringLength(char * input){
	char * point = input;
	int length = 0;

	while ((*point != '\0')){
		length++;
		point++;
	}

	return length;

};

/*Psudocode for stringNCopy:
 * inputs: pointer to the first element of an input string and a pointer to the first element of a output string
 * set the pointer point equal to the input string pointer
 * set the pointer point2 equal to the output string pointer
 * while point is not pointing to a character with value '\0'
 * 		set the value that point2 points to to the value that point points to
 * 		increment point
 * 		increment point2
 * set the value that pointer2 points to to '\0'
 */

void stringNCopy(char * out, char * in){
	char * point = in;
	char * point2 = out;

	while (*point != '\0'){
		*point2 = *point;
		point++;
		point2++;
	}
	*point2 = '\0';
};

/*Psudocode for stringAdd:
 * inputs: pointer to the first element of a destination string and a pointer to the first element of a added string
 * set the pointer point equal to the destination string pointer
 * set the pointer point2 equal to added string pointer
 *
 * while point is not pointing to a character with value '\0'
 * 		increment point
 *
 *while point2 is not pointing a character with value '\0'
 *		set the value point is pointing to equal to the value that point 2 is pointing to
 *		increment point
 *		increment point2
 */

void stringAdd(char * destination, char * toAdd){
	char * point = destination;
	char * point2 = toAdd;

	while(*point != '\0'){
		point++;
	}

	while(*point2 != '\0'){
		*point = *point2;
		point++;
		point2++;
	}
}

/*Psudocode for stringCompare:
 * inputs: pointer to the first element of the first string and a pointer to the first element of the second string
 * set flag equal to true
 * set point equal to the pointer to the first element of the first string
 * set point2 equal to the pointer to the first element of the second string
 *
 * while the value that point is pointing to is not '\0' and the flag is true
 * 		if the value that point is pointing to is greater than the value that point2 is pointing to
 * 			set the return value equal to one
 * 			set the flag equal to false
 * 		else if the value that point is pointing to is greater than the value that point2 is pointing to
 * 			set the return value equal to -1
 * 			set the flag equal to false
 * 		else
 * 			set the return value equal to 0
 * 			increment point
 * 			increment point2
 */

int stringCompare(char * string1, char * string2){
	int returnValue;
	bool flag = true;
	char * point;
	char * point2;

	point = string1;
	point2 = string2;

	while(*point != '\0' && flag == true){
		if(*point > *point2){
			returnValue = 1;
			flag = false;
		}else if(*point < *point2 ){
			returnValue = -1;
			flag = false;
		}else{
			returnValue = 0;
			point++;
			point2++;
		}
	}

	return returnValue;
}

/*
 * Psuedocode for main:
 * do
 * 		display "1. stringLength"
 * 		display "2. stringNCopy"
 * 		display "3. stringAdd"
 * 		display "4. stringCompare"
 * 		display "5. quit"
 *
 * 		input the choice
 *
 * 		if the choice is equal to 1
 *			Display "enter a string to find the length of"
 *			input the variable input
 *			display the returned value from calling stringLength with input as an argument
 *		else if the choice is equal to 2
 *			input the variable input
 *			call stringNCopy with arguments input and output
 *			display the output
 *		else if the choice is equal to 3
 *			input base
 *			input to add
 *			call stringAdd with arguments base and to add
 *		else if the choice is equal to 4
 *			input string one
 *			input string two
 *			set comparison equal to the returned value of stringCompare with arguments string one and string two
 *
 *			if comparison is equal to 1
 *				display "String two is first in the dictionary"
 *			else if comparison is equal to -1
 *				display "String one is first in the dictionary"
 *			else if comparison is equal to 0
 *				display "The strings have the same value"
 *	while choice is not equal to 5
 */

int main(){
	int choice;

	do{
		cout << "Press:" << endl;
		cout << "1. stringLength" << endl;
		cout << "2. stringNCopy" << endl;
		cout << "3. stringAdd" << endl;
		cout << "4. stringCompare" << endl;
		cout << "5. quit" << endl;

		cin >> choice;

		if(choice == 1){
			char input[100];
			cout << "Enter a string to find the length of: ";
			cin >> input;
			cout << endl;

			cout << "The lengh of your string is " << stringLength(input) << endl;

		}else if (choice == 2){
			char input[100];
			char output[100];

			cout << "Enter a string to copy:" ;
			cin >> input;

			stringNCopy(output, input);

			cout << "The copied string: " << output << endl;

		}else if(choice == 3){
			char base[100];
			char toAdd[100];

			cout << "Enter your base string: ";
			cin >> base;
			cout << endl;

			cout << "Enter a string to add: ";
			cin >> toAdd;
			cout << endl;

			stringAdd(base, toAdd);

			cout << "Your final string: " << base << endl;
		}else if(choice == 4){
			char string1[100];
			char string2[100];
			int comparison;

			cout << "Enter your first string: ";
			cin >> string1;
			cout << endl;

			cout << "Enter your second string: ";
			cin >> string2;
			cout << endl;

			comparison = stringCompare(string1, string2);

			if(comparison == 1){
				cout << "String two is first in the dictionary" << endl;
			}else if(comparison == -1 ){
				cout << "String one is first in the dictionary" << endl;
			}else if(comparison == 0){
				cout << "String one and string two have the same value" << endl;
			}
		}
	}while(choice != 5);

	return 0;
}
