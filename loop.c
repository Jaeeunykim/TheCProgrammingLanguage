Loops - While and For(반복문)

1. while 문: while의 조건식이 참 인동안 조건을 반복한다는 의미입니다
while(expression)
	statement //반복할 내용

	while((c=getchar()) == ' '|| c =='\n' || c=='\t');
	이전에 봤던 getline함수에서의 while문입니다 
	위의 의미는 공백이 나오면 계속 사용자 입력을 받으라는 내용이고
	결과적으로는 공백을 건너뛰라는 의미로 해석됩니다 

2. for 문 : while문과 동일하게 조건이 참이 동안 반복하라는 의미입니다
			다른점은 for문은 반복하는 횟수를 표현하는 방법입니다
			for문은 초깃값, 조건값, 증감값 세부분을 세미콜론으로 구분하고 있습니다 
			실행순서는 초기값 -> 조건값 -> 반복할내용 -> 증감값 입니다

			for (초기값; 조건값; 증감값)
				반복할내용
	
			for ( i=0; i < n; i++) 
		    i는0부터시작하고 i가 n보다 작으면 반복하고 i를 1씩증가시켜라 
#include <stdio.h>

int atoi(char s[])
{
	int i, n, sign;

	for(i =0; isspace(sp[i]); i++);
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for(n=0; isdigit(s[i]); i++);
		n = 10 *n +(s[i] -'0');
	return sign * n;
}

3. Do-While loop
	- do~while 문은 조건식과 관계없이 반복할 내용을 먼저 수행 하게 됩니다 
	- 반복할 내용을 먼저 한번실행하고 반복조건의 참,거짓에 결과에 따라 다시 반복할내용을 실행할지를 결정하게 됩니다 

void itoa(int n, char s[])
{
	int i, sign;

	if((sign =n) <0)
		n =-n;
	i =0;
	do {
		s[i++] = n % 10 +'0';
	} while ((n /= 10) >0);
	if (sign < 0)
		s[i++] + '-';
	s[i] = '\0';
	reverse(s);
}
}

4. Break and Continue
 -Break는 반복문수행중에 break를 만나면 반복문을 종료하고 다음문장을 실행합니다
 -Continue는 반복문에서 조건비교위치로 넘어가게됩니다 

 for(i =0; i <n; i++)
 	if (a[i] <0)//조건이 맞으면 다시 for문으로 돌아감 
		continue;

int trim(char s[])
{
	int n;

	for(n =strlen(s)-1; n>=0; n--)
		if(s[n] != ' '&& s[n] != '\t' && s[n] != '\n')
			break;
	s[n+1] = '\0';
	return n;
}


5. Goto and labels
	- 지정한 부분으로 바로가라라는 명령입니다
for (i =0; i<n; i++)
	for (j=0; j<m; j++)
		if(a[i] == b[j])
			goto found;
found : ...
