#include <iostream>
using namespace std;
// Ejercicio 227: Promedio de tres numeros (2 decimales)
#include <iomanip>
int main() {{
    double a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    double avg = (a+b+c)/3.0;
    cout << fixed << setprecision(2) << avg << '\n';
    return 0;
}}
