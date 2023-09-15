#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void metodo_insercion(int vecto[], int n);

int main() {

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

    metodo_insercion(vector, n);

    cout << "\nEl vector ordenado es:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }

    return 0;
}

void metodo_insercion(int vecto[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = vecto[i];
        j = i - 1;
        while (j >= 0 && vecto[j] > temp) {
            vecto[j + 1] = vecto[j];
            j = j - 1;
        }
        vecto[j + 1] = temp;
    }
}

