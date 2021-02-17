#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programing;

	printf("수학, 영어, 과학, 프로그래밍 점수를 각각 입력해 주세요!:");
	scanf_s("%f %f %f %f", &math, &english, &science, &programing);

	ave_score =
		(math + english + science + programing) / 4;
	printf("당신의 평균점수는 %f입니다.", ave_score);
	if (ave_score >= 90) {
		printf("당신은 우등생 입니다.");
	}
	else if (ave_score >= 60) {
		printf("조금더 노력해 보세요!");
	}
	else if (ave_score>=30){
		printf("공부를 안하셨군요;");
	}
	else {
		printf("뭐먹고 사시게요?");
	}
	return 0;
}
 
