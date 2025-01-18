/*
--------------------------------------------------
Project: a1q3
File:    quadratic.c
Author:  Sushant Sah
Version: 2025-01-15
--------------------------------------------------
*/
#include "quadratic.h"
#include <math.h>
/**
 * Compute and return solution type of given quadratic equation ax*x + bx + c = 0
 *
 * @param a  - quadratic coefficient
 * @param b  - linear coefficient
 * @param c - constant coefficient
 * @return - 0 if not quadratic equation, i.e. a=0;
 *           1 for one unique real solution;
 *           2 for two distinct real solutions;
 *           3 for two complex solutiions
 */
int solution_type(float a, float b, float c){
    int sols = 0; 
    int ans;

if (a == 0) {
    sols = 0;
} else { 
    ans = (b*b) - (4*a*c);

    if(ans < 0 ){
        sols = 3; 
    } 
    else if(ans == 0){
        sols = 1;
    }
    else if(ans > 0){
        sols = 2;
    }
    else{ 
        sols = 0;
    
    }
}
    return sols;
}

/**
 * Compute and return unique or bigger real roots of given quadratic equation ax*x + bx + c = 0 of types 1 and 2.
 * @param a  - quadratic coefficient
 * @param b  - linear coefficient 
 * @param c - constant coefficient
 * @return - the unique real root or the bigger real root if the quadratic equation has two distinct real roots 
             Ohterwise, return 0.
 */
float real_root_big(float a, float b, float c){
// type 1 = b^2-4ac = 0 (one sol)
// type 2 = b^2-4ac > 0 (two sol)
float ans; 
int sol_type = solution_type(a,b,c); 

if(a == 0 || sol_type == 3){
    return 0;
}

ans = (b*b) - (4*a*c);
if(sol_type == 1){
    return (-b / (2*a));
}
else if(sol_type == 2){
    float root1 = ((-b + sqrt(ans)) / (2*a));
    float root2 = ((-b - sqrt(ans)) / (2*a));

    if(root1>root2){
        return root1; 
    } else{
        return root2;
    }
} 
return 0; 
}

/**
 * Compute and return unique or smaller real roots of given quadratic equation ax*x + bx + c = 0 of types 1 and 2.
 * @param a  - quadratic coefficient
 * @param b  - linear coefficient 
 * @param c - constant coefficient
 * @return - 0 if not a == 0
             1 if having two complex solutions
             2 if the unique real root or the smaller real root if the quadratic equation has two distinct real roots 
             Ohterwise, return 0.
 */
float real_root_small(float a, float b, float c){
float roots; 
int ans;
int sols; 

if(a == 0){
    return 0;
}
    ans = (b*b) - (4*a*c);

if(ans < 0){
    return 0; 
}
else if(ans == 0){
    sols = -b / (2*a);
    return sols;
} else{
    float root1 = ((-b + sqrt(ans)) / (2*a));
    float root2 = ((-b - sqrt(ans)) / (2*a));

    if(root1 > root2){
        return root2; 
    } else{
        return root1;
    }
}
}