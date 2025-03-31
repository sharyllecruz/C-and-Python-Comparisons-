#include <iostream> 
#include <string> 
using namespace std;
int main(){
	string a;
	
	cout<<"What do you want to know?";
	cin>>a;
	
	if (a == "ABACUS"){
		cout<<"Known as the first computer";
	}else if (a == "NAPIERS BONES"){
		cout<<"Manually operated calculating device";
	}else if (a == "PASCALINE"){
		cout<<"An arithmetic machine";
	}else if (a == "STEPPED RECKONER"){
		cout<<"Digital mechanical calculator";	}else{
		cout<<"No word  is found";
	}
	
	return 0;
}