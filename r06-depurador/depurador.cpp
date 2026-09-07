#include <iostream>

int suma(const int v[], int n) { // A
    int s = 0;
    for (int i = 0; i < n; i++)
        s += v[i];
    return s;
}
int pares(const int v[], int n) { // B
    int c = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) c++;
    return c;
}
int maximo(const int v[], int n) { // C
    int mejor = v[0];
    for (int i = 0; i < n; i++)
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}

int main(){
    const int valores[] = {1,2,3,4,5,6,7,8};
    const int n = sizeof(valores) / sizeof(valores[0]);

    // Caso de uso de suma.
    std::cout << "Suma: " << suma(valores, n) << '\n';

    // Caso de uso de pares.
    std::cout << "Pares: " << pares(valores, n) << '\n';

    // Caso de uso de maximo.
    std::cout << "Maximo: " << maximo(valores, n) << '\n';

    return 0;
}