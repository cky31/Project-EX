#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 0, y = 0, num = 1;

	while (num != 0) {

		printf("		[1] 비트 AND(&)\n");
		printf("\n");
		printf("		[2] 비트 OR(|)\n");
		printf("\n");
		printf("		[3] 비트 XOR(^)\n");
		printf("\n");
		printf("		[4] 비트 COMPLEMENT(~)\n");
		printf("\n");
		printf("		[0] 종료(stop)\n");
		printf("\n");
		printf("위 연산 중 하나를 선택하세요. >>");
		scanf("%d", &num);
		printf("\n\n\n");

		if (num > 0 && num < 4) {
			printf("비트 연산할 두 정수 입력 >>");
			scanf("%d %d", &x, &y);
			printf("\n");
			switch (num)
			{
			case 1: printf("    x = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((x >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", x);
				printf("    y = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((y >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", y);
				printf("x & y = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((x&y >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", x&y);
				break;
			case 2:printf("    x = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((x >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", x);
				printf("    y = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((y >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", y);
				printf("x | y = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((x | y >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", x | y);
				break;
			case 3:printf("    x = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((x >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", x);
				printf("    y = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((y >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", y);
				printf("x ^ y = ");
				for (int i = 31; i >= 0; i--) {
					printf("%c", ((x^y >> i) & 1) ? '1' : '0');
				}
				printf("  %d\n\n", x^y);
				break;
			default: printf("연산 번호를 잘못 입력하셨습니다."); break;
			}
		}
		else if (num == 4) {
			printf("비트 보수(~) 연산할 하나의 정수 입력 >>");
			scanf("%d", &x);
			printf("\n\n");
			printf("    x = ");
			for (int i = 31; i >= 0; i--) {
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("\n\n");
			printf("   ~x = ");
			for (int i = 31; i >= 0; i--) {
				printf("%c", ((~(x) >> i) & 1) ? '1' : '0');
			}
			printf("  %d\n\n", ~(x));
		}
		else if (num == 0) {
			printf("프로그램을 종료합니다.\n");
		}
		else printf("연산 번호를 잘못 입력하셨습니다.\n");
	}
	return 0;
}