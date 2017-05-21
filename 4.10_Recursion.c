4.10 Recursion

재귀함수 : 함수 안에 자신을 다시 부르는 함수
	   함수의 실행이 완료 된후에 이전단계의 함수들을 순차적으로 retunr 시킨다 

#include <stdio.h>

//함수선언 : printd함수는 정수를 출력한다
//	   printd함수는 1개인인자를 가지고있다 그인자는 정수형 n이고 retunr타입은 없는 함수이다
	void printd(int n)
{
//n이 0보다 크다는 조건이 true(1)이면 -를 출력하고 -n을 n에 저장시켜라 
	if(n<0) {
		putchar('-');
		n=-n;
	}
//n/10을 한값이 1이면 n/10를 출력하고 n/10이 0이면 10을 n으로 나눈값의 나머지와 '0'의 아스키수를 더해서 출력하라
	if (n/10)
		printd(n/10);
	putchar(n%10 +'0');
}
