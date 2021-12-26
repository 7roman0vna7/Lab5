#include <iostream>
using namespace std;

class ROLF {
public:
	int showcase;     // всего автомобилей на витрине
protected:
	int Audi;
	int Lexus;
	int Furgon;
	int Minibuses;
};

class PassengerAuto: public ROLF {       // только легковые автомобили(1 класс)
private:
	int model;
	float speed;
public:
	PassengerAuto(float speed, int model) {
		this -> speed = speed;
		this -> model = model;
		cout << "Скорость: " << speed << ", модель - " << model << endl;
	}
};

int Passenger_Auto() {
	PassengerAuto Audi(250, 5);
	PassengerAuto Lexus(270, 4);
	return 0;
};

class CargoAuto: public ROLF {        //  только грузовые автомобили(2 класс)
private:
	int model;
	float speed;
public:
	CargoAuto(float speed, int model) {
		this -> speed = speed;
		this -> model = model;
		cout << "Скорость: " << speed << ", модель - " << model << endl;
	}
};

int Cargo_Auto() {
	CargoAuto Furgon(165, 5);
	CargoAuto Minibuses(180, 5);
	return 0;
};

int main() {
	setlocale(0, "");
	int Audi = 0, Lexus = 0, Furgon = 0, Minibuses = 0;
	int showcase = 0;
	cout << "Введите четыре цифры по очереди: " << endl;
	cin >> Audi;
	cin >> Lexus;
	cin >> Furgon;
	cin >> Minibuses;
	showcase = Audi + Lexus + Furgon + Minibuses;
	cout << "Всего имеется транспорта: " << showcase << endl;
	cout << "Из них: " << endl;
	cout << Audi << " Audi;" << endl;
	cout << Lexus << " Lexus;" << endl;
	cout << Furgon << " фургоны;" << endl;
	cout << Minibuses << " микроавтобусы." << endl;
	cout << "Их характеристики (соответственно): " << endl;
	Passenger_Auto();
	Cargo_Auto();
	return 0;
}
