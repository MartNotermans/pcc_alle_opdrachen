#include <iostream>
#include <bitset>
#include <stdint.h>
using namespace std;

int bitcount(uint8_t b){
	int count = 0;
	for(int i = 0; i < 8; i++){
		if((b & 1)==0){
			count++;
		}
		b = b>>1;
	}
	return count;
}

int main(){
	char number = 13;
	cout<<bitcount(number)<<endl;
}