/*Elabore un programa que llene un arreglo con los 100 primeros números enteros
impares y los muestre en forma descendente. En la primera casilla estará el 1, en la
segunda el 3, y así sucesivamente. El proceso de impresión iniciará desplegando el
mayor de los valores y terminará desplegando es 1.*/
#include<iostream>
using namespace std;
int main(){
    //Array con los primeros 100 numeros impares, del 1 al 197
    int numbers[100] = {1,3,5,7,9,11,13,15,17,18,19,21,23,25,27,29,31,33,35,37,
                        39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,
                        75,77,79,81,83,85,87,89,91,93,95,97,99,101,103,105,107,
                        109,111,113,115,117,119,121,123,125,127,129,131,133,135,
                        137,139,141,143,145,147,149,151,153,155,157,159,161,163,
                        165,167,169,171,173,175,177,179,181,183,185,187,189,191,
                        193,195,197};
    
    for(int i = 99; i >= 0; i--){
        cout << i+1 << "-" << numbers[i] << endl;
    }

    return 0;
}