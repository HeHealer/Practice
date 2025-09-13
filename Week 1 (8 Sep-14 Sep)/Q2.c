//Write a program to reverse the order of the digits.

#include<stdio.h>
int main(){
    int n,i,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        printf("The reversed number is: %d",rem);
        n=n/10;
    }
}