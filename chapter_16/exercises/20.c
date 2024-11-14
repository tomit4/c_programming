#include <stdio.h>

enum { NORTH, SOUTH, EAST, WEST } direction;
struct place walk(struct place my_place);

struct place {
	int x;
	int y;
};

int main(void)
{
	struct place my_place;
	my_place.x = 0;
	my_place.y = 0;

	direction = EAST;
	my_place = walk(my_place);
	direction = EAST;
	my_place = walk(my_place);
	direction = EAST;
	my_place = walk(my_place);

	direction = WEST;
	my_place = walk(my_place);

	direction = SOUTH;
	my_place = walk(my_place);
	direction = SOUTH;
	my_place = walk(my_place);

	direction = NORTH;
	my_place = walk(my_place);
	direction = NORTH;
	my_place = walk(my_place);
	direction = NORTH;
	my_place = walk(my_place);
	direction = NORTH;
	my_place = walk(my_place);
	direction = NORTH;
	my_place = walk(my_place);

	printf("my_place :=>\n{\n    x: %d;\n    y: %d;\n}\n", my_place.x,
	       my_place.y);

	return 0;
}

struct place walk(struct place my_place)
{
	switch (direction) {
	case NORTH:
		printf("walking north...\n");
		my_place.y--;
		break;
	case SOUTH:
		printf("walking south...\n");
		my_place.y++;
		break;
	case WEST:
		printf("walking west...\n");
		my_place.x--;
		break;
	case EAST:
		printf("walking east...\n");
		my_place.x++;
		break;
	default:
		break;
	}

	return my_place;
}
