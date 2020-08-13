#include <stdio.h>
#include <stdlib.h>
/*
Standard C library provides qsort function that can be used for sorting an array
https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
https://www.geeksforgeeks.org/c-qsort-vs-c-sort/#:~:text=Standard%20C%20library%20provides%20qsort,an%20array%20of%20any%20type.

comparator function
void qsort (void* base, size_t num, size_t size, int (*comparator)(const void*, const void*));
*/




int cmpFunc (const void * x, const void * y) {
   return ( *(int*)x - *(int*)y );
}

int main(int* stones, int stonesSize){

    while (stonesSize > 1){

        qsort(stones, stonesSize, sizeof(int), cmpFunc); //sorted from least to greatest

        int y = stones[stonesSize - 1]; //taken the greatest
        int x = stones[stonesSize - 2]; //taken the second greatest

        if(y != x){
            stones[stonesSize - 2] = stones[stonesSize - 1] - stones[stonesSize - 2]; //subtract the greatest and the second greatest
            stonesSize--; //decrease the stonesSize by 1
        }
        else{
            stones[stonesSize - 2] = 0; //have this line to fix [2,2]
            stonesSize -= 2; //decrease the stonesSize by 2, so when the loop start again, it would skip to the third greatest

        }

    }

    return stones[0];
}
