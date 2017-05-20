4.2 Functions Returning Non-integers
문자열을 실수형으로 변환 

//문자형을 구별하는 함수들을 가지고 있는 라이브러리 포함
#include <ctype.h>
#include <stdio.h>


//함수정의 : 문자배열형 s를 인자로 가지고 있는 atof 함수

double atof (char s[])
{
//함수구현 
//변수선언 : 실수형 val은문자열을 s배열의 i의 숫자캐릭터 값을 가지고있다
//           실수형 power는 십의 거듭제곱 숫자를 가지고있다 
//           정수형 i는 for 인덱스 값으로 시작위치를 알려준다
//	     정수형 sign는 s배열의i가 '-'이면 -1값을 아니면 1값을 갖는다

	double val,power;
	int i,sign;

// s배열의 i가 공백이면 배열의 다음값으로 이동
// i의 초기값은 0이고 isspace(s[i])인동안 i를 1씩증가시켜라
	for (i =0; isspace(s[i]); i++);
//s배열의 i가 캐릭터 -이면 -1일 sign에 저장시키고 아니면 1를 저장시켜라
	sign = (s[i]) =='-') ? -1 :1;
//s배열 i가 +,- 둘중하나의 캐릭터라면 배열의 다음값으로 이동하라
	if (s[i] == '+' || s[i] == '-')
		i++;
//val은 0.0에서 시작하고, s배열의i값이 숫자인동안, i를 1씩 증가시켜라
	for(val = 0.0; isdigit(s[i]); i++)
//val에 s배열의i를 캐릭터 숫자0을 뺀 값과 val에 10을 곱한 값을 더해 저장시켜라
		val = 10.0 * val + (s[i] -'0');
//s배열 i가 . 이면 다음배열 값으로 이동시켜라
	if ( s[i] == '.')	
		i++;
//power는 1.0부터 시작하고, s배열i가 수인동안 i를 1씩증가시켜라 
//val에 s배열i의 캐릭터 값 - '0'을 뺀값에 10.0val를 더한 값을 저장시켜라
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
//power에 10배수를 저장시켜라 
		power * = 10;
	}
//sign * val / power를 값을 반환하라
	return sign * val / power;

    	     
}

#include <stdio.h>
#define MAXLINE 100
기본계산 함수 
int main() {
//변수선언 : 실수형 sum은 atof함수 line값을 sum에 더해 저장시킨다
//           문자배열형 char인자를 가지고 있는 atof
//           문자배열 line의 최대값은 1000 이다
//	     변수 getline은 두개인자를 가지고 있고 첫번째 인자는 문자배열형 line을 가지고 있고, 두번째인자는 정수형 max이다
	double sum, atof(char []);
	char line [MAXLINE];
	int getline (char line[], int max);
	
// 변수 sum 초기값 0
	sum =0;
//getline함수의 line값이 0보다 크면 "\t%g\n" 라인의 실수값을 sum에 넣은 값을 출력 
	return 0;
}

}

main

