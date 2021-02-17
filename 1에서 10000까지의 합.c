#include <stdio.h>
int main() {
	int i, sum = 0;
	for (i = 0; i <= 10000; ++i) {
		sum = sum + i;
	}
	printf("1���� 10000������ �� : %d", sum);

}