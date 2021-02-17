#include <stdio.h>
int main() {
	int a;
	printf("아무 숫자나 입력하세요.:");
	scanf_s("%d", &a);

	if (a >= 10 && a < 20); {
		printf("%d는 10이상, 20미만인 수 입니다.\n", a);
	}
	return 0;
}//왜 아무 숫자나 입력해도 답이 나오는가?