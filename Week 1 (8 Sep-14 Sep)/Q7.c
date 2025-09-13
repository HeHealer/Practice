//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        fact=i*fact;
    }
    printf("The factorial od %d is: %d",n,fact);
}