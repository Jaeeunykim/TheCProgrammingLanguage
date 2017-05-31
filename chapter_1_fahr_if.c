#include <stdio.h>

int main() 
{
	int c,i;
	int ndigit[10];
	
	printf("number: |");
	for( i =0; i<10; ++i){
			ndigit[i]= 0;
 			printf (" %d |",i);
	}
	printf("\n");

	while((c=getchar()) != 'A')
			if( c == '0')
				ndigit[0]++;
			else if(c == '1')
				ndigit[1]++;
			else if ( c== '2')
				ndigit[2]++;
			else if(c == '3')
				ndigit[3]++;
			else if(c =='4')
				ndigit[4]++;
			else if(c =='5')
				ndigit[5]++;
			else if(c =='6')
				ndigit[6]++;
			else if(c =='7')
				ndigit[7]++;
			else if(c == '8')
				ndigit[8]++;
			else if (c == '9')
				ndigit[9]++;

 	printf("count: |");
	for(i=0; i<10; ++i){
		printf (" %d |", ndigit[i]); 
	}
	printf("\n");
}

