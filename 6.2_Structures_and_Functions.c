6.2 Structures and functions

pt = > strunture point

Strucures(구조체)란 하나이상의 변수를 묶어 그룹화 하는 사용자 정의 자료형
서로다른 타입을 가진 변수들을 묶어 그룹화가 가능하다.
의미있는 구조체를 만든다

*x,y 구성요소의 포인트 만들기 

struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;
	return temp;
}

*addpoint함수는 두개의 포인트 추가 
struct addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
}

*ptinrext함수는 p가 r안에 있으면 1를 반환하고, 아니면 0을 반환한다

int ptinrect (struct point p, struct rect r)
{
	return p.x >= r.pt1.x && p.x < r.pt2.x
	    && p.y >= r.pt1.y &&p.y < r.pt2.y;
}


* canorect함수는 직사각형의 좌표를 정규화 한다
struct rect canonrect(struct rect r)
{
	struct rect temp;

	temp.pt1.x = min(r.pt1.x, r.pt2.x);
	temp.pt1.y = min(r.pt.1y, r.pt2.y);
	temp.pt2.x = max(r.pt1.x, r.pt2.x);
	temp.pt2.y = max(r.pt1.y, r.pt2.y);
	return temp;
}
