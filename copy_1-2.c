#include <stdio.h>
//이전에 사용한 함수를 좀더 간결하게 입력하도록 하겠습니다
int main() 
{
	int c;

	while((c = getchar()) != EOF)
		putchar(c);
}
