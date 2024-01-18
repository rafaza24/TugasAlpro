#include<iostream>

using namespace std ;

int faktorial(int n){
    if(n <= 1){
        cout << n;
        return n;
    }
    else
    {
        cout << " " << n << " x " ;
        return n * faktorial(n-1);
    }
}

int main(){
    unsigned int  angka , hasil;
    cout << "\t Bilangan faktorial \n\n";
    cout << "Masukan angka :  "; cin >> angka ;
    
    hasil =faktorial(angka);
    cout << "\n\n Hasil faktorialnya  :  " << hasil ;
}