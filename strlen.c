#include <string.h>

//standard string headerfile에 정의 되어있는 strlen 함수는 
//문자열에 null이 나올때까지의 계수를 확인하여 그수를 반환해주는 함수입니다

int strlen (char s[])
{
	int i;

	while(s[i] != '\0')
		++i;
	return i;
}
