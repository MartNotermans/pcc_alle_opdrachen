#include <string>
#include <iostream>
using namespace std;

string vervang(const string & line, char ch_1, char ch_2){
	string new_line = "";
	for(unsigned int i = 0; i < line.size(); i++){
		if(line[i] == ch_1){
			new_line.push_back(ch_2);
		}
		else if(line[i] == ch_2){
			new_line.push_back(ch_1);
		}
		else{
			new_line.push_back(line[i]);
		}
	}
	return new_line;
}

int main(){
	string line = "dit is een string";
	char ch_1 = 'e';
	char ch_2 = 'i';
	cout<<vervang(line, ch_1, ch_2)<<endl;
}