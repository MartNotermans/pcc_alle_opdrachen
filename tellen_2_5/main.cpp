#include <iostream>
#include <vector>
using namespace std;

int count(const vector<int> & numbers, const int & x){
	int amount = 0;
	for(unsigned int i = 0; i < numbers.size(); i++){
		if(numbers[i] == x){
			amount++;
		}
	}
	return amount;
}

int main(){
	 vector<int> n = {37,4,9,4,9,37,3,5,0,4,1};
	 int number_of_fours = count(n, 4);
	 cout << "The number of fours are: " << number_of_fours << "\n";
}