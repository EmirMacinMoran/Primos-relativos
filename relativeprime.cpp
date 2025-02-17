#include<iostream>
using namespace std;
void regMaxMin(int *,int ,int &, int &);
bool esPrimo(int );
int main(){
    int may,min;
    int arr[] = {4,6,9,12,41,56,97,101,967,341,789};
    int longitud = sizeof(arr)/sizeof(arr[0]);
    regMaxMin(arr,longitud,may,min);
    cout<<"El primo mayor es: "<<may<<endl;
    cout<<"El primo menor es: "<<min<<endl;
    return 0;
}
bool esPrimo(int n){
    if(n<2) return false;
    for(int i = 2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void regMaxMin(int *a,int N,int &mayor,int &menor){
    mayor = menor = a[0];
    for(int i=0;i<N;i++){
        if(esPrimo(a[i])){
            if(mayor<a[i]){
                mayor = a[i];
            }
            else if(menor>a[i]){
                menor = a[i];
            }
        }
    }
}