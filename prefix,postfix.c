/*prefix, postfix*/
#include <stdio.h>
int main()
{
	int a = 1;
	printf("++a : %d\n", ++a);
	a = 1;
	printf("a++ : %d\n", a++);//1�� ��µ����� ���� ������ �ִ� ���� 2�̴�.
	printf("a: %d\n", a);
	
	return 0;
}