#include <iostream>
using namespace std;

int main(){
	int x;
	int y;
	int z;
	
	cin>>x>>y>>z;
	
	if(x==y&&x==z){
		cout<<"equilatero"<<endl;
	}
	else{
		if((x==y&&x!=z)||(x==z&&x!=y)||(y==z&&z!=x)){
			cout<<"isosceles"<<endl;
		}
		else{
			cout<<"escaleno"<<endl;
		}
	}
}
