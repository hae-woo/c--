/*산술연산*/
#include <stdio.h>
int main()
{
	int a, b;
	a = 10;
	b = 3;
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a*b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a%b);
	//a를 b로 나눈 나머지. 오직 정수형 데이터에서만 연산가능
	return 0;
}