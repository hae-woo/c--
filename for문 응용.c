#include <stdio.h>
int main() {
	int i;
	int subject, score;
	double sum_score = 0;

	printf("��� ���� ������ �Է� ���� ���ΰ���?");
	scanf_s("%d", &subject);

	printf("�� ������ ������ �Է��Ͽ� �ּ���");
	for (i = 1; i <= subject; i++) {
		printf("���� : %d", i);
		scanf_s("%d", &score);
		sum_score = sum_score + score;
	}
	printf("��ü������ ����� : %2.f", sum_score / subject);

	if (sum_score >= 90) {
		printf("���θ� ���ù� �ϼ̱���!");
	} else if(sum_score <= 90) {//else�� �� �ȵǴ°�?
		printf("�������� ���� �����ޱ� �ٶ��!");
	}
	return 0;
}