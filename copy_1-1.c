#include <stdio.h>
//stdio.h는 standard input ouput. headerfile의 줄임말입니다
//이 헤더파일은 입출력과 관련된 함수들을 정의해놓은 파일을 말합니다


//Entry point인 main 함수를 입력하겠습니다
//프로세서에게 시작점을 알려주는 일종의 약속입니다

int main() 
{
//변수선언
//int형 c변수는 어딘가의 메모리에 c라는 이름으로 임시저장공간을 만들어주는 것입니다
	int c;
	c = getchar();
//변수초기화
//getchar함수를 통해 얻은 값을 c에 할당한다


//키보드로 입력받은 값이 EOF가 아니면 그 문자를 출력하고 다시 사용자로부터 입력을 받는다
//EOF는 파일의 종료시점으로 contrl D 혹은 contrl Z를 입력주면 while문이 종료된다
	while(c != EOF){
		putchar(c);
		c = getchar();
	}

}
