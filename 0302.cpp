#include<stdio.h>
#include<easyx.h>
#include<time.h> //
int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE);
	setbkcolor(RGB(230, 231, 232));
	cleardevice();
	setbkmode(TRANSPARENT);

	int score = 0;
	char str[50]=" ";
	const clock_t FPS = 1000 / 60; //
	int start_time = 0; //
 	int end_time = 0; //
	int fream_time = 0; //
	while (true)  
	{
		start_time = clock(); //
		sprintf(str, "Score :%d", score++);
		settextcolor(BLUE);
		cleardevice();  
		outtextxy(20, 20, str);
		end_time = clock(); //
		fream_time = end_time - start_time; //
		if (fream_time<FPS) //
		{
			Sleep(FPS - fream_time); //
		}
	}
	return 0;
}
