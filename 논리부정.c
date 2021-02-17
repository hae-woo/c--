#include <stdio.h>
int main() {
	int height, weight;
	printf("당신의 키와 몸무게를 입력하여 주세요. :");
	scanf_s("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("당신은 거인입니다.");
	} if (!(height >= 190 || weight >= 100)) {
		printf("당신은 거인이 아닙니다. 요정입니댱ㅎㅎ");
	}
	return 0;
}