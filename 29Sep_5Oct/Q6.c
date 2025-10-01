//Write a program to check if a number is prime.

#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Not a prime number.\n");
    }
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime number.\n",n);
    }
    else
    {
        printf("%d is not a prime number.\n",n);
    }
}