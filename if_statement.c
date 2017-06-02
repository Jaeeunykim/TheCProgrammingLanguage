1. if-Else (if문)
	- if문에서 조건식이 참이면 0이 아닌 값을 가지고, 거짓이면 0을 갖는다
		조건식이 참이면 상태1이 실행되고 거짓이면 else의 상태2가 실행된다

	if(조건식)
		상태1
	else
		상태2
	
	- 중첩된 if문안에서 if-else문은 중괄효를 사용하여 구별해주어야 한다
	  그렇지 않으면 컴파일러오류가 생깁니다
	if (n> 0) {
		if (a>b)
			z= a;
		else
			z=b;

	if (n>0) {
		if <a>b)
			z= a;
	}
	else
		z=b;

2. Else -If (else if문)
	- 세가지이상의 선택사항이 주어질때는 else if문을 활용하는 것이 좋다
binsearch 함수에서의 if문들을 확인해보자
int binsearch (int x, int v[], int n)
{
	int low, high, mid;

	low = 0; 
	high = n-1;
	while (low <= high) {
		mid = (low +high) /2;
		if (x <v[mid])  //v배열 중간의 값이 x보다 크면
			high = mid +1;
		else if (x > v[mid])//v배열의 중간값이 x보다 작으면
			low = mid +1;
		else
			return mid; //중간값과 x값이 동일할때 return 
	}
	return -1;
}

3. Switch
	- switch문은 if~else문과 유사하지만 좀더 간결히 사용할수 있습니다
	- 그리고 중간에 있는 break 키워드는 switch문을 종료하게 하고,
	- default 키워드는 해당하는 case문이 없을때 기본적으로 수행되는 코드입니다
	- switch 문에는 정수형만 가능합니다 
	- 비교연산자 사용이 불가능합니다 
int main() 
{
	int c, nwhite, nother, ndigit[10];

	nwhite = nother =0;
	for (i=0; i<10; i++)
		ndigit[i] = 0;

	while((c = getchar()) != EOF) {
		switch(c) {
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				ndigit[c-'0']++;
				break;
			case ' ': case '\n': case '\t':
				nwhite++;
				break;
			default:
				nother++;
				break;
		}
	}
	printf("digits =");
	for (i =0; i <10; i++)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
	return 0;
}
