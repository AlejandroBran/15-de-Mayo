#include <iostream>

using namespace std;

int main (){

    int edad;

    cout << "Ingrese su edad: \n";
    cin >> edad;

    if(edad<0){

        cout << "Los datos ingresado no existen. \n";

    }
    else if(edad<18){

        cout << "Usted es menor de edad. \n";
    }
    else{
        cout << "Usted es mayor de edad. \n";
    }

    return 0;
}