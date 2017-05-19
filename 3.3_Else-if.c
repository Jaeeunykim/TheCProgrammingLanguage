3.3 Else-if

2진법 검색 

함수선언 : return 타입이 int형이고 3개의 인자 정수 x,v배열,n을 가지고있는 binsearch함수이다

함수구현 :
변수 low, high, mid; 선언

변수 low =0; high = n-1; 초기값 설정

정수 low가 정수hight가 될때까지 실행
정수mid는 low+high를 2로 나눈값을 assign시킨다
만약 정수x가 배열v의 중간값보다 작으면 정수 high에 중간값+1을 assign시킨다
위의 조건이 아니고 정수x가 v배열의 중간값보다 크면
최소값(low)에 중간값(mid) +1값을 assign시킨다
중간값을 찾으면 mid를 반환시켜라
매치되는 값이 없으면 -1를 반환시켜라

int binsearch (int x, int v[], int n)
{
	int low, high,mid;

	low =0;
	hight = n-1;
		
	while (low <= hight){
		mid = (low +high) /2;
		if(x < v[mid]) 
			high = mid +1;
		else if (x > v[mid])
			low = mid +1;
		else 
			return mid;
		}

	return -1;
}



