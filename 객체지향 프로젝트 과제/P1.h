#pragma once

class P1
{
	int money = 1000;
	int sta = 0;
public:
	string land[24];
	void set(int sta, int money);
	void set(int tour);//함수중복
	void move(int start, int &count);
	int showsta() { return this->sta; }
	int showgold() { return this->money; }
	void spendmoney(int spend);
	void setland();
	vector <string>location;//자기가 산 땅을 보기용벡터
	void printvector();//벡터

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
		cout << "패배하였습니다!";//종료 인터페이스가 뚜렷해지게.
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
			dice = rand() % 6 + 1;//랜덤 변수 1~6
			gotoxy(20, 26);
			cout << "주사위를 굴렸습니다. " << endl;
			gotoxy(20, 27);
			cout << "주사위 숫자 : " << dice << endl;
			this->sta += dice;//클래스의 상태값 추가
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
			cout << "주사위를 굴리지 않았습니다. 1을 입력하세요 : ";
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
