#include <stdio.h>

int mystrcmp (char* a, char* b);

int main()
{
	char* a = "hello!";
	char* b = "hi!";

	if (mystrcmp(a,b) == 0) 
		printf("same!!\n");
	else
		printf("not same!\n");

}

int mystrcmp (char* a, char* b)
{
	int i;
	for(i=0; a[i] ==b[i]; ++i)
	{	
		if(a[i] == '\0')
			return 0;
	}
	return 1;
}

