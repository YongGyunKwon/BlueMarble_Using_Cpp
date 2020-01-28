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


using namespace std;


void land::buy1(P1 &player1, P1 &player2)
{
	int sta, a;
	sta = player1.showsta();
	gotoxy(20, 29);
	if (player2.land[sta] == "P2-H") {
		cout << "player2 호텔입니다.";
		player1.spendmoney(400);
		player2.spendmoney(-400);
		Sleep(2000);
	}
	else if (player2.land[sta] == "P2-B") {

		cout << "상대방 빌딩입니다.";
		player1.spendmoney(200);
		player2.spendmoney(-200);
		Sleep(2000);
	}

	else if (player1.land[sta] == "P1-H") {
		cout << "본인소유 호텔입니다.";
		Sleep(2000);
	}
	else if (player1.land[sta] == "P2-B") {
		cout << "본인소유 빌딩입니다.";
		Sleep(2000);
	}
	//elseif 추가
	else
	{
		cout << "빈땅 입니다. 구매하시겠습니까?";
		cout << " 호텔구매 : 1 빌딩구매 : 2 /";
		cin >> a;
		if (a == 1)
		{
			player1.land[sta] = "P1-H";
			player1.spendmoney(50);
			(player1.location).push_back(landname[sta]);

		}
		else if (a == 2)
		{
			player1.land[sta] = "P1-B";
			player1.spendmoney(30);
			(player1.location).push_back(landname[sta]);
		}
		//else
		//player1.land[sta] = " ";

	}
}

void land::buy2(P1 &player1, P1 &player2)
{
	int sta, a;
	sta = player1.showsta();
	gotoxy(20, 29);
	if (player2.land[sta] == "P1-H") {
		cout << "player1 호텔입니다.";
		player1.spendmoney(400);
		player2.spendmoney(-400);
		Sleep(2000);
	}
	else if (player2.land[sta] == "P1-B") {

		cout << "player1 빌딩입니다.";
		player1.spendmoney(200);
		player2.spendmoney(-200);
		Sleep(2000);
	}

	else if (player1.land[sta] == "P2-H") {
		cout << "본인소유 호텔입니다.";
		Sleep(2000);
	}
	else if (player1.land[sta] == "P2-B") {
		cout << "본인소유 빌딩입니다.";
		Sleep(2000);
	}
	//elseif 추가
	else
	{

		cout << "빈땅 입니다. 구매하시겠습니까?";
		cout << " 호텔구매 : 1 빌딩구매 : 2 /";
		cin >> a;
		if (a == 1)
		{
			player1.land[sta] = "P1-H";
			player1.spendmoney(50);
			(player1.location).push_back(landname[sta]);

		}
		else if (a == 2)
		{
			player1.land[sta] = "P1-B";
			player1.spendmoney(30);
			(player1.location).push_back(landname[sta]);
		}
		//else
		//player1.land[sta] = " ";

	}
}

string land::showland(int sta, P1 player)
{
	return player.land[sta];
}