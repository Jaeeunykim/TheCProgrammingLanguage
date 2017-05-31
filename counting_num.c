#include <stdio.h>
//standard input output headerfile를 include 하겠습니다

//이번 프로그램은 사용자로 부터 입력을 받을때마다 nc를 증가시켜 몇번 입력을 받았는지의 수를 출력하여 확인하는 프로그램입니다

//entry point 입력
int main()
{
//double 형 변수 nc선언

	double nc;
//for문은 nc는 0으로 초기값을 주고, 사용자입력값이 EOF가 아니면 nc를 1씩 계속증가시킨다

	for(nc = 0; getchar() != EOF; ++nc);

	printf("%.0f\n", nc);
}
