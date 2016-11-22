#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("다음 단위에서 [변환할 단위] --> [변환결과 단위]로 연산합니다.\n");
	printf("\n");
	printf("[1]미터(m)  [2]인치(in)  [3]피트(ft)  [4]야드(yd)  [0]종료(stop)\n");
	printf("\n");
	printf("[이전단위] --> [변환단위], 두 개의 메뉴 번호를 선택하세요. >>");

	int ff = 0, ss = 0;
	double sc = 1;
	scanf("%d %d", &ff, &ss);

	if (ff == ss) {
		printf("이전단위와 변환할 단위가 같습니다.\n프로그램을 종료합니다.\n");
	}

	while (sc != 0) {
		printf("\n[변환할 단위]의 길이를 입력하세요. >>");
		scanf("%lf", &sc);
		if (sc == 0) {
			printf("\n\n종료합니다.\n");
		}

		else if (ff == 1) { // 이전단위가 미터인경우
			switch (ss)
			{
			case 1: printf(""); break; // 조건x
			case 2: printf("\n  [결과]   %.2f(미터) --> %.2f(인치)\n\n", sc, (sc*39.37)); break;
			case 3: printf("\n  [결과]   %.2f(미터) --> %.2f(피트)\n\n", sc, (sc*3.28)); break;
			case 4: printf("\n  [결과]   %.2f(미터) --> %.2f(인치)\n\n", sc, (sc*1.0936)); break;
			default: printf("[변환단위] 입력 오류");
				break;
			}
		}
		else if (ff == 2) { // 이전단위가 인치인경우
			switch (ss)
			{
			case 1: printf("\n  [결과]   %.2f(인치) --> %.2f(미터)\n\n", sc, (sc*0.0254)); break;
			case 2: printf(""); break; // 조건x
			case 3: printf("\n  [결과]   %.2f(인치) --> %.2f(피트)\n\n", sc, (sc*0.0833)); break;
			case 4: printf("\n  [결과]   %.2f(미터) --> %.2f(야드)\n\n", sc, (sc*0.0277)); break;
			default: printf("[변환단위] 입력 오류");
				break;
			}
		}
		else if (ff == 3) { // 이전단위가 피트인경우
			switch (ss)
			{
			case 1: printf("\n  [결과]   %.2f(피트) --> %.2f(미터)\n\n", sc, (sc*0.3048)); break;
			case 2: printf("\n  [결과]   %.2f(피트) --> %.2f(인치)\n\n", sc, (sc * 12)); break;
			case 3: printf(""); break; // 조건x
			case 4: printf("\n  [결과]   %.2f(피트) --> %.2f(야드)\n\n", sc, (sc *0.3333)); break;
			default: printf("[변환단위] 입력 오류");
				break;
			}
		}
		else if (ff == 4) { // 이전단위가 야드인경우
			switch (ss)
			{
			case 1: printf("\n  [결과]   %.2f(야드) --> %.2f(미터)\n\n", sc, (sc*0.9144)); break;
			case 2: printf("\n  [결과]   %.2f(야드) --> %.2f(인치)\n\n", sc, (sc * 36)); break;
			case 3: printf("\n  [결과]   %.2f(야드) --> %.2f(피트)\n\n", sc, (sc * 3)); break;
			case 4: printf(""); break; // 조건x
			default: printf("[변환단위] 입력 오류");
				break;
			}
		}
		else {
			printf("[이전단위] 입력 오류입니다.");
		}
	}
	return 0;
}