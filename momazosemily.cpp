#include <iostream>
using namespace std;

// Función para determinar el tipo de triángulo
string tipo_triangulo(int a, int b, int c) {
    // Comprobar si los lados pueden formar un triángulo
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            return " When es un equilatero :v";
        } else if (a == b || b == c || a == c) {
            return "When es un isosceles:v";
        } else {
            return "When es un escaleno :v";
        }
    } else {
        return "When no forman un triangulo :'v";
    }
}

int main() {
    int a, b, c;

    // Leer los números enteros
    cout << "Ingresa el primer numero:3 : ";
    cin >> a;
    cout << "Ingresa el segundo numero:3 : ";
    cin >> b;
    cout << "Ingresa el tercer numero:3 : ";
    cin >> c;

    // Determinar el tipo de triángulo
    string resultado = tipo_triangulo(a, b, c);
    cout << "Resultado: " << resultado << endl;

    return 0;
}
