#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N;
	int P;
	
	cin>>N>>P;
	
	switch(N){
		case 1:
			if((P==1)||(P-1)%3==0){
				cout<<"3 2"<<endl;
				break;
			}
			if(P&3==0){
				cout<<"1 1"<<endl;
				break;
			}
			if(P==2||(P+1)%3==0){
				cout<<"2 3"<<endl;
				break;
			}
			if(P==0){
				cout<<"1 1"<<endl;
				break;
			}
		case 2:
			if((P==1)||(P-1)%3==0){
				cout<<"1 3"<<endl;
				break;
			}
			if(P==2||(P+1)%3==0){
				cout<<"3 1"<<endl;
				break;}
			if(P%3==0){
				cout<<"2 2"<<endl;
				break;
			}
			if(P==0){
				cout<<"1 1"<<endl;
				break;
			}
			
		case 3:
			if((P==1)||(P-1)%3==0){
				cout<<"2 1"<<endl;
				break;
			}
			if(P==2||(P+1)%3==0){
				cout<<"1 2"<<endl;
				break;}
			if(P%3==0){
				cout<<"3 3"<<endl;
				break;
		}
		if(P==0){
			cout<<"3 3"<<endl;
		}
		default:
			break;
	}
	
}
