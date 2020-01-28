#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <Windows.h>
#include <conio.h>
#include<iomanip>
#include<vector>
#include "start.h"
#include"P1.h"
#include"land.h"
#include"location.h"

using namespace std;

int main()
{
	start();
	srand((unsigned int)time(NULL));

	P1 player1, player2;
	int a, count = 0;
	player1.set(0, 1000);
	player2.set(0, 1000);//초기금액 설정
	player1.setland();
	player2.setland();

	land buypay;
	while (1)
	{
		system("cls");
		location dnlcl1(player1);
		location dnlcl2(player2);
		if (count % 2 == 0) {
			gotoxy(20, 20);
			system("cls");
			dnlcl1.board(dnlcl1, dnlcl2, player1, player2, buypay);
			gotoxy(20, 20);
			cout << "P1턴입니다. 주사위를 굴리려면 1을 입력하세요 : ";
			cin >> a;
			player1.move(a, count);
			gotoxy(20, 23);
			cout << "P1의현재위치는 " << buypay.showname(player1) << "입니다 " << endl;
			gotoxy(20, 24);

			//출력 


			if (player1.showsta() == 0) {
				cout << "시작지점입니다";
				Sleep(2000);
			}//시작지점


			else if (player1.showsta() == 6)
			{

				cout << "무인도입니다 한턴 쉽니다.";
				Sleep(2000);
			}//무인도 땅


			else if (player1.showsta() == 18)
			{
				cout << "세계여행입니다 이동하고 싶은 위치를 적으세요 (0~20).";
				int x;
				cin >> x;
				player2.set(x);
			}//세계여행 여행이후 구매 추가필요

			else if (player1.showsta() == 12)
			{
				{
					int i, si;
					int gameswitch = 0;
					int input = 0;
					int Random = 0;
					int n = 0;
					srand((unsigned int)time(NULL));
					gameswitch = rand() % 2 + 1;
					gotoxy(20, 28);
					switch (gameswitch)
					{
					case 1:
						cout << "게임을 시작합니다." << endl;
						gotoxy(20, 29);
						cout << "홀수 이면 1 입력 짝수 이면 2입력 : ";
						cin >> i;
						si = rand() % 10 + 1;
						cout << "숫자는" << si << "입니다." << endl;
						if (si % 2 == 0)
							si = 2;
						else if (si % 2 == 1)
							si = 1;

						gotoxy(20, 30);
						if (si == i) {
							cout << ("승리.") << endl;
							player1.spendmoney(-100);
						}
						else
						{
							cout << ("패배.") << endl;
							player1.spendmoney(50);
						}
						Sleep(5000);
						break;
					case 2:
					{
						Random = (rand() % 3) + 1;

						cout << "1:가위, 2:바위, 3:보 /";
						gotoxy(20, 29);
						cout << "입력 : ";
						cin >> input;
						gotoxy(20, 30);
						cout << "사용자 : ";
						switch (input)
						{
						case 1: cout << "가위" << endl;
							break;
						case 2: cout << "바위" << endl;
							break;
						case 3: cout << "보" << endl;
							break;
						}
						gotoxy(20, 31);
						cout << "컴퓨터 : ";
						switch (Random)
						{
						case 1: cout << "가위" << endl;
							break;
						case 2: cout << "바위" << endl;
							break;
						case 3: cout << "보" << endl;
							break;
						}
						gotoxy(20, 32);
						if (Random == input)
						{
							cout << ("비겼습니다") << endl;
						}

						else
						{
							if (input == 1 && Random == 3 || input == 2 && Random == 1 || input == 3 && Random == 1)
							{
								cout << "이겼다" << endl;
								player1.spendmoney(-50);
							}
							else
							{
								cout << "졌다" << endl;
								player1.spendmoney(50);
							}
						}
						Sleep(5000);
						break;
					}
					}
				}
			}//미니게임 함수 


			else if (player1.showsta() == 17 || player1.showsta() == 7)
			{
				int chance = (rand() % 5) + 1;

				cout << "찬스 카드 발동\n";

				gotoxy(20, 29);
				switch (chance)
				{

				case 1: cout << ("로또 당첨(+100원)\n");
					player1.spendmoney(-100); break;
				case 2: cout << ("길에서 돈을 주웠습니다(+50원)");
					player1.spendmoney(-50); break;
				case 3: cout << ("속도 위반(-50원)\n");
					player1.spendmoney(50); break;
				case 4: cout << ("불우 이웃(-50원)\n");
					player1.spendmoney(50); break;

				case 5: cout << ("무인도입니다");
					player1.set(6); break;
				case 6: cout << ("벌금 상대에게 50원 지급");
					player2.spendmoney(-50);
					player1.spendmoney(50); break;


				}
				Sleep(2000);

				//찬스카드 함수
			}
			else
				buypay.buy1(player1, player2);//구매

		}
		else
		{
			gotoxy(0, 37);
			system("cls");
			dnlcl2.board(dnlcl1, dnlcl2, player1, player2, buypay);
			gotoxy(20, 20);
			cout << "P2턴입니다. 주사위를 굴리려면 1을 입력하세요 : ";
			cin >> a;
			player2.move(a, count);
			gotoxy(20, 23);
			cout << " P2의현재위치는 " << buypay.showname(player2) << "입니다 " << endl;
			gotoxy(20, 24);
			if (player2.showsta() == 0) {
				cout << "시작지점입니다";
				Sleep(2000);
			}//시작지점


			else if (player2.showsta() == 6)
			{
				cout << "무인도입니다 한턴 쉽니다.";
				Sleep(2000);
			}//무인도 


			else if (player2.showsta() == 18)
			{
				cout << "세계여행입니다 이동하고 싶은 위치를 적으세요 (0~20).";
				int x;
				cin >> x;
				player1.set(x);
				Sleep(1000);
			}//세계여행 


			else if (player2.showsta() == 12)
			{
				{
					int i, si;
					int gameswitch = 0;
					int input = 0;
					int Random = 0;
					int n = 0;
					srand((unsigned int)time(NULL));
					gameswitch = rand() % 2 + 1;

					switch (gameswitch)
					{
					case 1:
						cout << "미니게임 홀수 짝수 맞추기!.";
						gotoxy(20, 27);
						cout << "홀수 이면 1 입력 짝수 이면 2입력 : ";
						cin >> i;
						si = rand() % 10 + 1;
						cout << "숫자는" << si << "입니다." << endl;
						if (si % 2 == 0)
							si = 2;
						else if (si % 2 == 1)
							si = 1;
						gotoxy(20, 29);
						if (si == i) {
							cout << ("승리.") << endl;
							player2.spendmoney(-100);
						}
						else
						{
							cout << ("패배.") << endl;
							player2.spendmoney(50);
						}
						Sleep(5000);
						break;
					case 2:
					{
						Random = (rand() % 3) + 1;

						cout << "1:가위, 2:바위, 3:보 /";
						cout << "입력 : ";
						cin >> input;
						cout << "사용자 : ";
						switch (input)
						{
						case 1: cout << "가위" << endl;
							break;
						case 2: cout << "바위" << endl;
							break;
						case 3: cout << "보" << endl;
							break;
						}
						cout << "컴퓨터 : ";
						switch (Random)
						{
						case 1: cout << "가위" << endl;
							break;
						case 2: cout << "바위" << endl;
							break;
						case 3: cout << "보" << endl;
							break;
						}
						if (Random == input)
						{
							cout << ("비겼습니다") << endl;
						}
						else
						{
							if (input == 1 && Random == 3 || input == 2 && Random == 1 || input == 3 && Random == 1)
							{
								cout << "이겼다" << endl;
								player2.spendmoney(-50);
							}
							else
							{
								cout << "졌다" << endl;
								player2.spendmoney(50);
							}
						}
						Sleep(5000);
						break;
					}
					}
				}
			}//미니게임
			else if (player2.showsta() == 17 || player2.showsta() == 7)
			{
				int chance = 0;

				cout << "찬스 카드 발동\n";

				Sleep(1000);
				chance = (rand() % 5) + 1;
				gotoxy(20, 29);
				if (chance)
				{
					switch (chance)
					{
					case 1: cout << ("로또 당첨(+100원)");
						player2.spendmoney(-100); break;
					case 2: cout << ("길에서 돈을 주웠습니다(+50원)");
						player2.spendmoney(-50); break;
					case 3: cout << ("과속하셨습니다! (-50원)");
						player2.spendmoney(50); break;
					case 4: cout << ("불우 이웃 성금 지출(-50원)");
						player2.spendmoney(50); break;

					case 5: cout << ("무인도로 가십시오.");
						player2.set(6); break;
					case 6: cout << ("상대에게 50원 지급하십시오.");
						player1.spendmoney(-50);
						player2.spendmoney(50); break;


					}
				}
				Sleep(2000);
				//찬스카드 함수
			}
			else
				buypay.buy2(player2, player1);//구매
		}

	}

}