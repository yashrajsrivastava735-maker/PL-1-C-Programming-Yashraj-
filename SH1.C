/*
Program (1) -> Write a program to make use of basic Input/Output functions using different data types.
Solution(1) -> Predefined Values
*/

#include <stdio.h>

int main()
{
    int roll_num;
    float per;
    char grade;

    roll_num = 30;
    per = 88.88;
    grade = 'A';

    printf("----- Student Information -----\n");

    printf("\n Roll Number : %d", roll_num);
    printf("\n Percentage : %f", per);
    printf("\n Grade      : %c", grade);
    return 0;
}