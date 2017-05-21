4.3 External Variables

#include <stdio.h>
#define MAXCAL 100

int sp = 0;
double val[MAXVAL];

//함수정의 : push 함수역할은 스텍에 실수를 넣는다
//	     실수형f를 인자로 가지고 있고, 리턴값은 없다

void push (double f)
{
//스텍포인터의 값이 있으면 현재스텍포인터의 다음포인터에 실수f를 넣어라 
	if(sp < MAXVAL)
		val [sp++] = f;
//스텍포인터의 값이 최대값이면 스텍의값이 가득찼다고 오류메시지를 출력하라
	else
		printf("error: stack full, can't push %g\n", f);
}

//함수정의 : pop함수의 역할은 스텍의 제일위에 있는 값을 꺼내고 그값을 반환하라 
//	    pop함수는 1개의 인자를 가지고있다. 입력값이 없고(인자가 없고) 실수형으로 반환하라 

double pop(void)
{
// 스텍포인터에 값이 있으면 현재스텍포인터의 아래의 값을 반환하라
	if (sp >0)
		return val[--sp-];
//스텍포인터에 값이 없으면 스텍이 비어있다는 오류 메시지를 출력하고 0.0을 반환하라 
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

#include <stdio.h>
#include <ctype.h>


int getch(void);
void ungetch(int);

//함수선언 : getop합수는 다음문자 혹은 수자오퍼랜드를 가져온다
//           1개의 인자를 가지고있다 그인자는 문자배열형s를 인자로갖고 있고 반환하는 타입이 정수이다
itn getop (char s[])
{
//변수선언 : 정수형 i와c를 변수로 가지고 있다. i는 s배열의 메모리 저장위치를 알려주고, c 사용자로부터 받는 값을 저장시켜 놓는다 

	int i,c;
//사용자로부터 입력 받은 문자를 c와 배열 s의 첫번째 메모리위치에 저장시키고, 그값이 공백혹은 텝이면 계속 저장시킨다
	while((s[0] = c = getch()) == ' '|| c == '\t');
//사용자로부터 입력받은 문자가 공백이 아니면 s배열의 두번째 자리에 null을 할당시켜라 
	s[1] = '\0';
//사용자로 부터 입력 받는 문자가 숫자가 아니거나 .이 아니면 c값을 반환하라
	if (!isdigit(c) && c!= '.')
		return c;
//변수 i에 0 값을 할당하여 초기화 시킨다
	i=0;
//사용자로 부터 입력받는 문자가 숫자이면 새로 사용자로부터 입력을 받고 그값을 c에 할당시키고 s배열의 다음자리에 저장시켜라
	if(isdigit(c))
		while (isdigit(s[++i] =c =getch()));
//사용자로부터 입력 받은 문자가 .이면 다시 사용자에게 입력을 받은 문자를 c와 s배열 다음번째에 저장시켜라 
	if (c == '.')
		while (isdigit(s[++i] = c = getch()));
//s베열 i번째에 null을 위치시켜라 
	s[i] = '\0';
//c가 eof가 아니면 읽어드린 문자를취소 하고 다음에 그글자를 다시 읽어드리도록 한다 (ungetch)
	if (c !=EOF)
		ungetch(c);
//NUMBER를 반환하라 
	return NUMBER;
}


