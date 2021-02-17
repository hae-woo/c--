#include <stdio.h>
int main() {
	int i;
	int subject, score;
	double sum_score = 0;

	printf("몇개의 과목 점수를 입력 받을 것인가요?");
	scanf_s("%d", &subject);

	printf("각 과목의 점수를 입력하여 주세요");
	for (i = 1; i <= subject; i++) {
		printf("과목 : %d", i);
		scanf_s("%d", &score);
		sum_score = sum_score + score;
	}
	printf("전체과목의 평균은 : %2.f", sum_score / subject);

	if (sum_score >= 90) {
		printf("공부를 열시미 하셨군요!");
	} else if(sum_score <= 90) {//else는 왜 안되는가?
		printf("다음번엔 좋은 성적받길 바라요!");
	}
	return 0;
}