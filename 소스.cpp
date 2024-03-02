#include <iostream>
using namespace std;

class MyMetric {
private:
	double mile;
	double kilo;
public:
	void setMile(double m) {
		mile = m;
	}
	void setKilo(double k) {
		kilo = k;
	}
	void kiloToMile() {
		mile = kilo / 1.6;
	}
	void mileToKilo() {
		kilo = mile * 1.6;
	}
	void display() {
		cout << "Mile: " << mile << "   Kilo: " << kilo<<endl;
	}
};
int main() {
	MyMetric m;
	m.setMile(10);
	m.mileToKilo();
	m.display();
	m.setKilo(100);
	m.kiloToMile();
	m.display();
}