#include <stdio.h>

int main() 
{
	char* s = "hello";
	char* t = "hi";

	if(mystrcmp(s,t) == 0)
		printf ("same!!\n");
	else	
		printf ("not same!!\n");
}

int mystrcmp (char* s, char *t)
{
	int i;

	for(i= 0; s[i] == t[i]; i++)
	{ if(s[i] == '\0')
		return 0;
	}
	return 1;

}
