#include <stdio.h>
#include <stdlib.h>

int main(int numBottles, int numExchange){
    numBottles = 15;
    numExchange = 4;
    int emptyBottles = 0;
    int drankBottles = 0;
    int numExchanged = 0;

    while (numBottles > 0)
    {
        drankBottles += numBottles;
        emptyBottles += numBottles;
        numBottles = 0;
        numExchanged = emptyBottles / numExchange;
        numBottles += numExchanged;
        emptyBottles = emptyBottles % numExchange;
    }

    printf("%d",drankBottles);
    return drankBottles;
}
