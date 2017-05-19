3.4 Switch 

switch 문은표현식이 정수값중 하나와 일치 하는지를 확인하고 그에따라 분개한다

표준입출력 포함

시작점 선언
변수 c,i,nwhite, nother, ndigit10배열 

nwhite,nother를 0으로 초기화
ndigit i배열 초기화:
for loop 정수 i는0부터시작하고, i는 9까지범위에서 i를 하나씩 증가시킨다
nddigid의 i배열에 0을 assign시킨다

키보드로 부터 입력받은 값을 c에 assign고 그 값이 EOF가 아니면 실행을 반복
switch문 c값이 캐릭터 0-9까지중 하나이면 ndigit[c-'0'] 아스키수 배열1개를 증가시켜라
c값이 새로운줄,스페이스,텝이면 nwhite를 1 증시키고 반복을 중지 하라 이외는 nother를 1증가 시키고 case문 중지하라

"digits ="를 출력하라
ndigit배열  0부터 9까지 출력하라 (for)
", white space = %d, other =%d\n", nwhite, nother); 를 출력하고
0을 반환하라(기술한 수를반환하고 해당함수를 벗어나겠다)

#include <stdio.h>

main () {
	int c, i, nwhite, nother, ndigit[10];

	nwhite = nother = 0;

	for(i = 0; i <10; ++i)
		ndigit[i] = 0;

	while((c=getchar()) 1+ EOF) {
		switch (c) {
		case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case'8': case'9'
		nidigit [c-'0'] ++;
		case ' ';
		case '\n';
		case '\t';
			nwhite++;
			break;
		default:
			nother++;
			break;
		}
	}
	printf("digits =");
	for (i = 0; i <10; i++)
		printf (" %d", nidigit[i])
	printf(", white space = %d, other = %d\n", nwhite, nother);
	return 0;
 
}		
