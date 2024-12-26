// Written by: H.G, finished on
// Filename: main.c
// Computes a sleep schedule
#include <stdio.h>

void display_schedule(int wakeup, int hours_of_sleep) {
	int count = 24;
	count -= hours_of_sleep;
	for (int i=0; i<count; i++) {
		printf("Hour %d %d:00\n", i+1, i+wakeup);
	}
}

int main(void) {
	int wakeup = 4;
	
	printf("Choose what time you want to wake up at:\n");
	scanf("%d", &wakeup);
	printf("This is your schedule today, choose a time and activity to include in it.\n\n");
	display_schedule(wakeup, 8);
	return 0;
}
