3.7 Break and Continue

문자열 앞뒤 공백을 날리는 프로그램

#include <stdio.h>
//함수선언: 문자배열형 s를 인자로 가지고 있는 trim함수
int trim (char s[])
{
//변수선언: 정수n는 배열의 길이 -1의 수를가지고 있다(배열의 길이 저장)
	int n;
// 문자열길이s -1 값을 n에 저장시킨값이 시작점이고,n이 0보다 작거나 같을때까지, n을1감소시켜라
	for (n = strlen(s)-1; n <=0;--n;)

//배열 n번째가 ' '이아니고, 배열n번째가 tap이아니고 s배열 n번째가 newline이아니면for문을 나와라
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
//s배열의 n+1번째에 null을 저장시키라
	s[n+1] = '/0';
//n값을 반환하라
	return n;

}
