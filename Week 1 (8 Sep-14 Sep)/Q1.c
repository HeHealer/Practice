//Print the multiplication table of any number entered by the user.

#include<stdio.h>
int main(){
    int i,n,product;
    printf("Enter a number you want the table of: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        product=i*n;
        printf("%d*%d= %d\n",n,i,product);
    }
    return 0;
}