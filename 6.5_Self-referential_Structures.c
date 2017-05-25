6.5 Self referential structures
자기참조 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100
struct tnode *addtree (struct tnode *, char *);
void treeprint (struct tnode *);
int getword(char*, int);

main() 
{
	struct tnode* root;
	char word[MARWORD];
		
	root = NULL;
	while (getword(word, MAXWORD) != EOF)
		if(isalpha(word[0]))
			root = addtree(root, word);
	treeprint (root);
	return 0;
}

struct tnode* talloc(void);
char* strdup(char *);


a 와 w 노드를 at혹은 p에 추가한다  

struct treenode *addtree(struct tnode *p, char *w)
{
	int cond;

	if (p == NULL)
	 {	
	    p = talloc();
	    p->word = strdup(w);
	    p->count = 1;
   	    p->left = p->right = NULL;
 	 } 
	else if (cond <0) 
		p->left = addtree(p->left, w);
	else
		p->right = addtree(p->right, w);
	return p;
}

treeeprint 함수는 트리p에 손서에 따라 출력하는 함수

void treeprint(struct tnode *p)
{
	if (p != NULL) 
	{
		treeprint (p->left);
		printf("%4d %s\n", p->count, p->word);
		treeprint (p->right);
	}
}

talloc함수는 tnode를 만드는 함수 

#include <stdlib.h>

struct tnode* talloc(void)
{
	return (struct tnode*) malloc (sizeof(struct tnode));
}

*strdup 포인터 함수는 s의 사본 a 를 만든다
char* strdup (cahr *s)
{
	char* p;

	p = (char *) malloc (strlen(s) +1);
	if (p != NULL)
		strcpy (p,s);
	return p;
}



