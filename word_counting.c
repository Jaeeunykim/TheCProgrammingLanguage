#include <stdio.h>
#define IN 1
#define OUT 0
//표준입출력 헤더파일을 include 해줍니다
//symbolic상수로 상수를 기호화 하여 변수처럼쓰는 상수입니다. 프로그램내에서 여러번 사용되는 상수 값을 매크로 상수로 정의해서 사용하여 이용이 편함
//이 프로그램내에서는 1는 IN으로 0은 OUT으로 대신 사용하게 됩니다

//getchar함수를 통해 입력받은 캐릭터개수를 nc를 통해 1씩증가시켜 개수를 할당시킨다 
//입력받는 문자가 newline이면 nl를 1씩 증가시켜 개수를 할당시키고,
//사용자로부터받은 문자가 공백이면 state를 통해 프로그램은 현재 문자안이 아님을 확인하고
//다시 상태를 IN으로 변경한뒤에 nw 개수를 1증가시킨다




int main() 
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while((c= getchar())  != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		
		if(c == ' ' || c =='\n' || c== '\t')
			state = OUT;

		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
