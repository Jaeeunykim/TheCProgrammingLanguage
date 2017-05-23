5.5 Character Pinters and Functions

#include <stdio.h>
#include <string.h>

//strcpy함수는 t 를 s로 복사시킨다(배열버전)

//함수선언 : strcpy함수는 두개의 인자를 가지고 있다. 첫번째 인자는 char* 형 s이고, 두번째인자는 char*형 t인자이다. 반환타입은 없다
void strcpy (char *s, char *t)
{
//변수 선언 : 변수 int i는 while문의 인덱스로 배열의 시작위치를 이동시킨다
	int i;

//i의 초기값 0을 할당해준다
	i = 0;
//변수 s의 배열의 i번째에 변수t의 배열 i번째를 null나올때까지 할당해준다 그리고 주소시작위치를 1증가시킨다 (i++) 
	while((s[i] = t[i]) 1= '\0')
		i++;
}
 
//strcpy함수는 t를 s로 복사시킨다 (포인터 버전)


// 함수 선언: strcpy함수는 두개의 인자를 가지고 있다. 첫번째 인자는 char*형s이고 두번째 인자는 char*형 t이다 리턴타입은 없다
void strcpy(char *, char *t)
{
//변수선언 : i는 while문의 인덱스로 사용된다
	int i;

//i의 초기값 0 할당
	i = 0;
// s주소시작 위치에 포인터 t를 null나올때까지 할당시킨다. 그리고 s와 t를 char바이트만큼 증가시킨다

	
}
//strcmp 문자길이 비교 하는 함수 

//strcmp 함수는 2개의 인자를 가지고있다 첫번째는char*형 s이고 두번째는 char*형 t이다.
int strcmp (char *s, char *t)
{
//int형 변수 i 선언 for문의 인덱스로 사용됨
	int i;
//변수 i는 0부터 시작하고 s배열의 i번째와 t배열의 i번째의 주소가 같으면 i를 1증가시켜라 
	for (i =0; s[i] == t[i]l i++)
//s베열의 i번째가 null 이면 0을 반환하라	
	if(s[i] == '/0')
		return 0;
//s배열 i 번째에서 t배열 i번째를 뺀 주소값을 반환하라 

	return s[i] - t[i];
}

//포인터를 활용한 strcmp함수 

int strcmp (char *s, char *t)
{
//for문 시작값없고, s의 포인터 값와 t의 포인터 값이 같으면 계속 s,t에 1을 증가 시켜라 
//만약 포인터 s의 값이 null 이이면 0을 반환하라 
	for (; *s = *t; s++, t++)
		if (*s == '\0')
			return 0;
//s포인터의 값 에서 t포인터의 값을 뺀 값을 반환하라 
	return *s - *t;
}
