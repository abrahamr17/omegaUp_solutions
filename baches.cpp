#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5+5;
int n,k;
bool baches[maxN];

bool TablonesCubren(int tamano){
    int actablones = k;
    for(int i = 0;i < n; i++){
        if(actablones == 0){
            return false;
        }
        if(baches[i] == true){
            actablones--;
            i+=tamano-1;
        }
    }
    return true;
}

int main(){
    cin>>n>>k;

    for(int i = 0; i < n; i++)
    {
        cin>>baches[i];
    }

    int izq = 0, der = n, mid;
    while(der - izq > 1)
    {
        mid=(izq+der)/2;
        bool cubre = TablonesCubren(mid);
        if(cubre == true){
            der = mid;
        }
        else{
            izq = mid;
        }
    }
    cout<<der;
}