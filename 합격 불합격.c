#include <stdio.h>
int main() {
	int score;

	printf("당신의 행복지수를 입력하세요!:");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("당신은 행복한 사람이군요! 앞으로도 행복하길 바라요.");
	}

	if (score < 90) {
		printf("괜찮아요. 당신의 내일은 더욱 행복할거예요:)");
	}
	return 0;
}