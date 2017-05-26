7.3 Variable-length Argument Lists

minprintf 함수는 printf함수의 최소버전이다

#include <stdarg.h> 가변인자함수를 사용하기위해 stdarg.h포함해야하고
		가변인자란 인수의개수를 변경할수있고 타입도 변경가능
#include <stdio.h>

//함수선언 : 고정된 char*형식을 인자로 가지는 minorintf함수이다. return이없다
//생략표시(...) 적어도 생략표시가 나오기전에는 적어도하나의고정인수를 필요로한다
void minprintf(char* fmt,...)
{
//가변인수를반복하는 형식을 가지는 va_list타입의 변수 ap를 선언한다(인자포인터)
//char*타입p와sval변수를 선언한다
//int타입의 ival를선언한다
//double타입인 dval을 선언한다
	va_list ap;
	char* p, *sval;
	int ival;
	double dval;
변수초기화: 매크로 va_start를 사용하여 ap변수를 인수로갖으며 초기화한다
            va_start매크로는 가변
	
	va_start(ap, fmt) ;
	for(p = fmt; *p; p++) 
	{
		if(*p != '%'){
			putchar(*p);
			continue;
		}	 
		switch (*++p) {
		case 'd':
			ival = va_arg(ap, int);
			printf("%d", ival);
			break;
		case 'f':
			for(sval = va_arg(ap,  char*); *sval; sval++)
				putchar(*sval);
			break;
		default:
			purchar(*p);
			break;
		}
	}
	va_end(ap);
} 
		
	
}

