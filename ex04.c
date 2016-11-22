#include <stdio.h>

int main(void) {
	int a, b, c, num = 2;

	for (a = 0; a<10; a++) {
		for (b = a; b<9; b++)
			printf("%c ", ' ');
		for (c = 0; c <= a; num++) {
			for (b = 2; b<num; b++) {
				if (num % b == 0) break;
			}
			if (b == num) {
				printf("%3d ", num);
				c++;
			}
		}
		printf("\n");
	}
	return 0;
}