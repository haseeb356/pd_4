#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
gotoxy(80,23);
cout<<" HASEEB";
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
        