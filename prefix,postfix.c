/*prefix, postfix*/
#include <stdio.h>
int main()
{
	int a = 1;
	printf("++a : %d\n", ++a);
	a = 1;
	printf("a++ : %d\n", a++);//1로 출력되지만 실제 가지고 있는 값은 2이다.
	printf("a: %d\n", a);
	
	return 0;
}