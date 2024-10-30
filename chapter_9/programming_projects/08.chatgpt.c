#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DICE_SIDES 6

int roll_dice(void);
bool play_game(void);

int main(void)
{
	int wins = 0, losses = 0;
	char player_input;
	srand((unsigned)time(NULL)); // Seed the random number generator

	do {
		bool player_wins = play_game();

		if (player_wins) {
			wins++;
		} else {
			losses++;
		}

		printf("Play again? (y/n): ");
		scanf(" %c", &player_input); // Leading space handles any
					     // leftover newline

	} while (player_input == 'y' || player_input == 'Y');

	printf("Wins: %d Losses: %d\n", wins, losses);

	return 0;
}

int roll_dice(void)
{
	int roll1 = rand() % DICE_SIDES + 1;
	int roll2 = rand() % DICE_SIDES + 1;
	return roll1 + roll2;
}

bool play_game(void)
{
	int roll = roll_dice();
	int point = 0;

	printf("You rolled: %d\n", roll);

	if (roll == 7 || roll == 11) {
		printf("You win!\n");
		return true;
	} else if (roll == 2 || roll == 3 || roll == 12) {
		printf("You lose!\n");
		return false;
	} else {
		point = roll;
		printf("Your point is: %d\n", point);
	}

	while (true) {
		roll = roll_dice();
		printf("You rolled: %d\n", roll);
		if (roll == point) {
			printf("You win!\n");
			return true;
		} else if (roll == 7) {
			printf("You lose!\n");
			return false;
		}
	}
}
