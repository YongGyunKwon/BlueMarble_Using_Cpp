#pragma once
class land : public P1
{
	string landname[24] = { "����","���� ","ö�� ","���� ","���� ","�ȵ� ","���ε� ","Chance","���� ","���� ","��õ ","���� ","�̴ϰ��� ","���� ","���� ","��â ","�뱸 ","Chance ","�������� ","��� ","���� ","�λ� ","���� ","���� " };
public:
	friend class P1;
	void buy1(P1 &player1, P1 &player2);
	void buy2(P1 &player1, P1 &player2);
	string showland(int sta, P1 player);
	string showname(P1 player1) { return this->landname[player1.showsta()]; }
};
