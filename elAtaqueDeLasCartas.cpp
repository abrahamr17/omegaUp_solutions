#include <bits/stdc++.h>
using namespace std;

int mont[100005], ult_nodo=0;

void insertar(int x){
//insertar x
mont[ult_nodo+1]=x;
int nodo_act=ult_nodo+1;
while(nodo_act>1&&mont[nodo_act]>mont[nodo_act/2]){
    swap(mont[nodo_act],mont[nodo_act/2]);
    nodo_act=nodo_act/2;
}
ult_nodo++;
}

void eliminar(){
      // Eliminar el mayor (raiz)
    // 1. Poner en la raiz el valor del ultimo nodo
    int aux=mont[1]/2;
    insertar(aux);
    mont[1] = mont[ult_nodo];
    
    // 2. Eliminar el ultimo nodo
    ult_nodo--; 
    // 3. Bajo la raiz lo mas que pueda 
    int act_nodo = 1; 
    while(true) {
        // Pregunto si estoy en una hoja 
        if(act_nodo * 2 > ult_nodo) break; 
        // Pregunto si no tengo hijo derecho
        if(act_nodo * 2 + 1 > ult_nodo) {
            // Si puedo bajar al izquierdo, bajo
            if(mont[act_nodo] < mont[act_nodo * 2])
                swap(mont[act_nodo], mont[act_nodo * 2]); 
            else return; 
        }
        // Si si tengo ambos hijos, bajo al de mayor valor
        else {
            // Sacar hijo mayor
            int hijo_may; 
            if(mont[act_nodo * 2] >= mont[act_nodo * 2 + 1]) hijo_may = act_nodo * 2; 
            else hijo_may = act_nodo * 2 + 1; 
            // Veo si si puedo bajar 
            if(mont[act_nodo] < mont[hijo_may]) {
                swap(mont[act_nodo], mont[hijo_may]); 
                act_nodo = hijo_may; 
            }
            else return; 
        }
    }
}

int main(){
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);

int N,M;
cin>>N>>M;
int x;

for(int i=0;i<N;i++){
    cin>>x;
    insertar(x);
}
while(M--){
    cout<<mont[1]<<" ";
    eliminar();
}
}
