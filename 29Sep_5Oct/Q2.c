//WAP to find factorial of a given number.

#include<stdio.h>
int main(){
    int n,i=1,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("The Factorial of %d is: %d",n,f);
}