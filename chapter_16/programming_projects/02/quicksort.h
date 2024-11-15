#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

void quicksort(struct part inventory[], int low, int high);
int split(struct part inventory[], int low, int high);
