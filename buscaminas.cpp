#include <iostream>
using namespace std;

int main(){
    int M,N;
    cin>>M>>N;
    int A[205][205]={0};
    int B[205][205]={0};

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(A[i-1][j]==1){
                B[i][j]++;
            }
            if(A[i+1][j]==1){
                B[i][j]++;
            }
			if(A[i][j-1]==1){
                B[i][j]++;
            }
			if(A[i][j+1]==1){
                B[i][j]++;
            }
            if(A[i][j]==1){
            	B[i][j]++;
			}
			if(A[i-1][j-1]==1){
            	B[i][j]++;
			}
			if(A[i-1][j+1]==1){
            	B[i][j]++;
			}
			if(A[i+1][j-1]==1){
            	B[i][j]++;
			}
			if(A[i+1][j+1]==1){
            	B[i][j]++;
			}
    cout<<B[i][j]<<" ";    }
    cout<<endl;    }
}
