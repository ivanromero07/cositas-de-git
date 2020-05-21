#include <iostream>
using namespace std;

int factorial(int j){
    long double g=1;
    for(int i=1; i <=j; ++i)
    {
        g *=i;
    }
    return g;
}

int main()
{
    int n;
    cout << "Ingrese un número: \n "<< endl;
    cin >> n;
    cout << "El factorial de " << n << " es: " << factorial(n) <<endl;    
}