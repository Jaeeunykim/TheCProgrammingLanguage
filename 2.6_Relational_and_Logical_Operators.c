2.6 Relational and Logical Operators

관계연산자
> >= < <= == != && ||

관계연산자는 산술연산자보다 우선순위가 낮다
i < lim-1 ==> i < (lim-1)

&&과 ||는 왼쪽에서 오른쪽으로 계산한다

getline 

for (i=0; i < lim-1 && (c=getchar()) 1= '\n' && c != EOF; ++i)
	s[i] = c;
