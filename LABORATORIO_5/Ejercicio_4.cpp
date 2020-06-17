/* Escriba un programa que lea tres números enteros que representan los valores
de día (​ dd ) ​ , mes (​ mm ) ​ y año (​ aa ) ​ de una fecha cualquiera. Luego,
calcule y dé como resultado de salida los valores de día, mes y año correspondientes
al día siguiente. Su programa debe tomar en cuenta años bisiestos. Si la fecha
digitada no es válida su programa no calculará el día siguiente e indicará el error de digitacion. */
#include<iostream>
#include<string>
using namespace std;
int date(int day, int month, int year){
    if(day == 30 && (month == 4 || month == 6 || month == 9 || month == 11) && (day < 31)){
        day = 1;
        month++;
        cout << day << "/" << month << "/" << year << endl;
    }
    else if (day==31 && (month==1||month==3||month==5||month==7||month==8||month==10)){
        day = 1;
        month++;
        cout << day << "/" << month << "/" << year << endl;
    }
    else if(day == 31 && month == 12){
        day = 1;
        month = 1;
        year++;
        cout << day << "/" << month << "/" << year << endl;
    }else if((year%4==0)||(year%100==0 && year%400!=0)){
        if (day == 29)
        {
            day = 1;
            month++;
            cout << day << "/" << month << "/" << year << endl;
        }else if(day < 29){
            day++;
            cout << day << "/" << month << "/" << year << endl;
        }
        
    }else if(month == 2 && day <= 28){
        if (day == 28)
        {
            day = 1;
            month++;
            cout << day << "/" << month << "/" << year << endl;
        }else
        {
            day++;
            cout << day << "/" << month << "/" << year << endl;
        }  
    }else if(day > 31 || month > 12){
        cout << "Puede que el mes o dia no sean coherentes, intente con otra fecha.\n";
    }else
    {
        day++;
        cout << day << "/" << month << "/" << year << endl;
    }
 
    return 0;
}
int main(){
    int d, m, y;
    cout << "Ingrese 3 numeros (solo de dos cifras c/u): (d/m/a)\n";
    cin >> d >> m >> y;
    
    date(d, m, y);
}