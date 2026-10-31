#include <iostream>
#include <iomanip>
using namespace std;

// Calcula el total y aplica un 10 % de descuento si supera RD$5,000.
double calcularTotalPagar(int cantidad, double precio) {
    double total = cantidad * precio;

    if (total > 5000) {
        total = total - (total * 0.10);
    }

    return total;
}

// Muestra en pantalla el total que debe pagar el cliente.
void mostrarTotal(double totalPagar) {
    cout << fixed << setprecision(2);
    cout << "Total a pagar: RD$ " << totalPagar << endl;
}

int main() {
    int cantidad;
    double precio;

    cout << "===== SISTEMA DE VENTAS - LA TIENDA =====" << endl;
    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;

    cout << "Ingrese el precio de cada producto: RD$ ";
    cin >> precio;

    if (cantidad <= 0 || precio < 0) {
        cout << "Error: la cantidad debe ser mayor que cero y el precio no puede ser negativo." << endl;
        return 1;
    }

    double totalPagar = calcularTotalPagar(cantidad, precio);
    mostrarTotal(totalPagar);

    return 0;
}
