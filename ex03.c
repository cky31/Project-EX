#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int x = 0, y = 0, dump = 0, num = 0;
	printf("교환할 두 정수를 입력하세요. >>");
	scanf("%d %d", &x, &y);
	printf("입력한 두 수: x = %d and y = %d\n\n\n", x, y);

	printf("임시 저장 장소     이용방법[1]\n");
	printf("덧셈과 뺄셈으로   교환 방법[2]\n");
	printf("곱셈과 나눗셈으로 교환 방법[3]\n");
	printf("XOR 연산자 ^       이용방법[4]\n\n\n");

	printf("위 교환 방법 중 한 번호를 선택하세요. >>\n\n");
	scanf("%d", &num);

	switch (num)
	{
	case 1: dump = x; x = y; y = dump; printf("교환한 두 수: x = %d and x = %d\n", x, y); break;
	case 2: x = x + y; y = x - y; x = x - y; printf("교환한 두 수: x = %d and x = %d\n", x, y); break;
	case 3: x = x*y; y = x / y; x = x / y; printf("교환한 두 수: x = %d and x = %d\n", x, y); break;
	case 4: x = x^y; y = x^y; x = x^y; printf("교환한 두 수: x = %d and x = %d\n", x, y); break;
	default:printf("번호 입력 오류입니다.");
		break;
	}

	return 0;
}