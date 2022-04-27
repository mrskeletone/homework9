#include <iostream>
using namespace std;
class Property
{
public:
	Property(double a) { worth = a; }
	virtual double tax() { return 0; }
	virtual ~Property() {}
protected:
	double worth;
};
class Apartment : public Property{
public:
	double tax() { return worth / 1000; }
	Apartment(double a) : Property(a){ };
private:
};
class Car :public Property {
public:
	double tax() { return worth / 200; }
	Car(double a) : Property(a) { };
private:
};
class CountryHouse :public Property {
public:
	double tax() { return worth / 500; }
	CountryHouse(double a) : Property(a) { };
private:
};


int main()
{
	Property* taxn[7];
	
	taxn[0] = new Apartment(1000);
	taxn[1] = new Apartment(2000);
	taxn[2] = new Apartment(3000);
	taxn[3] = new Car(200);
	taxn[4] = new Car(400);
	taxn[5] = new CountryHouse(500);
	taxn[6] = new CountryHouse(1000);
	for (int i = 0; i < 7; i++) {
		cout << taxn[i]->tax() << endl;
	}
	for (int i = 0; i < 7; i++) {
		delete taxn[i];
	}
}



