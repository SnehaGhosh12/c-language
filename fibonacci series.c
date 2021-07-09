/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, successive_term = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", n1, n2);
    successive_term = n1 + n2;

    while (successive_term <= n) {
        printf("%d, ", successive_term);
        n1 = n2;
        n2 = successive_term;
        successive_term = n1 + n2;
    }

    return 0;
}
