#include <iostream> // Incluye la biblioteca estándar de entrada/salida
using namespace std;

int main() {
    double cantidadKw, precioKw, totalPagar;

    cout << "Ingrese la cantidad de Kw consumidos: ";
    cin >> cantidadKw;
    cout << "Ingrese el precio por Kw: ";
    cin >> precioKw;

    if (cantidadKw > 600) {
        double excesoKw = cantidadKw - 700;
        totalPagar = (700 * precioKw) + (excesoKw * precioKw * 1.05);
    } else {
        totalPagar = cantidadKw * precioKw;
    }

    cout << "El total a pagar es: " << totalPagar << " unidades monetarias." << endl;

    return 0;
}
