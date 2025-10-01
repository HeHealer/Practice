//Create a voting system.

#include<stdio.h>
int main(){
    int vote;
    int x=3,y=6,z=4;
    char choice;
    printf("Do you want to vote? Y for yes and N for no: ");
    scanf(" %c", &choice);
    if (choice == 'n' || choice == 'N')
    {
        printf("Bye bye\n");
        return 0;
    }
    while(1)
    {
        printf("Enter 1 for x\nEnter 2 for y\nEnter 3 for z\n");
        printf("Enter your vote: ");
        scanf("%d",&vote);
        switch (vote)
        {
        case 1:
            x=x+1;
            printf("You voted for x\n");
            break;
        case 2:
            y=y+1;
            printf("You voted for y\n");
            break;
        case 3:
            z=z+1;
            printf("You voted for z\n");
            break;
        default:
            printf("Enter a valid vote\n");
            break;
        }
        printf("Do you want to vote again? Y for yes and N for no: ");
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N')
        {
            printf("Thanks For Voting!\n");
            break;
        }
    }
    printf("Final Vote Count:\n");
    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Z: %d\n", z);
}