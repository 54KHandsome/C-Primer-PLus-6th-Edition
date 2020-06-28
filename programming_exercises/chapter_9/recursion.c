//recursion illustration

/*
If you find this a bit confusing, think about when you have a chain of function calls, with
fun1() calling fun2() , fun2() calling fun3() , and fun3() calling fun4() . When fun4()
finishes, it passes control back to fun3() . When fun3() finishes, it passes control back to
fun2() . And when fun2() finishes, it passes control back to fun1() . The recursive case works
the same, except that fun1() , fun2() , fun3() , and fun4() are all the same function.
*/

#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n); // 1

    if (n < 4)
        up_and_down(n+1);

    printf("LEVEL %d: n location %p\n", n, &n); // 2
}