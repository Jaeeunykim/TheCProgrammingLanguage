2.8 Increment and Decrement Operators

* 문자열에서 문자를 삭제 하는 계산

함수선언 : 리턴타입이 없고 cahr형 s배열과 정수 c를 인자로 가지고있는 squeeze함수

함수구현 

변수선언 정수인 i,j
i,j의 초기값은 0이고 s배열이 끝이아니면 i를 1씩증가시켜라
만약 s[i]배열이 인수 c가 아니면 s[j++]에 s[i]를 선언해라
s배열이 끝나면 s[j] 는 null이된다.

void squeeze (char s[], int c)
{
	int i,j;
	for (i=j=0; s[i] != '\0'; ++i)		
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}

* 문자열 이어붙이기 

함수선언 : 리턴타입이 없는 strcat함수로 문자형 s와 t배열을 갖는다

함수구현 :
정수형 i,j선언
i,j 초기값 0 설정
s[i]배열의 끝이아닌동안 계속 i를 하나씩 증가시킨다
s[i++배열만큼] 에 t[j++만큼을 assign하라 s,t배열의끝이 아닌동안



