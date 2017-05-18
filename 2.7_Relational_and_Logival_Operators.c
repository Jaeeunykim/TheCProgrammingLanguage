2.7 Type Conversions

*문자열을 정수로 변환

atoi함수선언 : return 타입이 int이고 char형 stirng배열을가지고있다

함수구현 : int형변수 i,n이 있고 변수n에 초기값0을 해준다
for문 변수i는0부터 시작하고 캐릭터'0'부터 '9'까지의 수자이면 변수 i를 1씩 증가시킨다 그리고 변수는 n*10하고 s[i]와 캐릭터 '0'뺀값을 n에 넣어주고 for문을 반복하거나 n을 반환한다.

int atoi (char s[])
{
	int i, n;
	
	n=0;
	for(i =0; s[i] >= '0' && s[i] <='9'; ++i)
		n = 10 *n + (s[i] - '0');
	return n;
}

* 아스키수를 활용
lower함수 선언 : return타입이 int인 lower함수 인자로는 int형 c를 가진다 
함수 구현 : c가 아스키 'A'수보다 크거나 같고 아스키'Z'수보다 작으면 
c + 아스키'a' - 아스키 'A'를 반환해라
c가 아스키'A-Z'사이의 수보다 크면 c를 반환하라 
int lower (int c)
{
	if (c >='A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

* 난수반환
함수 선언 : 인자가 없는 int형 rand함수
unsinged long int next = 1;
int rand (void)
{
	next = next * 1103515245 + 12345;
 	return (unsigned int)(next/65536) % 32768;
}

함수선언 : 리턴타입이 없는 unsinged int seed를 갖는 srand함수
void srand (unsinged int seed)
{
	next = seed;
}
