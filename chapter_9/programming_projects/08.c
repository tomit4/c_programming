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
	bool play_again = true, player_wins;

	srand((unsigned)time(NULL));

	while (play_again) {
		char player_input;
		player_wins = play_game();

		if (player_wins) {
			wins++;
		} else {
			losses++;
		}

		printf("Play again? ");
		scanf(" %c", &player_input);

		if (player_input != 'y') {
			play_again = false;
		}
	}

	printf("Wins: %d Losses: %d\n", wins, losses);

	return 0;
}

int roll_dice(void)
{
	int roll1, roll2;

	roll1 = rand() % DICE_SIDES + 1;
	roll2 = rand() % DICE_SIDES + 1;

	return roll1 + roll2;
}

bool play_game(void)
{
	int roll, point = 0;
	bool still_playing = true, you_win = false;

	roll = roll_dice();
	printf("You rolled: %d\n", roll);

	while (still_playing) {
		if (point == 0) {
			if (roll == 7 || roll == 11) {
				you_win = true;
				still_playing = false;
			} else if (roll == 2 || roll == 3 || roll == 12) {
				you_win = false;
				still_playing = false;
			} else {
				point = roll;
				printf("Your point is: %d\n", point);
			}
		} else {
			roll = roll_dice();
			printf("You rolled: %d\n", roll);
			if (roll == point) {
				you_win = true;
				still_playing = false;
			} else if (roll == 7) {
				you_win = false;
				still_playing = false;
			}
		}
	}

	if (you_win) {
		printf("You win!\n");
	} else {
		printf("You lose!\n");
	}

	return you_win;
}
