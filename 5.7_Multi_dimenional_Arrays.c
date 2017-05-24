5.7 Multi dimenional Arryas

#include <stdio.h>

static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31}
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};
*day_of_year함수는 년,월,일를 입력하면 윤년여부를 확인하여 해당년도의월일까지의 날짜수를 계산해줌

int day_of_year(int year, int month, int day)
{
	int i, leap;
윤년인지의 여부를 확인해서 윤년인계산이 참이면 1를 leap에 할당 아니면 0을 할당함
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;

인자로 들어온 월이 i의수와 같기전까지 인덱스를 더해준다
day에 인자로 입력된 일자 더하기 현재월까지의 날짜들을 모두 더해준 값을 할당해준다
day를 반환한다 
	for (i =1; i< month; i++)
		day += daytab[leap][i];
	return day;
}

*month_day함수는 년도와 날짜수를 넣으면 윤년여부를 확인하여 몇월 몇일로 계산
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;

윤년여부를 확인해서 윤년이면 1,아니면 0이할담됨
	leap = year%s ==0 && year%100 !=0 || year%400 ==0;

인자로들어온 날짜의 수가 daytab의 i번째보다 수보다 작아지기 전까지 인덱스 i를 1씩증가 시킨다 
yearday에서 -daytab[i]만큼 빼준값을 yearday에 할당한다 

	for(i =1; yearday > daytab[leap][i];
		yearday -= daytab[leap][i]l
yearday가 daytab의 수보다 작아지면 증가된 인덱스i의 값을 pmonth주소의 값에 할당시킨다
daytab[i]만큼 빼준 yearday의 값을 pday시작주소의 값에 할당시킨다
	*pmonth = i;
	*pday = yearday;
}
