#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programing;

	printf("����, ����, ����, ���α׷��� ������ ���� �Է��� �ּ���!:");
	scanf_s("%f %f %f %f", &math, &english, &science, &programing);

	ave_score =
		(math + english + science + programing) / 4;
	printf("����� ��������� %f�Դϴ�.", ave_score);
	if (ave_score >= 90) {
		printf("����� ���� �Դϴ�.");
	}
	else if (ave_score >= 60) {
		printf("���ݴ� ����� ������!");
	}
	else if (ave_score>=30){
		printf("���θ� ���ϼ̱���;");
	}
	else {
		printf("���԰� ��ðԿ�?");
	}
	return 0;
}
 
