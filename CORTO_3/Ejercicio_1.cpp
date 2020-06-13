#include<iostream>
using namespace std;
float salario_real(float salario_t){//calcular los descuentos
    float isss = 0.04, afp = 0.0625, renta = 0.1, sal_real= 0, descuentos = 0;//variables con los porcentajes
    descuentos += ((salario_t * isss) + (salario_t * afp));//de sumatoria de descuentos
    if(salario_t > 499){//Revsar si el salario total esta arriba de 500 para descontar renta
        descuentos += (salario_t * renta);
    }
    sal_real = salario_t - descuentos;//Restar descuentos del salario total
    if (sal_real >= 100){//Precisar decimales para resultados arriba de 100
        cout.precision(5);
        cout << sal_real;
    }else{ // De lo contrario, la precision quedara en 3, ej. 23.89
        cout.precision(3);
        cout << sal_real;
    }  
    return 0;//Retornar la funcion
}

float salario_total(int trabajadores){
    int horas, horas_ex; //Variables de horas
    float pagoHora = 1.75, pagoExtra = 2.50; //Variables de valor por hora
    for (int i = 0; i < trabajadores; i++)//Bucle para solicitar las horas trabajadas
    {
        cout << "Ingresar horas trabajadas: "; cin >> horas;
        cout << "Ingresar horas extras: "; cin >> horas_ex;
        float sal_total = (pagoHora * horas) + (pagoExtra * horas_ex);//Efectuar la suma de ambos resultados
        cout << "El salario total del trabajador "<< i+1 << " es de $" << sal_total;
        //Luego, dar el salario real, llamando a la funcion de tipo flotante Salario_Real
        cout << "\nEl salario real del trabajador " << i+1 << " es de: $" << salario_real(sal_total) << "\n\n";
    }
    return 0;  //Retornar la funcion  
}

int main(){
    int workers = 0; //Variable de numero de trabajadores
    
    cout << "Ingresar el numero de trabajadores: "; cin >> workers; cout << endl;//Solicitar numero de trabajadores
    
    salario_total(workers);//Lamar a la funcion de tipo flotante Salario_total
    
    
    return 0;
}