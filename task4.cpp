#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void movePlayer(int x, int y);

main()
{      
       int x=4, y=4;
       system("cls");
        printMaze();
        while(true)
{
    	movePlayer(x,y);
	x= x+1;
	if(x==21)

	{
		x=4;
			}
	}
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
        