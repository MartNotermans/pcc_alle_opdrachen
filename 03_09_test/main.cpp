#include <iostream>
#include <bitset>
#include <stdlib.h>
#include <time.h>
using namespace std;

void improveLoveMessage(char & message){
	srand(time(NULL));
	for(int i = 0; i < 3; i++){
		int random = rand() % 8;
		message = message ^ (1 << random);
	}
}

int main(){
	char letter = 'a';
improveLoveMessage(letter);
cout<<letter<<endl;
}