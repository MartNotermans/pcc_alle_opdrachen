#include <iostream>
#include <string>
using namespace std;

string reverse(string word){
	for (int i = 0; i<word.size()-1; i++) {
		word.insert(i, string(1,word[word.size()-1]));
		word.erase(word.size()-1);
	}
	cout<<"reversed word: "<<word<<endl;
	return word;
}

bool isPalindroom(string & word){
	string orginalWord = word;
	cout<<"orginalWord: "<<orginalWord<<endl;
	cout<<"word: "<<word<<endl;
	string reversed_word = reverse(word);
	cout<<"orginalWord: "<<orginalWord<<endl;
	cout<<"reversed_word: "<<reversed_word<<endl;
	for(unsigned int i=0; i<reversed_word.size(); i++){
		if(reversed_word[i] != orginalWord[i]){
			return false;
		}
	}
	return true;
}

int main(){
	string word = "";
	cout<<"typ een woord: ";
	cin>>word;
	bool test = isPalindroom(word);
	cout<<test<<endl;
}