#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 1, b;

	while (a != 0) {
		printf("정수를 하나 입력하세요. >> ");
		scanf("%d", &a);

		if (a == 0) printf("종료합니다.\n");
		else {
			printf("\n\n	이진수: ");

			for (int i = 31; i >= 0; i--) {
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("\n\n");
			printf("	팔진수:%32o  %o\n\n", a, a);
			printf("	십육진수:%32X  %X\n\n\n", a, a);
		}
	}
	return 0;
}
