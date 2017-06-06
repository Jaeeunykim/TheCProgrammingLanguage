아래의 프로그램은 line배열에서 "ould"가있는 라인만을 출력합니다

예를들어 아래와 같은 라인을
Ah Love! could tou and I with Fate conspire
To grasp this sorry Scheme if Things entrie,
Would not we shatter it to bits -- and then
Re-mould it nearer to the Heart's Desire!

이러한 결과가 나오게 됩니다
Ah Love! could tou and I with Fate conspire
Would not we shatter it to bits -- and then
Re-mould it nearer to the Heart's Desire!

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max)
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"

int main()
{
	char line[MAXLINE];
	int found =0;

	while (getline(line, MAXLINE) > 0)
		if (strindex(line, pattern) >= 0) {
			printf("%s", line);
			found++;
		}
	return found;

}

여기서 getline함수는 사용자로부터 입력을 null일때까지 lim안에서
계속 받아 배열s에 할당해주고 i의 값을 반환한다 
int getline(char s[], int lim)
{
	int c,i;

	i=0;

	while(--lim >0 &&(c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if ( c=='\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

t배열의 k번째와 s배열j번째가 같고 t배열의k번째가 null이아니면 
하나씩 증가시키고, t배열의k번째가 null이되면 i값을 반환한다(단 k>0일때)
	
int strindex(char s[], char t[])
{
	int i, j, k;

	for(i=0; s[i] != '\0'; i++) {
		for (j=i, k=0; t[k]!='\0' && s[j] == t[k]; j++, k++);
		if ( k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}


