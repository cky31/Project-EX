#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 0, y = 0, num = 1;

	while (num != 0) {

		printf("		[1] ��Ʈ AND(&)\n");
		printf("\n");
		printf("		[2] ��Ʈ OR(|)\n");
		printf("\n");
		printf("		[3] ��Ʈ XOR(^)\n");
		printf("\n");
		printf("		[4] ��Ʈ COMPLEMENT(~)\n");
		printf("\n");
		printf("		[0] ����(stop)\n");
		printf("\n");
		printf("�� ���� �� �ϳ��� �����ϼ���. >>");
		scanf("%d", &num);
		printf("\n\n\n");

		if (num > 0 && num < 4) {
			printf("��Ʈ ������ �� ���� �Է� >>");
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
			default: printf("���� ��ȣ�� �߸� �Է��ϼ̽��ϴ�."); break;
			}
		}
		else if (num == 4) {
			printf("��Ʈ ����(~) ������ �ϳ��� ���� �Է� >>");
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
			printf("���α׷��� �����մϴ�.\n");
		}
		else printf("���� ��ȣ�� �߸� �Է��ϼ̽��ϴ�.\n");
	}
	return 0;
}