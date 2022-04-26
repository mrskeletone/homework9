#include <iostream>
using namespace std;
class Property
{
public:
	Property(double a) { worth = a; }
	virtual double tax() { return 0; }
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
	//double tax_a1=1000, tax_a2=2000, tax_a3=3000, tax_c1=200, tax_c2=400, tax_co1=500, tax_co2=1000;
	Apartment tax_a1 ( 1000), tax_a2 ( 2000), tax_a3(3000);
	Car tax_c1 ( 200), tax_c2 ( 400);
	CountryHouse tax_co1 ( 500), tax_co2 ( 1000);
	taxn[0] = &tax_a1;
	taxn[1] = &tax_a2;
	taxn[2] = &tax_a3;
	taxn[3] = &tax_c1;
	taxn[4] = &tax_c2;
	taxn[5] = &tax_co1;
	taxn[6] = &tax_co2;
	for (int i = 0; i < 7; i++) {
		cout << taxn[i]->tax() << endl;
	}
}

