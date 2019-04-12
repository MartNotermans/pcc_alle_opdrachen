#include <iostream>
using namespace std;
int main(){
	for(int i = 1;i < 101; i++){
		if(i%3==0 && i%5==0){
			cout<<"FIZZBUZZ,";
		}else if(i%5==0){
			cout<<"BUZZ";
		}else if(i%3==0){
			cout<<"FIZZ";
		}else{
		cout << i << ",";
		}
	}
}