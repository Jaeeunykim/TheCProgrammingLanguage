Increment and Decrement Operators(증감연산자)

	squeeze함수는 문자열중에 인자로있는 캐릭터문자가 있으면 제외하는 함수입니다. 예를 들어 다음에 인자가("hello",'l') 있다면 결과는 heo로 나오게 됩니다

void squeeze(char s[], int c)
{	
	int	i, j;

	for (i = j =0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}


	strcat함수는 첫번째 인자배열에 끝에 두번째 인자배열을 연결시키는 함수입니다
void strcat(char s[], char t[])
{
//여기서 변수 i,j는 각 while문의 인덱스입니다
//j++는 t[j]값이 assign되고 나서 j를 1증가시켜줌을 뜻합니다(후위증가)
	int i,j;

	while(s[i] != '\0')
		i++;
	while((s[i++] = t[j++]) != '\0');
}
