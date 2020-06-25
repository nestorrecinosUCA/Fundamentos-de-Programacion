//Amplíe el problema anterior escribiendo una función que reciba el arreglo como
//argumento y su longitud; y retorne el promedio de los elementos que lo componen.
#include<iostream>
using namespace std;
float average(float level, float total){
    double average;
    average = total/level;
    cout << "El promedio de los numeros ingresados es: " << average << endl;
    return 0;
}
int main(){
    int arr[75], limit, total = 0;
    cout << "Ingrese un numero como argumento para el array: ";
    cin >> limit;
    for(int i=0; i < limit; i++){
        cout << "Ingresar un numero: "; cin >> arr[i];
        total += arr[i];
    }

    average(limit, total);

    return 0;
}