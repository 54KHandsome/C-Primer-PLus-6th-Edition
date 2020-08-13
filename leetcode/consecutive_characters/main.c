#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2; //if num1 is greater than num2 then return num1, else return num2
}

int main(char * s){
    int maxLength = 1;
    char cur_char = s[0]; //getting the most left char
    int cur_length = 1;
    int size = strlen(s); //get the length of the string

    for(int i = 1; i < size; i++){
        if(cur_char == s[i]){ //if they are the same
            cur_length += 1; //counting how many is duplicate
        }
        else{
            maxLength = max(maxLength, cur_length); //get the max of the 2 number
            cur_length = 1; //reset the cur_length to 1 b/c it's starting over
            cur_char = s[i]; //set the current checking char to cur_char
        }
    }

    return max(maxLength, cur_length);
}
