#include <stdio.h>
int main() {
	int num;

	printf("�ƹ� ���ڳ� �Է��� ������.:");
	scanf_s("%d", &num);

	if (num == 7) {
		printf("����� ���� 7 �̱���!");
	}
	else if (num == 4) {
		printf("������ ���ڳ׿�;;");
	}
	else {
		printf("�׳� ����� ���� %d", num);
	}
	return 0;
}