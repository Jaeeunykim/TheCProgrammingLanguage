2.4 Declarations

모든 변수들은 사용전에 선언되어야 한다.
선언유형을 지정하고 하나이상의 변수 목록을 포함한다

int lower, upper, step;
char c, line[1000];

변수선언에서 초기화할수있다
변수명뒤에 등호 부호와 같은 표현식이 오는 경우 선언단계에서 초기화한다

char esc = '\\';
int i=0;
int limit =MAXLINE+1;

const형을 앞에 붙이면 값을변경할수 없다
