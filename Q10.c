//10. Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("print a table of N\n enter number : ");
    scanf("%d%d",&num3,&num2);
    for(num1=1;num1<=num2;num1++)
    {
       
            printf("%d ",num3*num1);
        
    }
    return 0;
}