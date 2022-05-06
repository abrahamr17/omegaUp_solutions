#include <iostream>
using namespace std;

int main(){
	int L;
	
	cin>>L;
	
	if(L>=0&&L<=3){
		cout<<"BEBE";
	}
	if(L>=4&&L<=14){
		cout<<"NINO";
	}
	if(L>=15&&L<=18){
		cout<<"JOVEN";
	}
	if(L>=19&&L<=65){
		cout<<"ADULTO";
	}
	if(L>=65){
		cout<<"ADULTO 3RA";
	}
}
