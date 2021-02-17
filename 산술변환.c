/*산술변환*/
#include <stdio.h>
int main()
{
	int a;
	double b;
	//int는 정수형, double은 실수형

	a = 10;
	b = 3;
	printf("a / b는 : %f\n", a / b);
	printf("b / a는 : %f\n", b / a);//%d로 입력하면 오류남
	return 0;
}
//정수형<실수형이기 때문에 섞어서 출력시 실수형으로 됌.