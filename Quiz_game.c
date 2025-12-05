#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char question[1000];
    char A[1000];
    char B[1000];
    char C[1000];
    char D[1000];
    char correct;
} Quiz;

int ask_question(Quiz q){
    char input[10];
    printf("\n%s\n", q.question);
    printf("A. %s\n", q.A);
    printf("B. %s\n", q.B);
    printf("C. %s\n", q.C);
    printf("D. %s\n", q.D);
    printf("Your answer (A, B, C, D): ");

    if (fgets(input, sizeof(input), stdin) != NULL)
    {
        input[strcspn(input, "\n")] = '\0';
        if (strlen(input) == 1 && strchr("ABCD", input[0]))
        {
            if (input[0] == q.correct)
            {
                printf("Correct!\n");
                return 1;
            }
            else
            {
                printf("Wrong! Correct answer: %c\n", q.correct);
            }
        }
        else
        {
            printf("Invalid input. Please enter A, B, C, or D.\n");
        }
    }
    return 0;
}

int run_quiz(Quiz *questions, int total)
{
    int score = 0;
    for (int i = 0; i < total; i++)
    {
        score += ask_question(questions[i]);
    }
    return score;
}

void show_result(int score, int total)
{
    printf("\n=== RESULT ===\n");
    printf("You scored %d out of %d.\n", score, total);

    if (score == total)
    {
        printf("Excellent! Perfect score!\n");
    }
    else if(score >= total / 2)
    {
        printf("Good job! Keep practicing.\n");
    }
    else
    {
        printf("Better luck next time.\n");
    }
}

int main(){
    Quiz general[] =
    {
        {"Capital of India?", "Mumbai", "Delhi", "Kolkata", "Chennai", 'B'},
        {"Largest planet?", "Earth", "Mars", "Jupiter", "Saturn", 'C'},
        {"National animal of India?", "Tiger", "Lion", "Elephant", "Leopard", 'A'}
    };
    Quiz programming[] =
    {
        {"Creator of C language?", "Dennis Ritchie", "James Gosling", "Bjarne Stroustrup", "Guido van Rossum", 'A'},
        {"Data type for characters?", "int", "char", "float", "double", 'B'},
        {"Header for memory allocation?", "stdio.h", "stdlib.h", "string.h", "math.h", 'B'}
    };
    Quiz science[] =
    {
        {"H2O is?", "Hydrogen", "Oxygen", "Water", "Carbon dioxide", 'C'},
        {"Speed of light?", "3x10^8 m/s", "3x10^6 m/s", "3x10^5 km/s", "3000 m/s", 'A'},
        {"Human blood color?", "Blue", "Green", "Red", "Yellow", 'C'}
    };

    char input[10];
    char choice;
    do {
        printf("\n=== QUIZ GAME MENU ===\n");
        printf("1. General Knowledge Quiz\n");
        printf("2. Programming Quiz\n");
        printf("3. Science Quiz\n");
        printf("0. Exit\n");
        printf("Enter your choice (0-3): ");

        if (fgets(input, sizeof(input), stdin) == NULL) continue;
        input[strcspn(input, "\n")] = '\0';
        if (strlen(input) != 1) {
            printf("Invalid choice. Please enter a single digit (0-3).\n");
            continue;
        }

        choice = input[0];

        switch (choice)
        {
            case '1':
                show_result(run_quiz(general, sizeof(general)/sizeof(general[0])), sizeof(general)/sizeof(general[0]));
                break;
            case '2':
                show_result(run_quiz(programming, sizeof(programming)/sizeof(programming[0])), sizeof(programming)/sizeof(programming[0]));
                break;
            case '3':
                show_result(run_quiz(science, sizeof(science)/sizeof(science[0])), sizeof(science)/sizeof(science[0]));
                break;
            case '0':
                printf("Exiting game. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 0 and 3.\n");
        }
    } while (choice != '0');
    
    return 0;
}
