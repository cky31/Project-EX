#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int x = 0, y = 0, dump = 0, num = 0;
	printf("��ȯ�� �� ������ �Է��ϼ���. >>");
	scanf("%d %d", &x, &y);
	printf("�Է��� �� ��: x = %d and y = %d\n\n\n", x, y);

	printf("�ӽ� ���� ���     �̿���[1]\n");
	printf("������ ��������   ��ȯ ���[2]\n");
	printf("������ ���������� ��ȯ ���[3]\n");
	printf("XOR ������ ^       �̿���[4]\n\n\n");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >>\n\n");
	scanf("%d", &num);

	switch (num)
	{
	case 1: dump = x; x = y; y = dump; printf("��ȯ�� �� ��: x = %d and x = %d\n", x, y); break;
	case 2: x = x + y; y = x - y; x = x - y; printf("��ȯ�� �� ��: x = %d and x = %d\n", x, y); break;
	case 3: x = x*y; y = x / y; x = x / y; printf("��ȯ�� �� ��: x = %d and x = %d\n", x, y); break;
	case 4: x = x^y; y = x^y; x = x^y; printf("��ȯ�� �� ��: x = %d and x = %d\n", x, y); break;
	default:printf("��ȣ �Է� �����Դϴ�.");
		break;
	}

	return 0;
}