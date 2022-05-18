#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int hora[16];
    int ocupado = 0;
    int agregarHoras = 0;
    int cantidadHoras = 0;
    double costo = 0;

    for(int i = 1;i<=16;i++) {
        hora[i] = 0;
    }

    while(ocupado == 0) {
        costo = 0;
        cout << "Escriba el número del horario que desea para comenzar la sesión:"<<endl;
        cout << "1: 07:00\t2: 08:00\t3: 09:00\t4: 10:00"<<endl;
        cout << "5: 11:00\t6: 12:00\t7: 13:00\t8: 14:00"<<endl;
        cout << "9: 15:00\t10: 16:00\t11: 17:00\t12: 18:00"<<endl;
        cout << "13: 19:00\t14: 20:00\t15: 21:00\t16: 22:00"<<endl;
        cin >> x;

        if(x > 0 && x < 17) {
            if(hora[x] == 0) {
                cout << "El costo base de la sesión es de $200 por una sesión de 2 horas."<<endl;
                cout << "¿Desea agregar más horas?"<<endl;
                cout << "1. Si          2. No"<<endl;
                cin >> agregarHoras;
                if(agregarHoras == 2) {
                    costo = 200;
                    int contador = 0;
                    for(int i = 1;i<=x+1;i++) {
                        if(i == x+contador) {
                            hora[x+contador] = 1;
                            contador++;
                        } 
                    }
                    cout << "Costo total: $"<< costo <<endl;
                    cout << "Disfrute su sesión.";
                    cout << ""<<endl;
                    cout << ""<<endl;
                    contador = 0;
                    for(int i = 1;i<=16;i++) {
                        if(hora[i] == 1) {
                            contador++;
                        }
                        if(contador == 16) {
                            ocupado = 1;
                        }
                    }
                }
                if(agregarHoras == 1) {
                    cout << "Escriba la cantidad de horas que desea agregar."<<endl;
                    cout << "1 hora = + $50"<<endl;
                    cin >> cantidadHoras;
                    costo = 200 + (50 * cantidadHoras);
                    int contador = 0;
                    for(int i = 1;i<=(x+1)+cantidadHoras;i++) {
                        if(i == x+contador) {
                            hora[x+contador] = 1;
                            contador++;
                        } 
                    }
                    cout << "Costo total: $"<< costo <<endl;
                    cout << "Disfrute su sesión.";
                    cout << ""<<endl;
                    cout << ""<<endl;
                    contador = 0;
                    for(int i = 1;i<=16;i++) {
                        if(hora[i] == 1) {
                            contador++;
                        }
                        if(contador == 16) {
                            ocupado = 1;
                        }
                    }
                }
            } else {
                cout << "Esta hora ya está ocupada."<<endl;
            }
        } else {
            cout << "Introduzca un número válido."<<endl;
        }
        
    }

    cout << "Todos los horario están ocupados."<<endl;
    return 1;
}