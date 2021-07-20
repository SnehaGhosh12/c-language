/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    printf("\n Enter the year :- ");
    scanf("%d",&year);
    if(year%400==0)
    printf(" \n The year is not leap year");
    else if(year%4==0&& year%100!=0)
    printf("\n The year is a leap year ");

    return 0;
}

