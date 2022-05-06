#include <iostream>
using namespace std;

int main(){
	int A;
	int B;
	int C;
	int D;
	int num1;
	int num2;
	int num3;
	int num4;
	int tmp;
	cin>>A>>B>>C>>D;
	
	if(A>B){
		tmp=A;
		A=B;
		B=tmp;
	}
	if(B>C){
		tmp=B, B=C, C=tmp;
	}
	if(C>D){
		tmp=C,C=D,D=tmp;
	}
	if(A>B){
		tmp=A,A=B,B=tmp;
	}
	if(B>C){
		tmp=B,B=C,C=tmp;
	}
	if(A>B){
		tmp=A,A=B,B=tmp;
	}
	cout<<A<<" "<<B<<" "<<C<<" "<<D<<endl;
}
