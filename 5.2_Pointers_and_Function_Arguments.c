5.2 Pointers and Function Arguments

sawp 함수를 보았을때,
포인터함수를 사용하기전에는 값을 넣어 값을 교환했지만
포인터를 사용하면 그 값의 주소값을 알려줌으로써 바로 교환이 가능하다 

#include(a,b);

void swap (int x, int y)
{
//임의의 정수형 변수 temp선언 
//x의 값을 temp에 저장시고 y의 값을 x에 저장시킨다 그리고 tmep에 값을 y에 저장시킨다
	int temp;
	
	temp = x;
	x =y;
	y = temp;
}

void swap(int *px, int *py)
{
//정수형 주소를 저장할 변수 temp를 선언한다
//px의 주소를 temp에 저장시키고 py의 주소를 px에 할당시킨다
//px의 주소를 가지고이는 temp를 py의 주소에 할당시킨다
	int temp;
	
	temp = *px;
	*px = *py;
	*py = tmep;

}


#include <stdio.h>
#include <ctype.h>
//문자형 함수들을 가지고 있는 cytpe라이브러리를 포함한다

int getch(void);
void ungetch(int);

//함수의 역할은 사용자로부터 입력받은 정수를 pn포인터에 저장시켜라
//함수선언 : 인자를 1개가지고있다 정수형 주소를 저장할수있는 pn포인터를 가지고있는 getline함수이고 retunr 타입이 int형이다
int getline (int *pn)
{
//변수 선언 : 정수형 c,sign을가지고있다

	int c, sign;
//사용자로부터 입력받은 문자가 공백이 아니면 다음으로 넘어간다
	while(isspace(c = getch()));

//사용자로부터 입력받은 문자가 숫자,eof, +,-가 아니면 c를 retunr 한다
	if (!isdigit(c) && c!= EOF && c!= '+' && c != '-') {
		ungetch(c);
		return 0;
	}
//c가 -인것이 ture 이면 -1 sign에 할당하고 아니면 1을 할당하라
	sign = (c =='-') ? -1:1;
//c가 +이거나 -이면 사용자 입력을 받아라
	if(c =='+'|| c == '-')
		c =getch();
//pn포인터에 0을 할당하여 초기화 하고, 사용자로부터 입력받은 문자가 숫자이면 사용자 입력을 받아 c에 할당하고 사용자문자 -'0' 한값과 포인터의 주소값 *10을 하여 pn포인터에 넣어라 

	for (*pn = 0; isdigit(c), c = getch())
		*pn = 10 * *pn + (c-'0');
//sign(-1,1)의 주소를 pn포인터에 할당하라
	*pn *= sign;
//c가 eof가 아니면 c를 반환하라  
if (c != EOF)
	ungetch(c);
//프로그램이 실행되고 나면 c를 반환하라 
	return c;
}
