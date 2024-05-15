#include <iostream>

using namespace std;

int main (){

    int angulos;

    cout << "Ingrese un angulo: \n";
    cin >> angulos;

    if(angulos<90 && angulos>0){

        cout << "Su angulo es agudo. \n";
    }
    else if(angulos>=90){

        cout << "Su angulo es obtuso. \n";

    }
    else{
        cout << "Su dato ingresado no existe. \n";
    }

    return 0;
}