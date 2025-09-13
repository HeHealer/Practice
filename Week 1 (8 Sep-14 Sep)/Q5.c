//Write a program too find wheather the entered number is even or odd.

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    (a%2==0)?printf("The number is even"):printf("The number is odd");
}