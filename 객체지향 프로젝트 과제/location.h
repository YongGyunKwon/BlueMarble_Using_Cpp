#pragma once


class location
{
	int a;
public:
	friend class P1;
	location() { this->a = 0; };
	location(P1 b) { this->a = b.showsta(); };
	string show(int x);
	void board(location dnlcl1, location dnlcl2, P1 player1, P1 player2, land show);
};
string location::show(int x)
{
	if (this->a == x)
		return "player";
	else
		return "      ";
}
void location::board(location dnlcl1, location dnlcl2, P1 player1, P1 player2, land show) {
	gotoxy(0, 0);
	cout << endl;

	cout << " ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣";
	cout << endl;//1줄
	cout << "|" << setw(6) << "시작0"; cout << "|";

	cout << setw(6) << show.showland(0, player1);//P1-H부분에 상태 넣기
	cout << "|" << setw(6) << "파주1"; cout << "|"; cout << setw(6) << show.showland(1, player1);
	cout << "|" << setw(6) << "철원2"; cout << "|"; cout << setw(6) << show.showland(2, player1);
	cout << "|" << setw(6) << "전주3"; cout << "|"; cout << setw(6) << show.showland(3, player1);
	cout << "|" << setw(6) << "대전4"; cout << "|"; cout << setw(6) << show.showland(4, player1);
	cout << "|" << setw(6) << "안동5"; cout << "|"; cout << setw(6) << show.showland(5, player1);
	cout << "|" << setw(12) << "  무인도6  ";
	cout << setw(2) << "|";
	cout << endl;//2번째

	cout << "|" << setw(7) << "|";
	cout << setw(6) << show.showland(0, player2);//P1-H부분에 상태 넣기
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(1, player2);
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(2, player2);
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(3, player2);
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(4, player2);
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(5, player2);
	cout << "|" << setw(12) << "  쉬어가기 ";
	cout << setw(2) << "|";

	cout << endl;//3번쨰

	cout << " ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣";
	cout << endl;//4번째줄
	cout << "|" << setw(6) << dnlcl1.show(0) << "|" << setw(6) << dnlcl2.show(0);//시작말
	cout << "|" << setw(6) << dnlcl1.show(1) << "|" << setw(6) << dnlcl2.show(1);//파주말
	cout << "|" << setw(6) << dnlcl1.show(2) << "|" << setw(6) << dnlcl2.show(2);//철원말
	cout << "|" << setw(6) << dnlcl1.show(3) << "|" << setw(6) << dnlcl2.show(3);//전주말
	cout << "|" << setw(6) << dnlcl1.show(4) << "|" << setw(6) << dnlcl2.show(4);//대전말
	cout << "|" << setw(6) << dnlcl1.show(5) << "|" << setw(6) << dnlcl2.show(5);//안동말
	cout << "|" << setw(6) << dnlcl1.show(6) << "|" << setw(6) << dnlcl2.show(6) << "|";//무인도말
	cout << endl;//5번째줄
	cout << " ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣";
	cout << endl;//6번째줄
	cout << "|" << setw(6) << "서울23"; cout << "|"; cout << setw(6) << show.showland(23, player1) << "|";
	cout << setw(70);

	cout << "|" << setw(6) << "Chance" << "|" << setw(6) << show.showland(7, player1) << "|";
	cout << endl;//7번째줄
	cout << "|" << setw(6) << "수도"; cout << "|"; cout << setw(6) << show.showland(23, player2) << "|";
	cout << setw(70);

	cout << "|" << setw(7) << "|" << setw(6) << show.showland(7, player2) << "|";
	cout << endl;//8번째줄
	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//9번째줄
	cout << "|" << setw(6) << dnlcl1.show(23); cout << "|"; cout << setw(6) << dnlcl2.show(23) << "|";//서울말
	cout << setw(70);
	cout << "|" << setw(6) << dnlcl1.show(7) << "|" << dnlcl2.show(7) << "|";//속초말
	cout << endl;//10번째줄
	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//11번째줄
	cout << "|" << setw(6) << "제주22"; cout << "|"; cout << setw(6) << show.showland(22, player1) << "|";
	cout << setw(70);

	cout << "|" << setw(6) << "광주8" << "|" << setw(6) << show.showland(8, player1) << "|";
	cout << endl;//12번째줄
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(22, player2) << "|";
	cout << setw(70);

	cout << "|" << setw(7) << "|" << setw(6) << show.showland(8, player2) << "|";
	cout << endl;//13번째줄
	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//14번째줄
	cout << "|" << setw(6) << dnlcl1.show(22); cout << "|"; cout << setw(6) << dnlcl2.show(23) << "|";//제주말
	cout << setw(70);
	cout << "|" << setw(6) << dnlcl1.show(8) << "|" << setw(6) << dnlcl2.show(8) << "|";//광주말
	cout << endl;//12번째줄
	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//13번째줄

	cout << "|" << setw(6) << "부산21"; cout << "|"; cout << setw(6) << show.showland(21, player1) << "|";

	cout << setw(70) << "|" << setw(6) << "경주9" << "|" << setw(6) << show.showland(9, player1) << "|";
	cout << endl;//14번째줄

	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(21, player2) << "|";
	cout << setw(70) << "|" << setw(7) << "|" << setw(6) << show.showland(9, player2) << "|";
	cout << endl;//15번째줄

	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//16번째줄
	cout << "|" << setw(6) << dnlcl1.show(21); cout << "|"; cout << setw(6) << dnlcl2.show(21) << "|";//부산말

	cout << setw(70) << "|" << setw(6) << dnlcl1.show(9) << "|" << setw(6) << dnlcl2.show(9) << "|";//경주말
	cout << endl;//17번째줄
	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//18번째줄
	cout << "|" << setw(6) << "수원20"; cout << "|"; cout << setw(6) << show.showland(20, player1) << "|";
	cout << setw(70);
	cout << "|" << setw(6) << "인천10" << "|" << setw(6) << show.showland(10, player1) << "|";
	cout << endl;//19번째줄


	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(20, player2) << "|";
	cout << setw(70);
	cout << "|" << setw(7) << "|" << setw(6) << show.showland(10, player2) << "|";
	cout << endl;//20번째줄
	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//21번째줄
	cout << "|" << setw(6) << dnlcl1.show(20); cout << "|"; cout << setw(6) << dnlcl2.show(20) << "|";//수원말
	cout << setw(70);
	cout << "|" << setw(6) << dnlcl1.show(10) << "|" << setw(6) << dnlcl2.show(10) << "|";
	cout << endl;//20번째줄
	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//21번째줄

	cout << "|" << setw(6) << "울산19"; cout << "|"; cout << setw(6) << show.showland(19, player1) << "|";
	cout << setw(70);
	cout << "|" << setw(6) << "독도11" << "|" << setw(6) << show.showland(11, player1) << "|";
	cout << endl;//22번째줄

	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(19, player2) << "|";
	cout << setw(70);
	cout << "|" << setw(7) << "|" << setw(6) << show.showland(11, player2) << "|";
	cout << endl;//23번째줄

	cout << " ￣￣￣￣￣￣￣";
	cout << setw(84);
	cout << " ￣￣￣￣￣￣￣";
	cout << endl;//24번째줄
	cout << "|" << setw(6) << dnlcl1.show(19); cout << "|"; cout << setw(6) << dnlcl2.show(19) << "|";//울산말
	cout << setw(70);
	cout << "|" << setw(6) << dnlcl1.show(11) << "|" << setw(6) << dnlcl2.show(11) << "|";//독도말 
	cout << endl;//25번째줄




	cout << " ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣";
	cout << endl;//26번째줄
	cout << "|" << setw(13) << "자유여행18";
	cout << "|" << setw(6) << "Chance"; cout << "|"; cout << setw(6) << show.showland(17, player1);
	cout << "|" << setw(6) << "대구16"; cout << "|"; cout << setw(6) << show.showland(16, player1);
	cout << "|" << setw(6) << "평창15"; cout << "|"; cout << setw(6) << show.showland(15, player1);
	cout << "|" << setw(6) << "거제14"; cout << "|"; cout << setw(6) << show.showland(14, player1);
	cout << "|" << setw(6) << "여수13"; cout << "|"; cout << setw(6) << show.showland(13, player1);
	cout << "|" << setw(12) << "미니게임12";
	cout << setw(2) << "|";
	cout << endl;//26번째

	cout << "|" << setw(13) << "인천공항";
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(17, player2);
	cout << "|" << setw(7); cout << "|"; cout << setw(6) << show.showland(16, player2);
	cout << "|" << setw(7); cout << "|"; cout << setw(6) << show.showland(15, player2);
	cout << "|" << setw(7); cout << "|"; cout << setw(6) << show.showland(14, player2);
	cout << "|" << setw(7); cout << "|"; cout << setw(6) << show.showland(13, player2);
	cout << "|" << setw(12) << "재밌는놀이~";
	cout << setw(2) << "|";
	cout << endl;//26번째

	cout << " ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣";
	cout << endl;//27번째줄
	cout << "|" << setw(6) << dnlcl1.show(18) << "|" << setw(6) << dnlcl2.show(18);//자유여행말
	cout << "|" << setw(6) << dnlcl1.show(17) << "|" << setw(6) << dnlcl2.show(17);//세종말
	cout << "|" << setw(6) << dnlcl1.show(16) << "|" << setw(6) << dnlcl2.show(16);//대구말
	cout << "|" << setw(6) << dnlcl1.show(15) << "|" << setw(6) << dnlcl2.show(15);//평창말
	cout << "|" << setw(6) << dnlcl1.show(14) << "|" << setw(6) << dnlcl2.show(14);//거제말
	cout << "|" << setw(6) << dnlcl1.show(13) << "|" << setw(6) << dnlcl2.show(13);//여수말
	cout << "|" << setw(6) << dnlcl1.show(12) << "|" << setw(6) << dnlcl2.show(12) << "|";//미니게임말
	cout << endl;//28번째줄

	cout << " ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣";
	cout << endl;//29번째줄
	cout << endl;//30번째줄

	gotoxy(17, 8);
	cout << "P1잔액:" << player1.showgold();
	gotoxy(17, 10);
	cout << "P1도시:"; player1.printvector();

	gotoxy(17, 14);
	cout << "P2잔액:" << player2.showgold();
	gotoxy(17, 16);
	cout << "P2도시:"; player2.printvector();

}
