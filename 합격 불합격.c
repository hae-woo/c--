#include <stdio.h>
int main() {
	int score;

	printf("����� �ູ������ �Է��ϼ���!:");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("����� �ູ�� ����̱���! �����ε� �ູ�ϱ� �ٶ��.");
	}

	if (score < 90) {
		printf("�����ƿ�. ����� ������ ���� �ູ�Ұſ���:)");
	}
	return 0;
}