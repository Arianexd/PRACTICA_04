#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// FUNCION
void metodo_burbuja(int vecto[], int n);

int main() {
    //Iniciar numero random
    srand(time(0));

    int n;
    cout << "Ingrese el tamanio del vector: ";
    cin >> n;

    int vector[n];

    cout << "Elementos del vector generados aleatoriamente:" << endl;
    for (int i = 0; i < n; i++) {
        vector[i] = rand() % 100;
        cout << vector[i] << " ";
    }

    metodo_burbuja(vector, n);

    cout << "\nEl vector ordenado es:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }

    return 0;
}


void metodo_burbuja(int vecto[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vecto[j] > vecto[j + 1]) {
                // Intercambia vecto[j] y vecto[j + 1]
                int temp = vecto[j];
                vecto[j] = vecto[j + 1];
                vecto[j + 1] = temp;
            }
        }
    }
}

