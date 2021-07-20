
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the age of the candidate:");
    scanf("%d",&a);
    if (a>= 18)
    printf("The candidate is eligible for voting");
    else
    printf("The candidate is not eligible for voting:");
    
    return 0;
}


