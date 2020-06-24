/* Programming Exercise 2-3 */

// Write a program that converts your age in years to days and displays both values. At this
// point, don't worry about fractional years and leap years.

#include<stdio.h>

int main(void){
    int age,year,month;
    age = 23;
    year = age;
    month = year*12;
    printf("year = %d, month = %d", year, month);
    return 0;
}