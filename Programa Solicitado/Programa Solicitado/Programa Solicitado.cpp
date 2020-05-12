#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "Ingrese un numero: ";
    cin >> x;
    cout << "Ingrese otro numero: ";
    cin >> y;
    int RESULTADO_DE_LA_SUMA;
    RESULTADO_DE_LA_SUMA = x + y;
    int RESULTADO_DE_LA_RESTA;
    RESULTADO_DE_LA_RESTA = x - y;
    int RESULTADO_DE_LA_MULTIPLICACION;
    RESULTADO_DE_LA_MULTIPLICACION = (x * y);
    cout << "El resultado de la suma es: " << RESULTADO_DE_LA_SUMA << endl;
    cout << "El resultado de la resta es: " << RESULTADO_DE_LA_RESTA << endl;
    cout << "El resultado de la multiplicacion es: " << RESULTADO_DE_LA_MULTIPLICACION << endl;
    return 0;
}