#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 1, b;

	while (a != 0) {
		printf("������ �ϳ� �Է��ϼ���. >> ");
		scanf("%d", &a);

		if (a == 0) printf("�����մϴ�.\n");
		else {
			printf("\n\n	������: ");

			for (int i = 31; i >= 0; i--) {
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("\n\n");
			printf("	������:%32o  %o\n\n", a, a);
			printf("	��������:%32X  %X\n\n\n", a, a);
		}
	}
	return 0;
}
