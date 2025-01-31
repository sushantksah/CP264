/*
--------------------------------------------------
Project: a1q1
File:    mychar.c
Author:  Sushant Sah
Version: 2025-01-15
--------------------------------------------------
*/
#include "mychar.h"
/**
 * Determine the type of a char character.
 *
 * @param c - char type
 * @return - 0 if c is a digit
             1 if c is an arithmetic operator
             2 if c is the left parenthsis (
             3 if c is the right parenthsis )
             4 if c is an English letter;
             otherwise -1.
 */
int mytype(char c){
	int r = -1;
	char leftpar = '(';
	char rightpar = ')';
	char validchars[] = "+-*/%";

	if(c >= '0' && c <='9')
		r = 0;


	else if(c == leftpar)
		r = 2;

	else if(c == rightpar)
		r = 3;

	// this line works because the complier tests their ASCII representations, and if the
	// characters are within the range it will return 1
	else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // || is the logical OR
		r = 4;

	//strchr checks if a character exits in a NULL-TERMINATED STRING
	else {
		int i = 0;
		while(validchars[i] != '\0'){
			if (validchars[i] == c){
				r = 1;
				break;
			}
			i++;
		}
	}


	return r;

}

/**
 * Flip the case of an English character.
 *
 * @param c - char type
 * @return -  c's upper/lower case letter if c is a lower/upper case English letter.
 */
char case_flip(char c) {
	char r;
	// This works as lower versions are 32 characters away from their corresponding
	// capital versions
	if (c >= 'A' && c <= 'Z'){
		r = c + 32;
	}
	else if (c >= 'a' && c <= 'z'){
		r = c - 32;
	}
	else{
		r = c;
	}

	return r;
}
/**
 * Convert digit character to the corresponding integer value.
 *
 * @param c - char type value
 * @return - its corresponding integer value if c is a digit character;
 *           otherwise -1.
 */
int digit_to_int(char c){
	int value = -1;
	//By subtracting zero, you get the difference in their ASCII corresponding numbers
	// ex. 0 = 48, 7 = 55, 55-48 = 7
	if(c >= '0' && c <= '9'){
		value = c - '0';
	}
	return value;
}
