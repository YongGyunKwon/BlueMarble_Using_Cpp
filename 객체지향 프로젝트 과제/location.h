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

	cout << " ��������������������������������������������������������������������������������������������������";
	cout << endl;//1��
	cout << "|" << setw(6) << "����0"; cout << "|";

	cout << setw(6) << show.showland(0, player1);//P1-H�κп� ���� �ֱ�
	cout << "|" << setw(6) << "����1"; cout << "|"; cout << setw(6) << show.showland(1, player1);
	cout << "|" << setw(6) << "ö��2"; cout << "|"; cout << setw(6) << show.showland(2, player1);
	cout << "|" << setw(6) << "����3"; cout << "|"; cout << setw(6) << show.showland(3, player1);
	cout << "|" << setw(6) << "����4"; cout << "|"; cout << setw(6) << show.showland(4, player1);
	cout << "|" << setw(6) << "�ȵ�5"; cout << "|"; cout << setw(6) << show.showland(5, player1);
	cout << "|" << setw(12) << "  ���ε�6  ";
	cout << setw(2) << "|";
	cout << endl;//2��°

	cout << "|" << setw(7) << "|";
	cout << setw(6) << show.showland(0, player2);//P1-H�κп� ���� �ֱ�
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(1, player2);
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(2, player2);
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(3, player2);
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(4, player2);
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(5, player2);
	cout << "|" << setw(12) << "  ����� ";
	cout << setw(2) << "|";

	cout << endl;//3����

	cout << " ��������������������������������������������������������������������������������������������������";
	cout << endl;//4��°��
	cout << "|" << setw(6) << dnlcl1.show(0) << "|" << setw(6) << dnlcl2.show(0);//���۸�
	cout << "|" << setw(6) << dnlcl1.show(1) << "|" << setw(6) << dnlcl2.show(1);//���ָ�
	cout << "|" << setw(6) << dnlcl1.show(2) << "|" << setw(6) << dnlcl2.show(2);//ö����
	cout << "|" << setw(6) << dnlcl1.show(3) << "|" << setw(6) << dnlcl2.show(3);//���ָ�
	cout << "|" << setw(6) << dnlcl1.show(4) << "|" << setw(6) << dnlcl2.show(4);//������
	cout << "|" << setw(6) << dnlcl1.show(5) << "|" << setw(6) << dnlcl2.show(5);//�ȵ���
	cout << "|" << setw(6) << dnlcl1.show(6) << "|" << setw(6) << dnlcl2.show(6) << "|";//���ε���
	cout << endl;//5��°��
	cout << " ��������������������������������������������������������������������������������������������������";
	cout << endl;//6��°��
	cout << "|" << setw(6) << "����23"; cout << "|"; cout << setw(6) << show.showland(23, player1) << "|";
	cout << setw(70);

	cout << "|" << setw(6) << "Chance" << "|" << setw(6) << show.showland(7, player1) << "|";
	cout << endl;//7��°��
	cout << "|" << setw(6) << "����"; cout << "|"; cout << setw(6) << show.showland(23, player2) << "|";
	cout << setw(70);

	cout << "|" << setw(7) << "|" << setw(6) << show.showland(7, player2) << "|";
	cout << endl;//8��°��
	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//9��°��
	cout << "|" << setw(6) << dnlcl1.show(23); cout << "|"; cout << setw(6) << dnlcl2.show(23) << "|";//���︻
	cout << setw(70);
	cout << "|" << setw(6) << dnlcl1.show(7) << "|" << dnlcl2.show(7) << "|";//���ʸ�
	cout << endl;//10��°��
	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//11��°��
	cout << "|" << setw(6) << "����22"; cout << "|"; cout << setw(6) << show.showland(22, player1) << "|";
	cout << setw(70);

	cout << "|" << setw(6) << "����8" << "|" << setw(6) << show.showland(8, player1) << "|";
	cout << endl;//12��°��
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(22, player2) << "|";
	cout << setw(70);

	cout << "|" << setw(7) << "|" << setw(6) << show.showland(8, player2) << "|";
	cout << endl;//13��°��
	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//14��°��
	cout << "|" << setw(6) << dnlcl1.show(22); cout << "|"; cout << setw(6) << dnlcl2.show(23) << "|";//���ָ�
	cout << setw(70);
	cout << "|" << setw(6) << dnlcl1.show(8) << "|" << setw(6) << dnlcl2.show(8) << "|";//���ָ�
	cout << endl;//12��°��
	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//13��°��

	cout << "|" << setw(6) << "�λ�21"; cout << "|"; cout << setw(6) << show.showland(21, player1) << "|";

	cout << setw(70) << "|" << setw(6) << "����9" << "|" << setw(6) << show.showland(9, player1) << "|";
	cout << endl;//14��°��

	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(21, player2) << "|";
	cout << setw(70) << "|" << setw(7) << "|" << setw(6) << show.showland(9, player2) << "|";
	cout << endl;//15��°��

	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//16��°��
	cout << "|" << setw(6) << dnlcl1.show(21); cout << "|"; cout << setw(6) << dnlcl2.show(21) << "|";//�λ긻

	cout << setw(70) << "|" << setw(6) << dnlcl1.show(9) << "|" << setw(6) << dnlcl2.show(9) << "|";//���ָ�
	cout << endl;//17��°��
	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//18��°��
	cout << "|" << setw(6) << "����20"; cout << "|"; cout << setw(6) << show.showland(20, player1) << "|";
	cout << setw(70);
	cout << "|" << setw(6) << "��õ10" << "|" << setw(6) << show.showland(10, player1) << "|";
	cout << endl;//19��°��


	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(20, player2) << "|";
	cout << setw(70);
	cout << "|" << setw(7) << "|" << setw(6) << show.showland(10, player2) << "|";
	cout << endl;//20��°��
	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//21��°��
	cout << "|" << setw(6) << dnlcl1.show(20); cout << "|"; cout << setw(6) << dnlcl2.show(20) << "|";//������
	cout << setw(70);
	cout << "|" << setw(6) << dnlcl1.show(10) << "|" << setw(6) << dnlcl2.show(10) << "|";
	cout << endl;//20��°��
	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//21��°��

	cout << "|" << setw(6) << "���19"; cout << "|"; cout << setw(6) << show.showland(19, player1) << "|";
	cout << setw(70);
	cout << "|" << setw(6) << "����11" << "|" << setw(6) << show.showland(11, player1) << "|";
	cout << endl;//22��°��

	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(19, player2) << "|";
	cout << setw(70);
	cout << "|" << setw(7) << "|" << setw(6) << show.showland(11, player2) << "|";
	cout << endl;//23��°��

	cout << " ��������������";
	cout << setw(84);
	cout << " ��������������";
	cout << endl;//24��°��
	cout << "|" << setw(6) << dnlcl1.show(19); cout << "|"; cout << setw(6) << dnlcl2.show(19) << "|";//��긻
	cout << setw(70);
	cout << "|" << setw(6) << dnlcl1.show(11) << "|" << setw(6) << dnlcl2.show(11) << "|";//������ 
	cout << endl;//25��°��




	cout << " ��������������������������������������������������������������������������������������������������";
	cout << endl;//26��°��
	cout << "|" << setw(13) << "��������18";
	cout << "|" << setw(6) << "Chance"; cout << "|"; cout << setw(6) << show.showland(17, player1);
	cout << "|" << setw(6) << "�뱸16"; cout << "|"; cout << setw(6) << show.showland(16, player1);
	cout << "|" << setw(6) << "��â15"; cout << "|"; cout << setw(6) << show.showland(15, player1);
	cout << "|" << setw(6) << "����14"; cout << "|"; cout << setw(6) << show.showland(14, player1);
	cout << "|" << setw(6) << "����13"; cout << "|"; cout << setw(6) << show.showland(13, player1);
	cout << "|" << setw(12) << "�̴ϰ���12";
	cout << setw(2) << "|";
	cout << endl;//26��°

	cout << "|" << setw(13) << "��õ����";
	cout << "|" << setw(7) << "|"; cout << setw(6) << show.showland(17, player2);
	cout << "|" << setw(7); cout << "|"; cout << setw(6) << show.showland(16, player2);
	cout << "|" << setw(7); cout << "|"; cout << setw(6) << show.showland(15, player2);
	cout << "|" << setw(7); cout << "|"; cout << setw(6) << show.showland(14, player2);
	cout << "|" << setw(7); cout << "|"; cout << setw(6) << show.showland(13, player2);
	cout << "|" << setw(12) << "��մ³���~";
	cout << setw(2) << "|";
	cout << endl;//26��°

	cout << " ��������������������������������������������������������������������������������������������������";
	cout << endl;//27��°��
	cout << "|" << setw(6) << dnlcl1.show(18) << "|" << setw(6) << dnlcl2.show(18);//�������฻
	cout << "|" << setw(6) << dnlcl1.show(17) << "|" << setw(6) << dnlcl2.show(17);//������
	cout << "|" << setw(6) << dnlcl1.show(16) << "|" << setw(6) << dnlcl2.show(16);//�뱸��
	cout << "|" << setw(6) << dnlcl1.show(15) << "|" << setw(6) << dnlcl2.show(15);//��â��
	cout << "|" << setw(6) << dnlcl1.show(14) << "|" << setw(6) << dnlcl2.show(14);//������
	cout << "|" << setw(6) << dnlcl1.show(13) << "|" << setw(6) << dnlcl2.show(13);//������
	cout << "|" << setw(6) << dnlcl1.show(12) << "|" << setw(6) << dnlcl2.show(12) << "|";//�̴ϰ��Ӹ�
	cout << endl;//28��°��

	cout << " ��������������������������������������������������������������������������������������������������";
	cout << endl;//29��°��
	cout << endl;//30��°��

	gotoxy(17, 8);
	cout << "P1�ܾ�:" << player1.showgold();
	gotoxy(17, 10);
	cout << "P1����:"; player1.printvector();

	gotoxy(17, 14);
	cout << "P2�ܾ�:" << player2.showgold();
	gotoxy(17, 16);
	cout << "P2����:"; player2.printvector();

}
