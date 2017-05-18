1.4 Symbolic Constants

기호상수를 이용하여 화씨를 도씨로 변환

입출력파일 포함
#include <stdio.h>

기호상수 입력
상수를 문자로 정의해서 사용함 
#define LOWER 0
#define UPPER 300
#define STEP 20 

시작점 
main () {}

변수선언 
int fahr;

기호상수 활용하여 화씨를 도씨로 환산하는 값들 출력
for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
