#include <bits/stdc++.h>
using namespace std;

int n, caja,sumPa,respuesta;
int main(){
    std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i=0;i<n;i++){
      cin>>caja;
      sumPa+=caja;
      if(sumPa<=0){
          sumPa=0;    
      }
      respuesta=max(respuesta,sumPa);
}
cout<<respuesta;
}
