2.3 Constants

int에 들어가지 않을만큼 큰 정수는 long으로 간주
Unsigned 상수(부호가 없는 상수)는 터미널u혹은 U로 쓴다
Unsigned long는 ul또는 UL로 표시한다 
부동소수점 상수에는 소수점(123.4)또는 지수 (1e-2) 둘다 포함된다
접미사 f또는 F부동소수점 상수를 나타낸다
접미사 l또는 L는 long double을 나타낸다

// 문자열의 길이 구하기

함수정의 : char형 string배열을 인자로 가지고 있고 return 타입이 int인 strlen 함수

함수구현 :
정수형인 변수 i 선언,
string배열 i번째 캐릭터가 null이아니면 변수i를 하나 증가 시키고(while문)
sttrig배열 i번째 캐릭터가 null이면 변수 i를 반환하라

int strlen (char s[])
{
	int i;
	while( char s[] != '\0')
		++i;
	return i;
}

enum은 열거상수로 정수형 값을 나열한다
0부터 시작하고 내가 원하는 값을 지정할수 있다

enum months { JAN = 1, FEB, MAR, APR, MAY, JUN,
 JUL, AUG, SEP, OCT, NOV, DEC };

FEB는 2, MAR는 3 etc..
