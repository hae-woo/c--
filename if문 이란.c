/*if문 이란?*/
#include <stdio.h>
int main() {
	int i;
	printf("숫자를 입력하세요! :");
	scanf_s("%d", &i);

	if (i == 7) {
		printf("당신은 행운의 숫자 7을 입력했습니다! 진부하군요!");
	}
	if (i == 2,11,22,21) {
		printf("당신은 해우 최애숫자 중 하나를 입력했습니다! 드라이브쿠폰을 드리겠습니다~");
	}

	return 0;
}