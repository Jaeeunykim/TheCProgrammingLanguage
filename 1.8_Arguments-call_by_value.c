1.8 Arguments - Call by vlaue

int power(int base, int n)
{
	int p;
	
	for (p=1; n>0; --n)
		p = p * base;
	return p;
}

함수 선언 

변수 p선언
p는 초기값 1  이고 0보다 작은범위에서 1씩 n을 감소시킨다
p*base를 p에 assign하고 p를 반환한다
