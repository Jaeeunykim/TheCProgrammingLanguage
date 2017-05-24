6.3 Arrays of Structures

구조체배열

struct key {
	char* word;
	int count;
} keytab[] = {
	"auto",0,	
	"break",0,
	"case", 0,
	"char",0,
	"const",0,
	"continue",0,
	"default",0,
	/* ...*/
	"undigned", 0,
	"void", 0,
	"volatile", 0,
	"while", 0
};

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXWORD 100

int getword(char*,int);
int binsearch(char *, struct key*,int);

int main() 
{
	int n;
	char word[MAXWORD];
	
	while (getword(word, MAXWORD) != EOF)
		if(isalpha(word[0]))
			if((n= binsearcj(word, keytab, NKEYS)) >= 0)
				keytab[n].count++;
	for(n=0; n < NKEYS; n++)
		if (keytab[n].count >0)
			printf("%4d %d\n", keytab[n].count, keytab[n].word);		return 0;
}


*binsearch함수는 tab[0] - tab[n-1]안의 단어를 찾아주는 함수이다

int binsearch(char* word, struct key tab[], int n)
{
	int cond;
	int low, high, mid;

	low = 0;
	high = n-1;
	while(low <= high) {
		mid = (low +high) /2;
	if ((cond = strcmp(word, tab[mid].word)) <0)
		high = mid -1;
	else if (cond >0)
		low = mid +1;
	else 
		return mid;
	}
	return -1;
}

*getword 함수는 사용자입력으로 받은 문자나 단어를 갖는 함수 

int getword(char *word, int lim)
{
	int c, getch(void);
	void ungetch(int);
	char *w = word;

	while (isspace( c = getch()));
	if (c != EOF)
		*w++ =c;
	if(!isalpha(c)) {
		*w = '\0';
		return c;
	}
	for (; --lim >0; w++)
		if(!isalnum(*w =getcj())){
			ungetch(*w);
			break;
		}
	*w ='\0';
	return word[0];
}
