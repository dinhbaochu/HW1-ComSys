
#include <iostream>
#include <stdlib.h>

using namespace std;

void invert(int** out, int** in, int N){
    int m, n;

    // each row
    for (m = N-1; m>=0; m--){
        *(out[N-1-m]) = *(in[m]);
    }

    // each element of rows 
    for (m = 0; m<N; m++){
        for (n = 0; n<N; n++){
            out[m][n] = in[N-1-m][N-1-n];
        }
    }
}

int main() {
    //ask matrix size 
    int N;
    cin>>N;

    int** p_in = new int*[N]; //create input matrix
    for (int i = 0; i < N; i++) {
        p_in[i] = new int[N];
    }

    int** p_out = new int*[N]; //create output matrix 
    for (int i = 0; i < N; i++) {
        p_out[i] = new int[N];
    }
    
    //input a matrix 
    for (int m = 0; m < N; m++) {
        for (int n = 0; n < N; n++) {
            cin >> p_in[m][n];
        }
    }

    invert(p_out, p_in, N);

    // return
    for(int m=0; m<N; m++){
        for(int n=0;n<N; n++){
        cout<<p_out[m][n]<<" ";}
        cout<<endl;
    }

    return 0;
}
