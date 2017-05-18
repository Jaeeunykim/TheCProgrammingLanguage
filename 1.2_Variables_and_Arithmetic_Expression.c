1.2 Variables and Arithmetic Expressions


********** 화씨를 도씨로 변환하기  **********


입출력관련 파일을 포함한다
 #include <stdio.h> 
 
Entry point를 알려주기위해 main함수작성
int main() {} 

화씨도씨 그리고 범위변수들을 assign(선언)한다
int farh, celsius; 화씨 도씨
int lower, upper, stpe; 최소, 최대 한계값, 단계

범위변수들의 초기값을 설정해준다
lower = 0; upper=300; step =20;

while문을 사용하여 화씨가 증가됨에 따라 도씨로 환산한다

fahr = lower;
while( fahr <= upper) {
	celsius = 5* (fahr-32)/9;
	printf("%d\t%d", fahr, celsius);
	fahr = fhar + step;
	}

fahr가upper보다 작거나 같다는 조건이 true이면 아래의 loop가 실행된다
"정수 tap 정수" 자리에 fahr 와 celsius가 들어가 출력된다


******** 화씨를  소수점자리까지 도씨의 수로 환산 **********

소수점까지를 나타내기위해서 float형 변수를 선언한다

float fahr, celsius;
float lower, upper, step;

범위변수들의 초기값 선언
lower = 0; upper = 300; stpe =20;

while문을 사용하여 소수자리점까지의 계산식 입력
fahr = lower;
while (fahr <= upper) {
	celsius = (5.0/9.0) * (fahr-32);
	printf ("%3.0f %6.1f\n", fahr, celius);
	fahr = farh + step;
	}

fahr 가 upper 보다 작거나 같은 조건이 ture이면 실행된다
%3.0f는 실수3자리까지 소수점을 나타내지 않는 float형을 출력한다
%6.1f는 실수6자리까지 소수자리 한자리를 포함하는 float형 출력한다

