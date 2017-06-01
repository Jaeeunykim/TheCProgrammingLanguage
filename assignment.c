Assignment Operators and Expressoions(대입연산자)

i = i +2; i에 i+2한 값을 assign한다
대입연산자를 이용하면 i += 2 이렇게 표현 할수있다

x *= y+1 
x = x *(y+1) 괄호를빼면 다른 연산식이 된다 
//bitcount 함수는 1개의 비트를 세는 함수입니다
//unsigned x를 2진수로 바꾸어 x가 0이 될때까지
//오른쪽으로 한자리씩 이동시키고
//x와 01를 &비트연산자계산했을대 0이아닌 값이면 변수b를 1씩 증가시켜 
//그 수를 반환하는 함수입니다 

int bitcount(unsigned x)
{
	int b;

	for(b = 0; x != 0; x >>=1)
		if (x &01)
			b++
	return b;
}
