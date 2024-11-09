#ifndef HW4_HEAD_H
#define HW4_HEAD_H
using namespace std;

class printer {
	string model, manufacturer;
	int printedCount, availableCount;
protected:
	printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->availableCount = availableCount;
	}
	bool isprint(int pages) {
		if (availableCount >= pages)
			return true;
		else
			return false;
	}
	void print(int pages) {
		if (isprint(pages)) {
			printedCount += pages;
			availableCount -= pages;
			cout << "����Ʈ �Ͽ����ϴ�." << endl;
		}
		else {
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
	void remain(int pages) {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "��";
	}
};

class Inkjetprinter : public printer {
	int availableink;
public:
	Inkjetprinter(string model, string manufacturer, int availableCount, int availableink) :printer(model, manufacturer, availableCount) {
		this->availableink = availableink;
	}
	bool isprinterInkjet(int pages) {
		if (availableink > pages)
			return true;
		else
			return false;
	}
	void printInkJet(int pages) {
		if (isprint(pages)) {
			if (isprinterInkjet(pages)) {
				print(pages);
				availableink -= pages;
			}
		}
		else cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �� �����ϴ�." << endl;
	}
	void showinkprinter(int pages) {
		remain(pages);
		cout << " ,���� ��ũ " << availableink << endl;
	}
};

class laserprinter : public printer {
	int availabletoner;
public:
	laserprinter(string model, string manufacturer, int availableCount, int availabletoner) :printer(model, manufacturer, availableCount) {
		this->availabletoner = availabletoner;
	}
	bool isprinterlaser(int pages) {
		if (availabletoner > pages)
			return true;
		else
			return false;
	}
	void printlaser(int pages) {
		if (isprint(pages)) {
			if (isprinterlaser(pages)) {
				print(pages);
				availabletoner -= pages;
			}
		}
		else cout << "������ �����Ͽ� ����Ʈ�� �� �� �����ϴ�." << endl;
	}
	void showlaserprinter(int pages) {
		remain(pages);
		cout << " ,���� ��� " << availabletoner << endl;
	}
};

#endif