5.3 Ponters and Arrays

//포인터변수의 증감은 해당 타입의 바이트수 만큼 증감됨

//포인터변수 증감 차이 확인

#include <stdio.h>

int main() 
{
//변수선언

	char* a;
	char c;
//변수초기값선언
	a = &c;
	c = 'a';
//출력 
	printf("address: %d\n", a);
	
	printf("value of address : %d\n", *a);
// 문자타입 포인터 증가 확인
	a = a+1
	printf ("address of a+1": %d\n", a);
}


//문자의 길이반환 포인터함수strlen 

//함수선언 : s의 시작주소를 인자로 갖는 strlen함수이고 return타입은 정수이다
int strlen (char *s)
{

//변수선언 : n은 for의 인덱스 값으로 사용된다
	int n;
//n는 0부터시작하고 s의 주소시작값이 null이될때까지 s주소값의 1증가된 주소로 이동한다(여기서는 1byte씩증가) 
	for(n =0; *s != '\0'; s++)
		n++
	return n;
//n을 반환하고 종료하라
	
}


