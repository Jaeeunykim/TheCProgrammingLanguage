2.5 Arithmetic Operators

인진수 연산자는 +,-,*,/,% 이다
연산자 %는 foat, double형으로 사용할수없다.

윤년여부를 확인하는 프로그램

if ((year % 4 == 0 && year % 100 !== 0) || year % 400 ==0)
	printf ("%d is a leap year\n", year);
else 
	printf ("%d is not a leap year\n", year);


