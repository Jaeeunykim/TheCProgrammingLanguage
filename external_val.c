#include <stdio.h>
//standard input output headerfile를 include 합니다
#define MAXLINE 1000
//기호상수 매크로 MALINE을 1000으로 정의합니다

//지역변수 & 전역변수 
//지역변수는 변수가 선언된 함수안에서만 값을 참조, 변경가능합니다
//전역변수는 여러함수들이 공동으로 쓸수있는 변수로 함수밖에 선언합니다

int max;
char line [MAXLINE];
char longest [MAXLINE];

//함수를 사용하기전에 선언해주어야 합니다
//참조할 할수를 main함수전에 선언해줍니다

int getline(void);
void copy(void);


//main함수에서는 getline함수를 이용해 반환된 값을 len에 할당해주고 할당된 값이 있고 그 값이 max(0)보다 크면 len의 값을 max에 assign해줍니다. 그리고 copy함수를 이용해 line의 캐릭터배열을 longest에 할당해주고 longest 배열을 출력합니다

//entry point입력하겠습니다
int main()
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while((len = getline(line, MAXLINE)) >0)
		if (len > max) {
			max =len;
			copy(longest, line);
		}
	if (max >0) 
		printf("%s", longest);
	return 0;
}

int getline(char s[], int lim)
{

	int c,i;
	extern char line[];

	for(i =0; i < MAXLINE -1 && (c=getchar()) != EOF && c !='\n'; ++i)
		line[i] = c;
	if(c == '\n') {
		line[i] =c;
		++i;
	}
	line[i] = '\0';
	return i;

}

void copy(char to[], char from[])
{
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;

