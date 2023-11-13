// 8. Write a program to print squares of the first 10 natural numbers

// Date-> 11/13/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{
    int num = 1;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",num*num);
        num += 1;
    }
    

    return 0;
}