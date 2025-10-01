//WAP to accept a number from a user and find whether the number is in febonicci series or not.

#include<stdio.h>
int main(){
    int n,n1=0,n2=1,c,d,i;
    printf("Enter a number you need to find: ");
    scanf("%d",&n);
    printf("Enter another number: \n");
    scanf("%d",&d);
    printf("%d\n",n1);
    printf("%d\n",n2);
    for(i=2;i<d;i++)
    {
        c=n1+n2;
        printf("%d",c);
        n1=n2;
        if(c==n)
        {
            printf("Found\n");
        }
        else
        {
            printf("Not found\n");
        }
    }
}