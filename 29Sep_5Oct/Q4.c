//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){
    int n,sum=0,i,odd;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        odd=2*i-1;
        sum+=odd;
    }
    printf("The sum of first %d odd numbers is: %d",n,sum);
}