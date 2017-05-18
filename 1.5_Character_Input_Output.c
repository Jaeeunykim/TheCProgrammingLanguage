1.5 Character Input and Output

1.5.1 File Copying

getchar와 puchar를 통해 출력하는 식

표준입출력 
#include <stdio.h>

시작점
main() {}

변수선언 
int c;

키보드로 입력되는 값을 출력

c= getchar();
while(c != EOF) {
	puchar(c);
	c = getchar();
	}
키보드로 입력된 문자를 c에 assign하고
c를 출력하라 그리고 다시 키보드에 입려된 값을 c로 assign

1.5.2 Character Counting

문자를 세를함수 만들기 

표준입출력 포함 
#include <stdio.h> 

시작점
int maind() {}

변수선언 
long nc;

변수초기화
nc =0;

문자가 입력된 갯수를 출력 
키보드에 입력된 문자가 end of file이 아니면
변수를 1씩 증가 시키고 EOF일때 증가된 변수값을 출력하라
while( getchar() != EOF)
	++nc
printf("%ld\n", nc);


1.5.3 Line Counting 
키보드에 입력된 줄의수 세기

표준입출력 포함 
#include <stdio.h>

시작점 
int main() {} 

변수선언 
int c,nl;

변수 초기화
nl = 0;

키보드에 입려된 문자가 end of file 이 아니면 실행하라
c가 newline이면 변수 nl를 1씩 증가 시키고 c가 end of file이면
변수 nl의 정수값을 출력하라
while ((c = getchar()) != EOF)
	if (c == '\n')
		++nl;
	printf("%d\n", nl); 

1.5.4 Word Counting

입력된 문자의 계수를 세기

#include <stdio.h>

기호상수 정의 
#define IN 1
#define OUT 0

변수정의 
int c, nl, nw, nc, state;

변수 초기화
int = OUT;
nl = nw = nc = 0;

newline, newword, newchacracetr의 수 계산
키보드에 입력된 문자c가 end of file 이 아니면 변수 1증가시켜라
c가 newline이면 변수 nl을 1증가시켜라
c가 공백이면 상태는 0이된다
상태가 0이면 상태는 1이 되고 변수 nw를 1증가 시켜라 
while( (c = getchar()) != EOF) {
	++nc;
	if ( c == \n)
		++nl;
	if (c == ' ' || c== '\n' || c ='\t')
		state = OUT;
	else if (state == OUT) {
		state = IN;
		++nw;
	}
}



