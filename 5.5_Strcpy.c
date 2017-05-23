#include<stdio.h>

void mystrcp(char* s, char* t);

void main()
{
	char* s = "jeyong";
	char t[10];

	mystrcp(s, t);
	
	printf("s : %s\n ", s);
	printf("t : %s\n", t);
}

void mystrcp(char* s, char* t)
{
	while((*t = *s) !='\0')
	{
		t++;
		s++;
	}
}

void mystrcpy(char *s, char *t)
{
	while((*t++ = *t++) != '\0')
	;
}
