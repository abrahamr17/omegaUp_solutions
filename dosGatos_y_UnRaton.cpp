#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x,y,z;
	
	cin>>x>>y>>z;
	
	if(x!=y&&x>y){
		cout<<"gato A";
	}
	if(y!=x&&y>x&&z>x&&z>y){
		cout<<"gato B";
	}
	if((x==y)||abs(x-z)==abs(y-z)){
		cout<<"raton C";
	}
	
}
