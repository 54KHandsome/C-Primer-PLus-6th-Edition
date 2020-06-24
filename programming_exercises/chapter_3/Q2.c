/* Write a program that asks you to enter an ASCII code value, such as 66, and then prints
the character having that ASCII code. */

#include<stdio.h>

int main(void){
    char ascii;
    printf("Enter an ASCII code value:\n");
    scanf("%d", &ascii);
    printf("Inserted ASCII code: %d, character: %c", ascii, ascii);
    return 0;
}