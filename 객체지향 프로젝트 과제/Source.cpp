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
	player2.set(0, 1000);//�ʱ�ݾ� ����
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
			cout << "P1���Դϴ�. �ֻ����� �������� 1�� �Է��ϼ��� : ";
			cin >> a;
			player1.move(a, count);
			gotoxy(20, 23);
			cout << "P1��������ġ�� " << buypay.showname(player1) << "�Դϴ� " << endl;
			gotoxy(20, 24);

			//��� 


			if (player1.showsta() == 0) {
				cout << "���������Դϴ�";
				Sleep(2000);
			}//��������


			else if (player1.showsta() == 6)
			{

				cout << "���ε��Դϴ� ���� ���ϴ�.";
				Sleep(2000);
			}//���ε� ��


			else if (player1.showsta() == 18)
			{
				cout << "���迩���Դϴ� �̵��ϰ� ���� ��ġ�� �������� (0~20).";
				int x;
				cin >> x;
				player2.set(x);
			}//���迩�� �������� ���� �߰��ʿ�

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
						cout << "������ �����մϴ�." << endl;
						gotoxy(20, 29);
						cout << "Ȧ�� �̸� 1 �Է� ¦�� �̸� 2�Է� : ";
						cin >> i;
						si = rand() % 10 + 1;
						cout << "���ڴ�" << si << "�Դϴ�." << endl;
						if (si % 2 == 0)
							si = 2;
						else if (si % 2 == 1)
							si = 1;

						gotoxy(20, 30);
						if (si == i) {
							cout << ("�¸�.") << endl;
							player1.spendmoney(-100);
						}
						else
						{
							cout << ("�й�.") << endl;
							player1.spendmoney(50);
						}
						Sleep(5000);
						break;
					case 2:
					{
						Random = (rand() % 3) + 1;

						cout << "1:����, 2:����, 3:�� /";
						gotoxy(20, 29);
						cout << "�Է� : ";
						cin >> input;
						gotoxy(20, 30);
						cout << "����� : ";
						switch (input)
						{
						case 1: cout << "����" << endl;
							break;
						case 2: cout << "����" << endl;
							break;
						case 3: cout << "��" << endl;
							break;
						}
						gotoxy(20, 31);
						cout << "��ǻ�� : ";
						switch (Random)
						{
						case 1: cout << "����" << endl;
							break;
						case 2: cout << "����" << endl;
							break;
						case 3: cout << "��" << endl;
							break;
						}
						gotoxy(20, 32);
						if (Random == input)
						{
							cout << ("�����ϴ�") << endl;
						}

						else
						{
							if (input == 1 && Random == 3 || input == 2 && Random == 1 || input == 3 && Random == 1)
							{
								cout << "�̰��" << endl;
								player1.spendmoney(-50);
							}
							else
							{
								cout << "����" << endl;
								player1.spendmoney(50);
							}
						}
						Sleep(5000);
						break;
					}
					}
				}
			}//�̴ϰ��� �Լ� 


			else if (player1.showsta() == 17 || player1.showsta() == 7)
			{
				int chance = (rand() % 5) + 1;

				cout << "���� ī�� �ߵ�\n";

				gotoxy(20, 29);
				switch (chance)
				{

				case 1: cout << ("�ζ� ��÷(+100��)\n");
					player1.spendmoney(-100); break;
				case 2: cout << ("�濡�� ���� �ֿ����ϴ�(+50��)");
					player1.spendmoney(-50); break;
				case 3: cout << ("�ӵ� ����(-50��)\n");
					player1.spendmoney(50); break;
				case 4: cout << ("�ҿ� �̿�(-50��)\n");
					player1.spendmoney(50); break;

				case 5: cout << ("���ε��Դϴ�");
					player1.set(6); break;
				case 6: cout << ("���� ��뿡�� 50�� ����");
					player2.spendmoney(-50);
					player1.spendmoney(50); break;


				}
				Sleep(2000);

				//����ī�� �Լ�
			}
			else
				buypay.buy1(player1, player2);//����

		}
		else
		{
			gotoxy(0, 37);
			system("cls");
			dnlcl2.board(dnlcl1, dnlcl2, player1, player2, buypay);
			gotoxy(20, 20);
			cout << "P2���Դϴ�. �ֻ����� �������� 1�� �Է��ϼ��� : ";
			cin >> a;
			player2.move(a, count);
			gotoxy(20, 23);
			cout << " P2��������ġ�� " << buypay.showname(player2) << "�Դϴ� " << endl;
			gotoxy(20, 24);
			if (player2.showsta() == 0) {
				cout << "���������Դϴ�";
				Sleep(2000);
			}//��������


			else if (player2.showsta() == 6)
			{
				cout << "���ε��Դϴ� ���� ���ϴ�.";
				Sleep(2000);
			}//���ε� 


			else if (player2.showsta() == 18)
			{
				cout << "���迩���Դϴ� �̵��ϰ� ���� ��ġ�� �������� (0~20).";
				int x;
				cin >> x;
				player1.set(x);
				Sleep(1000);
			}//���迩�� 


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
						cout << "�̴ϰ��� Ȧ�� ¦�� ���߱�!.";
						gotoxy(20, 27);
						cout << "Ȧ�� �̸� 1 �Է� ¦�� �̸� 2�Է� : ";
						cin >> i;
						si = rand() % 10 + 1;
						cout << "���ڴ�" << si << "�Դϴ�." << endl;
						if (si % 2 == 0)
							si = 2;
						else if (si % 2 == 1)
							si = 1;
						gotoxy(20, 29);
						if (si == i) {
							cout << ("�¸�.") << endl;
							player2.spendmoney(-100);
						}
						else
						{
							cout << ("�й�.") << endl;
							player2.spendmoney(50);
						}
						Sleep(5000);
						break;
					case 2:
					{
						Random = (rand() % 3) + 1;

						cout << "1:����, 2:����, 3:�� /";
						cout << "�Է� : ";
						cin >> input;
						cout << "����� : ";
						switch (input)
						{
						case 1: cout << "����" << endl;
							break;
						case 2: cout << "����" << endl;
							break;
						case 3: cout << "��" << endl;
							break;
						}
						cout << "��ǻ�� : ";
						switch (Random)
						{
						case 1: cout << "����" << endl;
							break;
						case 2: cout << "����" << endl;
							break;
						case 3: cout << "��" << endl;
							break;
						}
						if (Random == input)
						{
							cout << ("�����ϴ�") << endl;
						}
						else
						{
							if (input == 1 && Random == 3 || input == 2 && Random == 1 || input == 3 && Random == 1)
							{
								cout << "�̰��" << endl;
								player2.spendmoney(-50);
							}
							else
							{
								cout << "����" << endl;
								player2.spendmoney(50);
							}
						}
						Sleep(5000);
						break;
					}
					}
				}
			}//�̴ϰ���
			else if (player2.showsta() == 17 || player2.showsta() == 7)
			{
				int chance = 0;

				cout << "���� ī�� �ߵ�\n";

				Sleep(1000);
				chance = (rand() % 5) + 1;
				gotoxy(20, 29);
				if (chance)
				{
					switch (chance)
					{
					case 1: cout << ("�ζ� ��÷(+100��)");
						player2.spendmoney(-100); break;
					case 2: cout << ("�濡�� ���� �ֿ����ϴ�(+50��)");
						player2.spendmoney(-50); break;
					case 3: cout << ("�����ϼ̽��ϴ�! (-50��)");
						player2.spendmoney(50); break;
					case 4: cout << ("�ҿ� �̿� ���� ����(-50��)");
						player2.spendmoney(50); break;

					case 5: cout << ("���ε��� ���ʽÿ�.");
						player2.set(6); break;
					case 6: cout << ("��뿡�� 50�� �����Ͻʽÿ�.");
						player1.spendmoney(-50);
						player2.spendmoney(50); break;


					}
				}
				Sleep(2000);
				//����ī�� �Լ�
			}
			else
				buypay.buy2(player2, player1);//����
		}

	}

}