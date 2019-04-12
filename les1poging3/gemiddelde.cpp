#include <iostream>
using namespace std;
int gemiddelde() {
	cout << "geef een getal\n";
	int a = 0;
	cin >> a;
	int b = 6;
	float gemiddelde = (a+b) / 2.0;
	cout << gemiddelde << " is het gemiddelde\n";
}