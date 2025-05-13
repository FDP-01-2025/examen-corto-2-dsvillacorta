#include <iostream>
using namespace std;

int main()
{

    // Declaracion de Variables
    int edad, usuario, opcion = 0;
    int saldo = 1000;

    // Ingreso de Datos
    cout << "Ingrese su Edad:\n";
    cin >> edad;

    // Verificacion de la Edad
    if (edad >= 16)
    {
        cout << "Tipos de Usuario\n1. Estudiante\n2. Profesional\n3. Ver Todos\n";
        cout << "Ingrese su Tipo de Usuario:\n";
        cin >> usuario;

        switch (usuario)
        {
        case 1:
            cout << "Descuentos del 20%:" << endl;
            cout << "1. Latop Basica: " << 900 * 0.8 << endl;
            cout << "2. Tablet Estudiantil: " << 960 * 0.8 << endl;
            cout << "3. Chromebook: " << 700 * 0.8 << endl;
            break;
        case 2:
            cout << "Descuentos del 10%:" << endl;
            cout << "4. Latop Avanzada: " << 1500 * 0.9 << endl;
            cout << "5. Tablet Pro: " << 1200 * 0.9 << endl;
            cout << "6. Estacion de Trabajo: " << 2000 * 0.9 << endl;
            break;
        case 3:
            cout << "Descuentos del 20%:" << endl;
            cout << "1. Latop Basica: " << 900 * 0.8 << endl;
            cout << "2. Tablet Estudiantil: " << 960 * 0.8 << endl;
            cout << "3. Chromebook: " << 700 * 0.8 << endl;
            cout << "Descuentos del 10%:" << endl;
            cout << "4. Latop Avanzada: " << 1500 * 0.9 << endl;
            cout << "5. Tablet Pro: " << 1200 * 0.9 << endl;
            cout << "6. Estacion de Trabajo: " << 2000 * 0.9 << endl;
            break;
        default:
            cout << "ERROR: La Opcion NO es Valida";
            break;
            return 0;
        }

        cout << "Ingrese una Opcion:\n";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            if (saldo < 900 * 0.8)
            {
                cout << "Saldo Insuficiente";
            } else {
                cout << "Compra Realizada" << endl;
                cout << "Saldo " << saldo - 900 * 0.8;
            }
            break;
        case 2:
            if (saldo < 960 * 0.8)
            {
                cout << "Saldo Insuficiente";

            } else {
                cout << "Compra Realizada" << endl;
                cout << "Saldo " << saldo - 960 * 0.8;
            }
            break;
        case 3:
            if (saldo < 700 * 0.8)
            {
                cout << "Saldo Insuficiente";

            } else {
                cout << "Compra Realizada" << endl;
                cout << "Saldo " << saldo - 700 * 0.8;
            }

            break;
        case 4:
            if (saldo < 1500 * 0.9)
            {
                cout << "Saldo Insuficiente";

            } else {
                cout << "Compra Realizada" << endl;
                cout << "Saldo " << saldo - 1500 * 0.9;
            }
            break;

        case 5:
            if (saldo < 1200 * 0.9)
            {
                cout << "Saldo Insuficiente";

            } else {
                cout << "Compra Realizada" << endl;
                cout << "Saldo " << saldo - 1200 * 0.9;
            }
            break;
        case 6:
            if (saldo < 2000 * 0.9)
            {
                cout << "Saldo Insuficiente";

            } else {
                cout << "Compra Realizada" << endl;
                cout << "Saldo " << saldo - 2000 * 0.9;
            }
            break;
        default:
            cout << "ERROR: La Opcion No es Valida";
            break;
            return 0;
        }
    }
    else
    {
        cout << "Lo sentimos, NO puedes continuar, pues no cumples con la edad";
    }

    return 0;
}
