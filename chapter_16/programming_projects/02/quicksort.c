#include "quicksort.h"

void quicksort(struct part inventory[], int low, int high)
{
	int middle;

	if (low >= high) {
		return;
	}
	middle = split(inventory, low, high);
	quicksort(inventory, low, middle - 1);
	quicksort(inventory, middle + 1, high);
}

int split(struct part inventory[], int low, int high)
{
	struct part part_element = inventory[low];

	for (;;) {
		while (low < high &&
		       part_element.number < inventory[high].number) {
			high--;
		}
		if (low >= high) {
			break;
		}
		inventory[low++] = inventory[high];

		while (low < high &&
		       inventory[low].number <= part_element.number) {
			low++;
		}
		if (low >= high) {
			break;
		}
		inventory[high--] = inventory[low];
	}

	inventory[high] = part_element;

	return high;
}
