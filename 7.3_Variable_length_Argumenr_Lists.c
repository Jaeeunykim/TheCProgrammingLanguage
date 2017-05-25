7.3 Variable-length Argument Lists

minprintf 함수는 printf함수의 최소버전이다

#include <stdarg.h>
#include <stdio.h>


void minprintf(char* fmt,...)
{
	va_list ap;
	char* p, *sval;
	int ival;
	double dval;

	va_stat(ap, fmt) ;
	for(p = fmt; *p; p++) 
	{
		if(*p != '%'){
			putchar(*p);
			continue;
		}	 
		switch (*++p) 
		
	
}

