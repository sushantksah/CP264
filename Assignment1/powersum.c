/*
--------------------------------------------------
Project: a1q2
File:    powersum.c
Author:  Sushant Sah
Version: 2025-01-15
--------------------------------------------------
*/
#include "powersum.h"
/**
 * Depect if overflow in power computing of b to power of n
 *
 * @param b - the base
 * @param n - the exponent
 * @return - 1 if overflow happens, 0 otherwise
 */
int power_overflow(int b, int n) {
	int i;
	int prod = 1;
	int INT_MAX = 2147483647;
	int INT_MIN = -2147483648;

	if(n == 0 && b==0){
		return 0;
	}

	for(i = 1; i <=n; i++){
		if(b > 0 && prod > INT_MAX/b){
			return 1; //overflow
		}
		if (b < 0 && prod < INT_MIN/b){
			return 1; //overflow
		}
		prod *= b;
	}
	return 0;
}
/**
 * Compute and return b to power of n.
 *
 * @param b - the base
 * @param n - the exponent
 * @return - b to the power of n if no overflow happens, 0 otherwise
 */
int mypower(int b, int n){
	int i;
	int INT_MAX = 2147483647;
	int prod = 1;
	for (i = 1; i <= n; i++) {
		if(prod > INT_MAX / b){
			return 0; // overflow
		}
	    prod *= b;
	}
	return prod;
}

/**
 * Compute and return the sum of powers.
 *
 * @param b - the base
 * @param n - the exponent
 * @return -  the sum of powers if no overflow happens, 0 otherwise
 */
int powersum(int b, int n){
	int i;
	int INT_MAX = 2147483647;
	int prod = 1;
	int sum = 1;
	for (i = 1; i <= n; i++) {
		if(prod > INT_MAX / b){
			return 0; // overflow
		}
	    prod *= b;
		sum += prod;
	}
	return sum;
}

