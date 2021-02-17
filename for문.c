#include <stdio.h>
int main() {
	int i;
	for (i = 0; i < 20; i++) { //)뒤에 ;를 붙이면 숫자:20 이 나온다 이유가 무엇인가?
		printf("숫자: %d\n", i);
	}
	return 0;

}

/*
for (초기식;조건식;증감식) {
명령1
명령2
}
*/