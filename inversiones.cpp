#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x;
	float a,b,c,d,temp1,temp2,temp3,temp4,si;
	
	cin>>x>>a>>b>>c>>d;
	
	temp1=x/3;
	si=temp1;
	temp2=temp1*a*12;
	temp3=temp1*b*12;
	temp4=temp1*c*12;
	temp1=(temp2+temp3+temp4)*(d);
	temp1=si*3+temp2+temp3+temp4-temp1;
	
	cout<<fixed<<setprecision(3)<<temp1;
	
	
}
