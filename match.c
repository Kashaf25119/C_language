#include <stdio.h>
#include<conio.h>
int main() {
    int matchsticks = 21, user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: Pick 1, 2, 3, or 4 matchsticks. Whoever picks the last matchstick loses.\n");

    while (matchsticks > 1) {
        // User's turn
        printf("\nMatchsticks left: %d\n", matchsticks);
        printf("Your turn! Pick 1, 2, 3, or 4 matchsticks: ");
        
        if (scanf("%d", &user_pick) != 1) { 
            printf("Invalid input! Please enter a number between 1 and 4.\n");
            while (getchar() != '\n');  
            continue;
        }

        // Validate input
        if (user_pick < 1 || user_pick > 4 || user_pick > matchsticks) {
            printf("Invalid choice! Pick between 1 and 4 matchsticks.\n");
            continue;
        }

        matchsticks -= user_pick;

        // Check if computer lost
        if (matchsticks <= 1) {
            printf("Only one matchstick left. Computer lost! You wins.\n");
            break;
        }

        // Computer's turn 
        computer_pick = (matchsticks - 1) % 5;
        if (computer_pick == 0) {
            computer_pick = 1;
        }

        printf("Computer picks %d matchstick(s).\n", computer_pick);
        matchsticks -= computer_pick;

        // Check if user lost 
        if (matchsticks <= 1) {
            printf("Only one matchstick left. Computer win! You lost.\n");
            break;
        }
    }

    return 0;
}
