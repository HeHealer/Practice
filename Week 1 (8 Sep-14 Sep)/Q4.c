//Write Program to Find Smallest among 3 numbers.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a<b)&&(a<c))
    {
        printf("A is the smallest number");
    }
    else if ((b<a)&&(b<c))
    {
        printf("B is the smallest number");
    }
    else
    {
        printf("C is the smallest number");
    }
}