#include <iostream>
using namespace std;
int main(){
	int num = 0;
		while(num < 100);{
			num++;
			cout << num;
			if (num % 3 == 0);{
				cout << "FIZZ";}
			if (num % 5 == 0);{
				cout << "BUZZ";}
			if (num % 3 != 0 and num % 5!= 0 );{
				cout << num;}
		}
}