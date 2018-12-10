//
//  main.c
//  BasicCalculator
//
//  Created by Nicholas Morris on 10/12/18.
//  Copyright © 2018 Nicholas Morris. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * Finds rhe result of an expression from left to right. (no operator precedence)
 */

int main(int argc, const char * argv[]) {
    //Define variables
    float number1, number2, number3, result = 0.0;
    char operand1, operand2;
    //Prompt for expression
    printf("Enter an expression: ");
    //Store expression into variables
    scanf("%f%c%f%c%f", &number1,&operand1,&number2,&operand2,&number3);
    //Determine result from first operator
    switch(operand1){
        case '*':
            result = number1*number2;
            break;
        case '/':
            result = number1/number2;
            break;
        case '+':
            result = number1+number2;
            break;
        case '-':
            result = number1-number2;
            break;
    }
    //Determine result from second operator
    switch(operand2){
        case '*':
            result = result*number3;
            break;
        case '/':
            result = result/number3;
            break;
        case '+':
            result = result+number3;
            break;
        case '-':
            result = result-number3;
            break;
    }
    printf("Value of expression: %f\n", result);
    /*
     *Finds the factorial of a number
     */
//    int integer;
//    double factorial = 1;
//    printf("Enter a positive integer: ");
//    scanf("%d", &integer);
//    int integer_OG = integer;
//    while(integer > 0){
//        factorial *= integer;
//        integer--;
//    }
//    printf("Factorial of %d: %G\n", integer_OG, factorial);
    
    /*
     * Finds the average length of a word to 1 decimal place
     */
    
//    printf("Enter a sentence: ");
//    char ch;
//    int word_length = 0, words = 0, sum = 0;
//    float average_length;
//    while((ch = getchar()) != '\n'){
//        if(ch == '.'){
//            continue;
//        }
//        else if(ch == ' '){
//            word_length = 0;
//            words += 1;
//            continue;
//        }
//        word_length += 1;
//        sum +=1;
//
//    }
//    words += 1;
//    average_length = (float)sum/(float)words;
//    printf("The average word length: %.1f\n", average_length);
    
    
    
    
    
    
    
}
