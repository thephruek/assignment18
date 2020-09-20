#include<stdio.h>
int main() {
	int x, a, y = 890, z = 1550, total, b;
	printf("================================\n");
	printf("|             *****            |\n");
	printf("| WELCOME TO DARUMA RESORT&SPA |\n");
	printf("|  Room 1-5 is 890 Bath/Night  |\n");
	printf("| Room 6-10 is 1550 Bath/Night |\n");
	printf("================================\n");
	printf("Please choose a rooms(Room 1-Room 10) : ");
	scanf_s("%d", &x);
	printf("Number of rooms (Max 5): ");
	scanf_s("%d", &a);
	printf("Number of days to stay : ");
	scanf_s("%d", &b);
	if (x > 0 && x <= 5) {
		if (a < 0 || a>5) {
			printf("Error ");
		}
		else {
			total = y * a * b;
			printf("Price = %d Bath", total);
		}
	}
	else if (x > 5 && x <= 10) {
		if (a < 0 || a>5) {
			printf("Error ");
		}
		else {
			total = z * a * b;
			printf("Price = %d Bath", total);
		}
	}
	return 0;
}