#include <iostream>
#include <math.h>
using namespace std;
main ()
{
int altura, radio, area, volumen;
double pi;
cout << "Ingrese la altura: ";
cin >> altura;
cout << "Ingrese un radio: ";
cin >> radio;
pi = 3.1416;
if(altura>radio)
{
double volumen = (pi * pow(radio, 2) * altura);
cout <<"El volumen del cilindro es: "<< volumen << endl;
}
else
{
double area= ((2 * pi * radio * altura) + (2 * pi * pow (radio,2)));
cout << "El area del lel cilindro es" << area << endl;
}
}