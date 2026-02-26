#include <iostream>
using namespace std; 

int main(){

    int edad;

    cout <<"Por favor, ingrese su edad " << endl ;
    cin >> edad ;

    if(edad <= 17){
        cout <<"Aun no puedes ingresar " << endl;
    }else{
        cout <<"Puedes pasar adelante :3" << endl;
    }

    return 0;
}