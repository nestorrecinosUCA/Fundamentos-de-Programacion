/* Elabore una función que retorne el mcd de dos números que se le proporcionen
como argumento. Utilice el método de Euclides, que ya se presentó en un ejemplo
del documento donde se explican las instrucciones iterativas. Su función deberá
retornar el mcd de los dos enteros recibidos y deberá ser desplegado en pantalla.*/
#include<iostream>
using namespace std;
int mcd(int may, int men){
    int residuo = may%men;

    if(residuo == 0){
    cout << "El MCD es: " << residuo << endl;
    }
    while(residuo != 0){
        may = men;
        men = residuo;
        residuo = may%men;
        if(residuo == 0){
            cout << "El CMD es " << men << endl;
            break;
        }
    }
    return 0;
}
int main(){
    int may, men;
    cout << "Ingrese dos numeros para calcular su MCD, uno mayor que el otro:\n";
    cin >> may >> men;

    mcd(may, men);

    return 0;
}