/*더하기 1을 하는 방법*/
#include <stdio.h>
int main()
{
	int a = 1, b = 1, c = 1, d = 1;

	a = a + 1;
	printf("a : %d\n", a);
	b += 1;
	printf("b : %d\n", b);
	/*b=b+1과 같다.
	b+= x;은 b=b+x;와 같다 /*-도 동문
	*/
	++c;
	printf("c : %d\n", c);
	d++;
	printf("d : %d\n", d);
	return 0;
}