/*변수 알아보기2*/
#include <stdio.h>
int main()
{
	int a;
	a = 127;
	printf("a의 값은 %d 진수로 %o 입니다.\n", 8, a);
	//%o는 a값을 8진수로 출력
	printf("a의 값은 %d 진수로 %d 입니다.\n", 10, a);
	printf("a의 값은 %d 진수로 %x 입니다.\n", 16, a);
	//%x는 a값을 16진수로 출력
	return 0;
}