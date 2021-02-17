#include <stdio.h>
int main() {
	int i, j;

	printf("크기를 비교할 두수를 입력하여 주세요.:");
	scanf_s("%d %d", &i, &j);

	if (i > j) {
		printf("%d는 %d보다 큽니다.\n", i, j);
	}

	if (i < j) {
		printf("%d는 %d보다 작습니다.\n", i, j);
	}
	
	if (i <= j) {
		printf("%d는 %d보다 작거나 같습니다.\n", i, j);
	}
	
	if (i >= j) {
		printf("%d는 %d보다 크거나 같습니다.\n", i, j);
	}
	
	if (i == j) {
		printf("%d는 %d와 같습니다.\n", i, j);
	}
	
	if (i != j) {
		printf("%d는 %d와 다릅니다.\n", i, j);
	}
	return 0;
}
/*
if(조건){
명령
}*/