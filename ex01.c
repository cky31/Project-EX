#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("���� �������� [��ȯ�� ����] --> [��ȯ��� ����]�� �����մϴ�.\n");
	printf("\n");
	printf("[1]����(m)  [2]��ġ(in)  [3]��Ʈ(ft)  [4]�ߵ�(yd)  [0]����(stop)\n");
	printf("\n");
	printf("[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���. >>");

	int ff = 0, ss = 0;
	double sc = 1;
	scanf("%d %d", &ff, &ss);

	if (ff == ss) {
		printf("���������� ��ȯ�� ������ �����ϴ�.\n���α׷��� �����մϴ�.\n");
	}

	while (sc != 0) {
		printf("\n[��ȯ�� ����]�� ���̸� �Է��ϼ���. >>");
		scanf("%lf", &sc);
		if (sc == 0) {
			printf("\n\n�����մϴ�.\n");
		}

		else if (ff == 1) { // ���������� �����ΰ��
			switch (ss)
			{
			case 1: printf(""); break; // ����x
			case 2: printf("\n  [���]   %.2f(����) --> %.2f(��ġ)\n\n", sc, (sc*39.37)); break;
			case 3: printf("\n  [���]   %.2f(����) --> %.2f(��Ʈ)\n\n", sc, (sc*3.28)); break;
			case 4: printf("\n  [���]   %.2f(����) --> %.2f(��ġ)\n\n", sc, (sc*1.0936)); break;
			default: printf("[��ȯ����] �Է� ����");
				break;
			}
		}
		else if (ff == 2) { // ���������� ��ġ�ΰ��
			switch (ss)
			{
			case 1: printf("\n  [���]   %.2f(��ġ) --> %.2f(����)\n\n", sc, (sc*0.0254)); break;
			case 2: printf(""); break; // ����x
			case 3: printf("\n  [���]   %.2f(��ġ) --> %.2f(��Ʈ)\n\n", sc, (sc*0.0833)); break;
			case 4: printf("\n  [���]   %.2f(����) --> %.2f(�ߵ�)\n\n", sc, (sc*0.0277)); break;
			default: printf("[��ȯ����] �Է� ����");
				break;
			}
		}
		else if (ff == 3) { // ���������� ��Ʈ�ΰ��
			switch (ss)
			{
			case 1: printf("\n  [���]   %.2f(��Ʈ) --> %.2f(����)\n\n", sc, (sc*0.3048)); break;
			case 2: printf("\n  [���]   %.2f(��Ʈ) --> %.2f(��ġ)\n\n", sc, (sc * 12)); break;
			case 3: printf(""); break; // ����x
			case 4: printf("\n  [���]   %.2f(��Ʈ) --> %.2f(�ߵ�)\n\n", sc, (sc *0.3333)); break;
			default: printf("[��ȯ����] �Է� ����");
				break;
			}
		}
		else if (ff == 4) { // ���������� �ߵ��ΰ��
			switch (ss)
			{
			case 1: printf("\n  [���]   %.2f(�ߵ�) --> %.2f(����)\n\n", sc, (sc*0.9144)); break;
			case 2: printf("\n  [���]   %.2f(�ߵ�) --> %.2f(��ġ)\n\n", sc, (sc * 36)); break;
			case 3: printf("\n  [���]   %.2f(�ߵ�) --> %.2f(��Ʈ)\n\n", sc, (sc * 3)); break;
			case 4: printf(""); break; // ����x
			default: printf("[��ȯ����] �Է� ����");
				break;
			}
		}
		else {
			printf("[��������] �Է� �����Դϴ�.");
		}
	}
	return 0;
}