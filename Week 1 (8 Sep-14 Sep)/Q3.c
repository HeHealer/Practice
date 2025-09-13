//Write Program to Find Greatest among 3 numbers.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("A is the greatest number");
    }
    else if ((b>a)&&(b>c))
    {
        printf("B is the greatest number");
    }
    else
    {
        printf("C is the greatest number");
    }
}