/* precedence in pointer operations */
#include <stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(void)
{
    int * p1, * p2, * p3;

    p1 = p2 = data; //p1 = p2 = &data[0]
    p3 = moredata; //p3 = &moredata[0]

    printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1 , *p2 , *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++ , *++p2 , (*p3)++);
    printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1 , *p2 , *p3);

    return 0;
}