#include <iostream>

using namespace std;

void invertir (int[],int);
void mostrarArreglo(int[],int);

int main(){
    int arreglo[]={9,0,1,8};
    mostrarArreglo(arreglo,4);
    invertir(arreglo,4);
    mostrarArreglo(arreglo,4);
    return 0;
}

void invertir (int A[],int N){

    for(int i=0;i<N/2;i++){
        int aux =  A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = aux;
    }
}

void mostrarArreglo(int A[],int N){
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
