#include <stdio.h>
int main() {
	int height, weight;
	printf("����� Ű�� �����Ը� �Է��Ͽ� �ּ���. :");
	scanf_s("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("����� �����Դϴ�.");
	} if (!(height >= 190 || weight >= 100)) {
		printf("����� ������ �ƴմϴ�. �����ԴψԤ���");
	}
	return 0;
}