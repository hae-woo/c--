/*scanf������*/
#include <stdio.h>
int main() {
	char ch; //����
	
	short sh; //����
	int i;
	long lo;

	float fl;// �Ǽ�
	double du;

	printf(" char�� ���� �Է� :");
	scanf_s("%c", &ch);

	printf("short�� ���� �Է� :");
	scanf_s("%hd", &sh);
	printf("int�� ���� �Է�:");
	scanf_s("%d", &i);
	printf("long�� ���� �Է�:");
	scanf_s("%ld", &lo);

	printf("float�� ���� �Է�: ");
	scanf_s("%f", &fl);
	printf("double�� ���� �Է�: ");
	scanf_s("%lf", &du);

	printf("char : %c,short: %d,int: %d", ch, sh, i);
	printf("long:%ld,float:%f,double:%f\n", lo, fl, du);
	return 0;
}