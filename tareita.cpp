#include <iostream>
using namespace std;

// Función para determinar el tipo de triángulo
string tipo_triangulo(int a, int b, int c) {
    // Comprobar si los lados pueden formar un triángulo
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            return "Equilatero";
        } else if (a == b || b == c || a == c) {
            return "Isosceles";
        } else {
            return "Escaleno";
        }
    } else {
        return "No forman un triangulo";
    }
}

int main() {
    int a, b, c;

    // Leer los números enteros
    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
    cout << "Ingresa el tercer numero: ";
    cin >> c;

    // Determinar el tipo de triángulo
    string resultado = tipo_triangulo(a, b, c);
    cout << "Resultado: " << resultado << endl;

    return 0;
}
