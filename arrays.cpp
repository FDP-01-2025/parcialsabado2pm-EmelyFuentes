#include <iostream>
using namespace std;

int main()
{
    int numero[20], buscar, i = 0;

    for (int i = 0; i < 20; i++)
    {
        cout << "Ingrese un numero " <<endl;
        cin >> numero[i];
    }

    cout << "Ingrese un numero para buscar " <<endl;
    cin >> buscar;
    
    if ((numero[0] == buscar) || (buscar > 1 && buscar < 20))

        for (int i = numero[20]; i <= 20; i++)
        {
            {
                cout << "El numero que ingreso si esta en los numeros digitados antes: " << buscar << endl;
            }
        }
    else if (buscar != 0)
    {
        cout << "El numero que ingreso no esta en los numeros digitados antes: " << buscar << endl;
    }
    else
    {
        cout << "El numero que ingreso es 0: " << buscar << endl;
    }
    return 0;
}