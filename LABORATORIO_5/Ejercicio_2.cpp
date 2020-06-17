/* Construya un programa que lea la hora, ​ hh ​ , ​ mm y ​ ss , ​ en el modo de 24
horas. Luego calcule y despliegue cuál es la hora un segundo después. */
#include<iostream>
using namespace std;
int time(int h, int m, int s){
    if(s == 59 && m != 59){
        m++;
        s=1;
        cout << h << ":" << m << ":0" << s << endl;
    }
    else if(m == 59 && s == 59 && h != 23){
        h++;
        m = 0;
        s = 1;
        cout << h << ":0" << m << ":0" << s << endl;
    }
    else if(h == 23 && m == 59 && s == 59){
        h = 0;
        m = 0;
        s = 0;
        cout << "0" << h << ":0" << m << ":0" << s << endl;
    }else if(h < 23 && m < 59 && s < 59){
        s++;
        if (h < 10 && m < 10 && s < 10){
            cout << "0" << h << ":0" << m << ":0" << s << endl;
        }else if(h < 10 && m < 10){
            cout << "0" << h << ":0" << m << ":" << s << endl;
        }else if(m < 10 && s < 10){
            cout << "" << h << ":0" << m << ":0" << s << endl;
        }else if(h < 10 && s < 10){
            cout << "" << h << ":0" << m << ":0" << s << endl;
        }else if(h < 10){
            cout << "0" << h << ":" << m << ":" << s << endl;
        }else if(m < 10){
            cout << "" << h << ":0" << m << ":" << s << endl;
        }else if(s < 10){
            cout << "" << h << ":" << m << ":0" << s << endl;
        }
        else{
            cout << h << ":" << m << ":" << s << endl;
        }
        }
    else
    {
        cout << "Puede que la hora, minuto o segundo no eran coherentes, verificalo.";
    }
    
    return 0;
}
int main(){
    int hour, minute, second;
    cout << "Ingrese la hora, por hora, minuto, segundo, presionando enter.\n";
    cout << "El formato de la hora esta en 24.\n";
    cin >> hour >> minute >> second;
    
    time(hour, minute, second);
    return 0;
}