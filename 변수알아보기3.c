/*���� �˾ƺ���3*/
#include <stdio.h>
int main()
{
	float a = 3.141592f;
	//double������ ������ �� �����Ƿ� f�� �ٿ��ش�.
	double b = 3.141592;
	int c = 123;
	printf("a : %f\n", a);
	printf("b : %f\n", b);
	//float,double�� a,b�� �Ǽ��������� �����Ͽ��� ������ %f���
	//printf���� %f�� �̿��Ͽ� ���� ����Ҷ�, ������ �Ҽ����� �־�� ��[printf(%f,1.0)]
	printf("a : %.2f \n", a);//�Ҽ��� ��°�ڸ����� ǥ��
	printf("c : %5d \n", c);//������ �ڸ��� 5�ڸ�  cf)%05d�̸� 00123
	printf("b : %6.3f \n", b);//�ڸ���6 �Ҽ����Ʒ� 3°�ڸ����� ǥ��
	return 0;
}