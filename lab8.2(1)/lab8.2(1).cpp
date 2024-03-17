#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    double a, b;
    cout << "Введіть межі діапазону (a,b): ";
    cin >> a;
    cin >> b;

    int* arr = new int[n];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= a && arr[i] <= b) {
            count++;
        }
    }
    double max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    double sum = 0;
    for (int i = maxIndex + 1; i < n; i++) {
        sum += arr[i];
    }
    cout << "Кількість елементів у діапазоні [" << a << ", " << b << "]: " << count << endl;
    cout << "Сума елементів після максимального: " << sum << endl;
}
