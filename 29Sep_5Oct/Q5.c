//Write a program to print all factors of a given number.

#include<stdio.h>
int main(){
    int n,i,d;
    printf("Enter a number you want the factors of: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(d=n%i==0)
        {
            printf("%d",i);
            printf("\n");
        }
    }
}