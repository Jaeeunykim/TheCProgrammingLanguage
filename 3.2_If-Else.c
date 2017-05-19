3.2 If-Else

if-else 문은 결정표현문입니다
if-else 문을 중괄호로 묶어주어야 한다

9-10줄: 만약 expression이 true 이면 statement1 상태가 되고,
11-12줄: 만약 expression이 false 이면 statement2 상태가 된다
여기서 else 는 선택사항이지만,
if (expreesion)
	statement1
else
	statement2

연속된 if절에서는 중괄호로 구분해주어야 한다
구분해주지않으면 컴파일이러는 17줄과 20번째 else 를 연관시켜 계산한다
if (n >0) {
	if (a>b) 
		z=a;
	}
else 
	z =b;


