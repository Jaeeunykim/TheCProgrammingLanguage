7.1 Standard Input Output

사용자로부터 입력받은 문자를 소문자로 변환시키고 출력한다 

//표준입출력과 관련된 함수를 가지고있는 staio.h파일을 포함한다
//문자함수와 관련된 함수를 가지고있는 ctype.h을 포함시킨다
//변수 c선언한다
//사용자로부터 입력받은 문자를 c에 할당하고 c가 eof가아니면 소문자로 변환시킨뒤에 출력하라 
//c가 eof이면 0을 반환한다 

#include <stdio.h>
#include <ctype.h>

int main()
{
	int c

	whil (( c=getchar()) != EOF)
		putchar (tolower(c));
	return 0;
}
