#pragma once

class P1
{
	int money = 1000;
	int sta = 0;
public:
	string land[24];
	void set(int sta, int money);
	void set(int tour);//�Լ��ߺ�
	void move(int start, int &count);
	int showsta() { return this->sta; }
	int showgold() { return this->money; }
	void spendmoney(int spend);
	void setland();
	vector <string>location;//�ڱⰡ �� ���� ����뺤��
	void printvector();//����

};
void P1::printvector()
{
	for (unsigned int i = 0; i < location.size(); i++)
		cout << location[i];
}
void P1::setland()
{
	for (int i = 0; i < 20; i++)
		land[i] = "  ";
}
void P1::spendmoney(int spend)
{
	this->money = this->money - spend;
	if (this->money <= 0)
	{
		cout << "�й��Ͽ����ϴ�!";//���� �������̽��� �ѷ�������.
		exit(0);
	}
}
void P1::move(int start, int &count)
{
	while (true)
	{
		if (start == 1)
		{

			int dice;
			dice = rand() % 6 + 1;//���� ���� 1~6
			gotoxy(20, 26);
			cout << "�ֻ����� ���Ƚ��ϴ�. " << endl;
			gotoxy(20, 27);
			cout << "�ֻ��� ���� : " << dice << endl;
			this->sta += dice;//Ŭ������ ���°� �߰�
			if (sta >= 24)
			{
				sta = sta - 24;
				this->money += 100;
			}
			count++;
			break;
		}
		else
		{
			gotoxy(20, 26);
			cout << "�ֻ����� ������ �ʾҽ��ϴ�. 1�� �Է��ϼ��� : ";
			cin >> start;
		}
	}

}

void P1::set(int sta, int money)
{
	this->sta = sta;
	this->money = money;
}
void P1::set(int tour)
{
	this->sta = tour;
}
