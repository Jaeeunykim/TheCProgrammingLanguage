7.4 Formatted Input- Scanf

scanf함수는 형식을만들고 사용자로부터 그형식에 맞게 입력받고 그값을 변수의 주소값에 대입하고 출력한다

#include <stdio.h>
//아래의 함수는 실수형을 입력받는 형식을 가지고있고 사용자로부터 입력이 있으면  값의 소수점 2자리까지의 수를 출력한다 사용자로부터 입력받는 값이 실수가아니면 종료한다
int main()

{
	double sum, v;

	sum =0;
	while (scanf("%lf", &v) == 1)
		printf("\t%.2f\n", sum += v);
	return 0; 
}




