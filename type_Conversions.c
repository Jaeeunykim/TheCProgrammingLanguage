Type conversions(타입변환)

	aoti 함수
//aoti함수는 숫자0-9까지의 캐릭터문자를 받으면 정수로 반환해주는 함수입니다

//인자를 char[] (캐릭터배열형)s를 인자로 가지고있습니다

int atoi(char s[])
{
	int i, n;
	n = 0;

	for(i =0; s[i] >='0' && s[i] <= '9'; ++i)
		n =10*n +(s[i] -'0');
	return n;
}

//lower함수는 아스키코드 숫자를 인자로 가지고 있고,
//아스키코드 대문자'A' ~'Z'까지의 수이면 대문자를 소문자로 반환해주는 함수입니다

int lower(int c)
{
	if (c >= 'A' && 'Z')
		return c+'a' -'A';
	else
		return c;
}	
}

