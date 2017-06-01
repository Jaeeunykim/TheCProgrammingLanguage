Assignment Operators and Expressoions(대입연산자)

i = i +2; i에 i+2한 값을 assign한다
대입연산자를 이용하면 i += 2 이렇게 표현 할수있다

x *= y+1 
x = x *(y+1) 괄호를빼면 다른 연산식이 된다 

int bitcount(unsigned x)
{
	int b;

	for(b = 0; x != 0; x >>=1)
		if (x &01)
			b++
	return b;
}
