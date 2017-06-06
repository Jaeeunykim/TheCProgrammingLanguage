#include <ctype.h>

double atof(char s[])
{
	double cal, power;
	int i, sign;

	//공백skip 
	for(i = 0; isspace(s[i]); i++);

	sign = (s[i] == '-') ? -1:1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for(val = 0.0; isdigit(s[i]); i++){
		val = 10.0 *val + (s[i] - '0');
		power *= 10;
	}
	return sign * val / power;
}

atof함수는 문자열을 double형 값으로 바꿔주는 함수입니다
atof함수가 변환할수있는 형태는 +,-기호와 0-9까지의 숫자들과 소수점입니다


getline함수를 통해 사용자로부터 입력받은 문자열을 소수점으로 변환하여 출력하는 프로그램입니다

%g 는 부동소주점을 나타내는 값을 말합니다

#include <stdio.h>
#define MAXLINE 100

int main()
{
	double sum, atof(char []);
	char line[MAXLINE];
	int getline(char line[], int max);

	sum = 0;
	while (getline(line, MAXLINE) >0)
		printf("\t%g\n", sum += atof(line));
	return 0;
}
