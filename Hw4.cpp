#include <iostream>
#include "Hw4_Head.h"
using namespace std;

int main() {
	string answer = "y";
	int type, pages;

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	Inkjetprinter inkp("Officejet V40", "HP", 5, 10);
	cout << "��ũ�� : ";
	inkp.showinkprinter(0);
	laserprinter laserp("SCX-6x45", "�Ｚ����", 3, 20);
	cout << "������ : ";
	laserp.showlaserprinter(0);

	do {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> type >> pages;
		switch (type) {
		case 1:
			inkp.printInkJet(pages);
			break;
		case 2:
			laserp.printlaser(pages);
			break;
		default:
			break;
		}
		inkp.showinkprinter(pages);
		laserp.showlaserprinter(pages);
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> answer;
	} while (answer == "y");
}