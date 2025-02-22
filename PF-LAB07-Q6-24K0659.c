#include <stdio.h>

int main() {
    int matchsticks = 21; 
    int playerPick, computerPick;

    printf("Welcome to the Matchstick Game!\n");
    printf("There are %d matchsticks.\n", matchsticks);

    while (matchsticks > 0) {
    
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &playerPick);

        if (playerPick < 1 || playerPick > 4) {
            printf("Invalid input. You must pick between 1 and 4 matchsticks.\n");
            continue; 
        }

        if (playerPick > matchsticks) {
            printf("You cannot pick more matchsticks than are available. Try again.\n");
            continue;
        }

        matchsticks -= playerPick;
        printf("You picked %d matchsticks. %d matchsticks remaining.\n", playerPick, matchsticks);

        if (matchsticks == 0) {
            printf("You picked the last matchstick. You lose!\n");
            break; 
        }

        computerPick = 5 - playerPick; 
        if (computerPick > matchsticks) {
            computerPick = matchsticks; 
        }

        matchsticks -= computerPick;
        printf("Computer picked %d matchsticks. %d matchsticks remaining.\n", computerPick, matchsticks);

        if (matchsticks == 0) {
            printf("The computer picked the last matchstick. The computer loses!\n");
            break; 
        }
    }

    return 0;
}
