/* sums the elements of an array */
#include <stdio.h>
#define SIZE 10
int sump(int * start, int * end); //declare

int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    //Because indexing starts at 0 , marbles + SIZE points to the next element after the end
    answer = sump(marbles, marbles + SIZE ); //&marbles[0], &marbles[10]
    printf("The total number of marbles is %ld.\n", answer);

    return 0;
}

/* use pointer arithmetic */
int sump(int * start, int * end) //start = &marbles[0], end = &marbles[10]
{
    int total = 0;

    while (start < end)
    {
        total += *start; // add value to total
        start++; // advance pointer to next element
    }

    return total;
}