1.6 Arrays

키보드에 입력 되는 값들중 0-9까지의 각각 숫자들과 공백 그리고 이외의 것들의곗수 확인 

표준입출력 포함
시작점 확인
변수 선언 
변수 초기화 
for문을 사용하여 변수ndigit[i]을 0으로 초기화함 

키보드에 입력된 문자가 end of file이 아니면 c에 assign 하고
만약 c가 캐릭터 0과 9사이라면 ndigit[c-'0']을1증가시켜라
else if  c가 공백(' ', newline, tap) 이라면 변수 nwhite를 1증가 시켜라
else  위의것들이 아니라면 변수 nother를 1증가 시켜라 
"digits="를 출력하라
ndigit[i]를 0부터 9까지 출력하라
", white space = %d, other =%d\n", nwhite, nother)를 출력하라  
