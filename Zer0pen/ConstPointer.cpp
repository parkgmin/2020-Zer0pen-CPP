#include <iostream>
using namespace std;

void display(const int *xpos, const int *ypos);
void move(int *xpos, int *ypos);

int main(void)
{
	int x = 10;
	int y = 20;

	display(&x, &y);
	move(&x, &y);
	display(&x, &y);

	return 0;
}

void display(const int *xpos, const int *ypos)
{
	cout << "현재의 위치" << *xpos << *ypos << endl;
}
void move(int *xpos, int *ypos)
{
	*xpos = *xpos + 1;
	*ypos = *ypos + 1;
}
