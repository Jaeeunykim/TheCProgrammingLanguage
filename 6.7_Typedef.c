6.7 Typedef 

사용자 형식 정의 

typedef struct tnode 
{
	char *word;
	int count;
	struct tnode *left;
	setuct tnode *right;
} Treenode;

Treeptr talloc(void)
{
	return (treeptr) malloc (sizeof (Treenode)));
}


