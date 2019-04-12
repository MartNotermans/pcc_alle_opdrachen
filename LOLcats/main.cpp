#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct LOLcats{
	string name;
	int views;
	int age;
};

int main(){
	LOLcats cat1 = {"cool cat",235,370};
	
	LOLcats cat2 = {};
	cat2.name = "derp cat";
	cat2.views = 32400;
	cat2.age = 78;
	
	//cout<<"de LOLcat "<<cat1.name<<" is "<<cat1.views<<" keer bekeken en is "<<cat1.age<<" weken oud"<<endl;
	
	vector<LOLcats> cats = {{"cool cat",235,370},{"derp cat",36399,34},{"garfield",646464646,98}};
	for(unsigned int i = 0; i < cats.size();i++){
		if(cats[i].views > 10000){
			cout<<cats[i].name<<"	"<<cats[i].views<<"	"<<cats[i].age<<endl;
		}
	}
}