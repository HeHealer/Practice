//Write a program to Display day of week using switch case.

#include<stdio.h>
int main(){
    int day;
    printf("Enter a day of the week: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("The 1st day of the week is Monday");
        break;
    case 2:
        printf("The 2nd day of the week is Tuesday");
    case 3:
        printf("The 3rd day of the week is Wednesday");
        break;
    case 4:
        printf("The 4th day of the week is Thursday");
        break;
    case 5:
        printf("The 5th day of the week is Friday");
        break;
    case 6:
        printf("The 6th day of the week is Saturday");
        break;
    case 7:
        printf("The 7th day of the week is Sunday");
        break;
    default:
        printf("No such day");
        break;
    }
}