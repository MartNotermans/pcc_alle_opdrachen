#include <iostream>
#include <stdint.h>
#include <bitset>
using namespace std;

int count(const uint8_t & numbers, const int & x){
	int amount = 0;
	for(unsigned int i = 0; i < 7; i++){
		int getal = 2;
		char nul = '0';
		if(numbers[i]== nul){
			getal = 0;
		}else{
			int getal = 1;
		}
		if(getal == x){
			amount++;
		}
	}
	return amount;
}

int main(){
	 uint8_t n = 0x6b; //00110101
	 int number_of_zeros = count(n, 0);
	 cout << "The number of zero's are: " << number_of_zeros <<endl;
}