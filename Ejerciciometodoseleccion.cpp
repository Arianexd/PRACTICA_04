#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// FUNCION
void metodo_seleccion(int vecto[], int n);

int main() {
    //GENERAR NUMERO ALEATORIOS
    srand(time(0));

    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    int vector[n];

    cout << "Elementos del vector generados aleatoriamente:" << endl;
    for (int i = 0; i < n; i++) {
        //rango para genera numeros
        vector[i] = rand() % 100;
        cout << vector[i] << " ";
    }

    metodo_seleccion(vector, n);

    cout << "\nEl vector ordenado es:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }

    return 0;
}

void metodo_seleccion(int vecto[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (vecto[j] < vecto[min_idx]) {
                min_idx = j;
            }
        }

        int temp = vecto[i];
        vecto[i] = vecto[min_idx];
        vecto[min_idx] = temp;
    }
}


void metodo_seleccion(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}


