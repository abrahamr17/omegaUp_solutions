#include <bits/stdc++.h>
using namespace std;

int main(){
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);
int R,C,P,suma=0;
cin>>R>>C;
int arboles[R+5][C+5]={0};

for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        cin>>arboles[i][j];
    }
}
cin>>P;
int ri,rt,ci,ct;
for(int i=0;i<P;i++){
    suma=0;
        cin>>ri>>rt>>ci>>ct;
    for(int i=ri-1;i<=rt-1;i++){
    for(int j=ci-1;j<=ct-1;j++){
        suma+=arboles[i][j];
    }
}
cout<<suma<<"\n";
}


}
