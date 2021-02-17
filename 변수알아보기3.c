/*변수 알아보기3*/
#include <stdio.h>
int main()
{
	float a = 3.141592f;
	//double형으로 착각할 수 있으므로 f를 붙여준다.
	double b = 3.141592;
	int c = 123;
	printf("a : %f\n", a);
	printf("b : %f\n", b);
	//float,double로 a,b를 실수형변수로 선언하였기 때문에 %f사용
	//printf에서 %f를 이용하여 수를 출력할때, 언제나 소수점이 있어야 함[printf(%f,1.0)]
	printf("a : %.2f \n", a);//소수점 둘째자리까지 표시
	printf("c : %5d \n", c);//숫자의 자리수 5자리  cf)%05d이면 00123
	printf("b : %6.3f \n", b);//자리수6 소수점아래 3째자리까지 표시
	return 0;
}