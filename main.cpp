#include <iostream>
using namespace std;
int main() 
{

void ordinavettore(int n, int v[]);
void riempivettore(int n, int v[], bool flag);
void visualizza(int n, int v[]);
void visualizzainverso(int n, int v[]);

int main() {
    int n;
    bool flag;
    cout << "Quanti numeri generare?" << endl;
    cin >> n;
    int p[n], d[n];
    flag = true;
    riempivettore(n, p, flag);
    flag = false;
    riempivettore(n, d, flag);
    ordinavettori(n, p);
    ordinavettore(n, d);
    cout << "Vettore pari ordinato in ordine crescente." << endl;
    visualizza(n, p);
    cout << "Vettore dispari ordinato in ordine crescente." << endl;
    visualizza(n, d);
    cout << "Vettore dispare ordinato in ordine crescente." << endl;
    visualizzainverso(n, d);
    return 0;
}

void ordinavettore(int n, int v[]) {
    int i, j, t;
    bool scambio;
    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (v[j] > v[j + 1]) {
                scambio = true;
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
}

void riempivettore(int n, int v[], bool flag) {
    int i, x;
    i = 0;
    if (flag == true) {
        while (i < n) {
            x = 1 + rand() % 100;
            if (x % 2 == 0) {
                v[i] = x;
                i = i + 1;
            }
        }
    } else {
        while (i < n) {
            x = 1 + rand() % 100;
            if (x % 2 == 0) {
            } else {
                v[i] = x;
                i = i + 1;
            }
        }
    }
}

void visualizza(int n, int v[]) {
    int i;
    i = 0;
    while (i < n) {
        cout << v[i] << endl;
        i = i + 1;
    }
}

void visualizzainverso(int n, int v[]) {
    double i;
    i = n - 1;
    while (i >= 0) {
        cout << v[i] << endl;
        i = i - 1;
    }
}
}