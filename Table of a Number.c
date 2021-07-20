/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter an integer:");
    scanf("%d",&  num);
    
    for (i=1;i<=10;i++)
    {
    printf("%d*%d=%d \n",num,i,num*i);
    }
    return 0;
}
