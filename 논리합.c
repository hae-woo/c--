#include <stdio.h>
int main() {
	int height, weight;
	printf("당신의 키와 몸무게를 각각 입력하여 주십시오. :");
	scanf_s("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("당신은 거인입니다.\n");
	}
	return 0;
}