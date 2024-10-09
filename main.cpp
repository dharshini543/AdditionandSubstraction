
#include<stdio.h>


int add(int a1, int a2)
{
    int sum;
    sum = a1 + a2;
    return sum;
}

int sub(int b1, int b2)
{
    int diff;
    diff = b1 - b2;
    return diff;
}

int main()

{
    int a1 = 0,a2 = 0,a3 = 1,a4 = 0,a5 = 1,a6 = 1,b1 = 1,b2 = 1,b3 = 1,b4 = 2;
    int r1, r2, r3, r4, r5;
    r1 = add(a1 , a2);
    r2 = add(a3 , a4);
    r3 = add(a5 , a6);
    r4 = sub(b1 , b2);
    r5 = sub(b3 , b4);
    printf("r1 = %d\n",r1);
    printf("r2 = %d\n",r2);
    printf("r3 = %d\n",r3);
    printf("r4 = %d\n",r4);
    printf("r5 = %d\n",r5);


    return 0;
}

