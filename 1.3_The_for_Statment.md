1.3 The for statement

for문 활용해서 화씨를 도씨로 환산

입출력 파일 포함
#include <stdio.h>

시작점 입력
int main() {}

변수 선언 
int fahr;

for문으로 화씨를 도씨로 환산후 출력
for (fahr = 0; fahr<=300; fahr = fahr+ 20)
	printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr -32));

