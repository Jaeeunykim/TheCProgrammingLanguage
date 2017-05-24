5.8 Initialization of Pointer Arrays

month_name함수는 월의 수를 대입하면 name포인터배열의 값에 있는 월이름을 반환한다


char *month_nmae(int n)
{

고정된메모리에 char*포인터 형의 name함수가 있고 해당월의 이름을 가지고있다 

	static char* name[] = {"Illegal month",
           "January", "February", "March",
           "April", "May", "June",
           "July", "August", "September",
           "October", "November", "December"
	};
	return (n<1 || n >12) ? name[0] :name [n];
인자n이 1보다 작거나 12보다 크면 "Illegal month"를 반환한다 (월을 1보다 작거나 12보다 클수 없다) n이 정상범위에 있으면 name[n]을 반환한다 
}

