5.4 Address Arithmetic

//alloc : 가상메모리 할당
//static 변수는 함수가 종료되어도 값을 유지한다 

#define ALLOCSIZE 10000
//동적 메모리공간의 사이즈가 10000인 allocbuf문자형 배열선언 
//allocbuf의 배열의 시작 주소를 갖는 allocp문자형 포인터를 선언한다 
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

//함수선언 
//int형주소의 시작값을 인자로 가지는 문자포인터형 alloc함수
char *alloc(int n)
{
//배열allocbuf + 최대사이즈 10000 - allocbuf의 주소값이 alloc 주소시작값보다 크거나 같으면 allocp(버퍼의 주소 시작값 -n을 반환하고 아니면 0을반환하라
	if(allocbuf + ALLOCSIZE - allocp >= n) {
		allocp += n;
		return allocp -n;
	} else
		return 0;
}
