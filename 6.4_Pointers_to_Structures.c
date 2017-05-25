6.4 Pointers to Structures

구조체안 멤버접근방법 .으로 예를 들어  student 라는 구조체 안에 id에 접근하려면
student.id = 100;의 방법이 있고 구조체 포인터 접근하려면 student ->id = 100;으로 하는 방법이 있다 

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#deinfe MAXWORD 100

int getword (char *, int);
struct key* binsearch(char*, struct key*, int);

main() 
{
	char word[MAXWORD];
	struct key *p;

	while (getword(word, MAXWORD) != EOF)
		if(isalpha(word[0]))
			if((p=binsearch(word, keytab, NKEYS)) != NULL)
				p-> count ++;
	for(p = keytab; p < keytab + NKEYS; p++)
		if(p->count>0)
			printf("%4d %s\n", p->count, p->word);
	return 0;
}

struct key* binsearch (char* word, struck key* tab, int n)
{
	int cond;
	struct key* low = &tab[0];
	struct key* high = &tab[n];
	struct key* mid;

	while (low <high) 
	{
		mid = low + (high-low) /2;
		if ((cond = strcmp(word, mid ->word)) <0)
			high = mid;
		else if (cond >0)
			low = md +1;
		else 
			return mid;
	}
	return NULL;
}
}
