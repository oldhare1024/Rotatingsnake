#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.14159
int i;
float offset;
struct Circle
{
	int centerx = 300;
	int centery = 300;
	int r = 200;
}c;
struct sector
{
	int left = c.centerx - c.r;
	int top = c.centery - c.r;
	int right = c.centerx + c.r;
	int bottem = c.centery + c.r;
}s;
int main()
{
	initgraph(600, 600);
	setbkcolor(RGB(128, 128, 128));
	cleardevice();
	for (i = 1; i < 20;i++)
	{
		offset=i*PI/10;
		setfillcolor(RGB(0, 240, 220));
		solidpie(s.left, s.top, s.right, s.bottem, offset,2*PI/60+offset);
		setfillcolor(RGB(255, 255, 255));
		solidpie(s.left, s.top, s.right, s.bottem, 2 * PI + offset, 3 * PI / 60 + offset);
		setfillcolor(RGB(200, 0, 0));
		solidpie(s.left, s.top, s.right, s.bottem, 3 * PI + offset, 5 * PI / 60 + offset);
		setfillcolor(RGB(0, 0, 0));
		solidpie(s.left, s.top, s.right, s.bottem, 5 * PI + offset, 6 * PI / 60 + offset);
	}
	_getch();
	closegraph();
	return 0;
}