#pragma once
class land : public P1
{
	string landname[24] = { "시작","파주 ","철원 ","전주 ","대전 ","안동 ","무인도 ","Chance","광주 ","경주 ","인천 ","독도 ","미니게임 ","여수 ","거제 ","평창 ","대구 ","Chance ","자유여행 ","울산 ","수원 ","부산 ","제주 ","서울 " };
public:
	friend class P1;
	void buy1(P1 &player1, P1 &player2);
	void buy2(P1 &player1, P1 &player2);
	string showland(int sta, P1 player);
	string showname(P1 player1) { return this->landname[player1.showsta()]; }
};
