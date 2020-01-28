#include<iostream>
#include<Windows.h>
#include<conio.h>
#include <stdlib.h>
using namespace std;


void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


void start()
{
	while (true)
	{


		int start;
		for (int i = 0; i < 2; i++)
		{
			gotoxy(0, 0);
			cout << endl << endl << endl;
			cout << "           「￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣｜          " << endl;
			cout << "           ｜｜￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                               □        □      □       ｜｜          " << endl;
			cout << "           ｜｜        □      □          □□□□□□        □□□□□□   □        □□□□□       ｜｜          " << endl;
			cout << "           ｜｜        □      □                    □        □        □   □        □      □       ｜｜          " << endl;
			cout << "           ｜｜        □□□□□          □□□□□□        □        □   □        □□□□□       ｜｜          " << endl;
			cout << "           ｜｜        □      □          □                  □        □   □□□                     ｜｜          " << endl;
			cout << "           ｜｜        □□□□□          □□□□□□        □        □   □     □□□□□□□□    ｜｜          " << endl;
			cout << "           ｜｜                                                □□□□□□   □                         ｜｜          " << endl;
			cout << "           ｜｜     □□□□□□□□     □□□□□□□□                     □        □□□□□       ｜｜          " << endl;
			cout << "           ｜｜            □                   □                            □                □       ｜｜          " << endl;
			cout << "           ｜｜            □                   □                                      □□□□□       ｜｜          " << endl;
			cout << "           ｜｜                                                                         □               ｜｜          " << endl;
			cout << "           ｜｜                                                                         □□□□□       ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜        □□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□        ｜｜          " << endl;
			cout << "           ｜｜        □                                                                      □        ｜｜          " << endl;
			cout << "           ｜｜        □     ■■■■   ■■■■■      ■      ■■■■    ■■■■■        □        ｜｜          " << endl;
			cout << "           ｜｜        □    ■              ■         ■■     ■     ■       ■            □        ｜｜          " << endl;
			cout << "           ｜｜        □     ■■■■       ■        ■  ■    ■■■■        ■            □        ｜｜          " << endl;
			cout << "           ｜｜        □            ■      ■       ■■■■   ■    ■        ■            □        ｜｜          " << endl;
			cout << "           ｜｜        □    ■■■■        ■      ■      ■  ■     ■       ■            □        ｜｜          " << endl;
			cout << "           ｜｜        □                                                                      □        ｜｜          " << endl;
			cout << "           ｜｜        □□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□        ｜｜          " << endl;
			cout << "           ｜｜                                                            made by 권용균 정찬영 한승규  ｜｜          " << endl;
			cout << "           ｜ ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ ｜          " << endl;
			cout << "            ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣           " << endl << endl << endl;
			Sleep(500);
			gotoxy(0, 0);
			cout << endl << endl << endl;

			cout << "           「￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣｜          " << endl;
			cout << "           ｜｜￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                               ▣        ▣      ▣       ｜｜          " << endl;
			cout << "           ｜｜        ▣      ▣          ▣▣▣▣▣▣        ▣▣▣▣▣▣   ▣        ▣▣▣▣▣       ｜｜          " << endl;
			cout << "           ｜｜        ▣      ▣                    ▣        ▣        ▣   ▣        ▣      ▣       ｜｜          " << endl;
			cout << "           ｜｜        ▣▣▣▣▣          ▣▣▣▣▣▣        ▣        ▣   ▣        ▣▣▣▣▣       ｜｜          " << endl;
			cout << "           ｜｜        ▣      ▣          ▣                  ▣        ▣   ▣▣▣                     ｜｜          " << endl;
			cout << "           ｜｜        ▣▣▣▣▣          ▣▣▣▣▣▣        ▣        ▣   ▣     ▣▣▣▣▣▣▣▣    ｜｜          " << endl;
			cout << "           ｜｜                                                ▣▣▣▣▣▣   ▣                         ｜｜          " << endl;
			cout << "           ｜｜     ▣▣▣▣▣▣▣▣     ▣▣▣▣▣▣▣▣                     ▣        ▣▣▣▣▣       ｜｜          " << endl;
			cout << "           ｜｜            ▣                   ▣                            ▣                ▣       ｜｜          " << endl;
			cout << "           ｜｜            ▣                   ▣                                      ▣▣▣▣▣       ｜｜          " << endl;
			cout << "           ｜｜                                                                         ▣               ｜｜          " << endl;
			cout << "           ｜｜                                                                         ▣▣▣▣▣       ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜        ▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣        ｜｜          " << endl;
			cout << "           ｜｜        ▣                                                                      ▣        ｜｜          " << endl;
			cout << "           ｜｜        ▣     ■■■■   ■■■■■      ■      ■■■■    ■■■■■        ▣        ｜｜          " << endl;
			cout << "           ｜｜        ▣    ■              ■         ■■     ■     ■       ■            ▣        ｜｜          " << endl;
			cout << "           ｜｜        ▣     ■■■■       ■        ■  ■    ■■■■        ■            ▣        ｜｜          " << endl;
			cout << "           ｜｜        ▣            ■      ■       ■■■■   ■    ■        ■            ▣        ｜｜          " << endl;
			cout << "           ｜｜        ▣    ■■■■        ■      ■      ■  ■     ■       ■            ▣        ｜｜          " << endl;
			cout << "           ｜｜        ▣                                                                      ▣        ｜｜          " << endl;
			cout << "           ｜｜        ▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣        ｜｜          " << endl;
			cout << "           ｜｜                                                            made by 권용균 정찬영 한승규  ｜｜          " << endl;
			cout << "           ｜ ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ ｜          " << endl;
			cout << "            ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣           " << endl << endl << endl << endl;
			Sleep(500);

			gotoxy(0, 0);
			cout << endl << endl << endl;
			cout << "           「￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣｜          " << endl;
			cout << "           ｜｜￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                               ■        ■      ■       ｜｜          " << endl;
			cout << "           ｜｜        ■      ■          ■■■■■■        ■■■■■■   ■        ■■■■■       ｜｜          " << endl;
			cout << "           ｜｜        ■      ■                    ■        ■        ■   ■        ■      ■       ｜｜          " << endl;
			cout << "           ｜｜        ■■■■■          ■■■■■■        ■        ■   ■        ■■■■■       ｜｜          " << endl;
			cout << "           ｜｜        ■      ■          ■                  ■        ■   ■■■                     ｜｜          " << endl;
			cout << "           ｜｜        ■■■■■          ■■■■■■        ■        ■   ■     ■■■■■■■■    ｜｜          " << endl;
			cout << "           ｜｜                                                ■■■■■■   ■                         ｜｜          " << endl;
			cout << "           ｜｜     ■■■■■■■■     ■■■■■■■■                     ■        ■■■■■       ｜｜          " << endl;
			cout << "           ｜｜            ■                   ■                            ■                ■       ｜｜          " << endl;
			cout << "           ｜｜            ■                   ■                                      ■■■■■       ｜｜          " << endl;
			cout << "           ｜｜                                                                         ■               ｜｜          " << endl;
			cout << "           ｜｜                                                                         ■■■■■       ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜                                                                                          ｜｜          " << endl;
			cout << "           ｜｜        ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■        ｜｜          " << endl;
			cout << "           ｜｜        ■                                                                      ■        ｜｜          " << endl;
			cout << "           ｜｜        ■     ■■■■   ■■■■■      ■      ■■■■    ■■■■■        ■        ｜｜          " << endl;
			cout << "           ｜｜        ■    ■              ■         ■■     ■     ■       ■            ■        ｜｜          " << endl;
			cout << "           ｜｜        ■     ■■■■       ■        ■  ■    ■■■■        ■            ■        ｜｜          " << endl;
			cout << "           ｜｜        ■            ■      ■       ■■■■   ■    ■        ■            ■        ｜｜          " << endl;
			cout << "           ｜｜        ■    ■■■■        ■      ■      ■  ■     ■       ■            ■        ｜｜          " << endl;
			cout << "           ｜｜        ■                                                                      ■        ｜｜          " << endl;
			cout << "           ｜｜        ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■        ｜｜          " << endl;
			cout << "           ｜｜                                                            made by 권용균 정찬영 한승규  ｜｜          " << endl;
			cout << "           ｜ ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ ｜          " << endl;
			cout << "            ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣           " << endl << endl << endl << endl << endl;
			Sleep(500);


		}
		gotoxy(27, 20);
		cout << "설명을보려면 0 을, 시작하려면 아무거나입력하세요 : ";
		cin >> start;

		if (start == 0)
		{
			system("cls");
			gotoxy(0, 0);
			cout << "게임입니다 아무숫자나 입력하면 다시시작";


			cin >> start;
			system("cls");
		}
		else
			break;
	}
}