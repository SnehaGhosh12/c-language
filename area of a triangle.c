#include<stdio.h>
#include<conio.h>
int main(){
float s,a,b,c,area;
printf("Enter the sides of the triangle:\n");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of the triangle is:%f",area);
return 0;
}
