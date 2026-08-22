#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std; 
 
int main() { 
    cout << "===== DATOS DEL CLIENTE =====" << endl; 
    cout << "Ingrese el nombre del cliente: "; 
    string nombre; 
    getline(cin, nombre); 
 
    cout << "Ingrese la cantidad de unidades: "; 
    double cantidad; 
    cin >> cantidad; 
 
    cout << "Ingrese el precio unitario: "; 
    double precioUnitario; 
    cin >> precioUnitario; 
 
    double subtotal = cantidad * precioUnitario; 
    double descuento = subtotal * 0.10; 
    double total = subtotal - descuento; 
 
    cout << "\n===== RESUMEN DE COMPRA =====" << endl; 
    cout << "Cliente: " << nombre << endl; 
    cout << fixed << setprecision(2); 
    cout << "Subtotal: " << subtotal << endl; 
    cout << "Descuento (10%): " << descuento << endl; 
    cout << "Total a pagar: $" << total << endl; 
 
    cout << "\nIngrese el monto con el que paga: "; 
    double pago; 
    cin >> pago; 
 
    if (pago >= total) { 
        double cambio = pago - total; 
        cout << "\nPago aceptado." << endl; 
        cout << "Su cambio es: $" << cambio << endl; 
    } else { 
        double falta = total - pago; 
        cout << "\nDinero insuficiente." << endl; 
        cout << "Le falta: $" << falta << endl; 
    } 
 
    return 0; 
} 

 
