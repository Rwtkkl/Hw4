#include <iostream>
#include "Hw4_Head.h"
using namespace std;

int main() {
	string answer = "y";
	int type, pages;

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	Inkjetprinter inkp("Officejet V40", "HP", 5, 10);
	cout << "잉크젯 : ";
	inkp.showinkprinter(0);
	laserprinter laserp("SCX-6x45", "삼성전자", 3, 20);
	cout << "레이저 : ";
	laserp.showlaserprinter(0);

	do {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
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
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> answer;
	} while (answer == "y");
}