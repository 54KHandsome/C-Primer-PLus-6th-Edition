//using a _Bool variable

#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");

    input_is_good = (scanf("%ld", &num) == 1);  //if scanf("%ld", &num) has a insert of a number then it's equal to 1, which make 1 == 1 become true

    while (input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}