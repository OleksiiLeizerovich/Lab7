#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "uk-UA.UTF-8");

    int a, b;
    int *ptr_a, *ptr_b;

    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;

    ptr_a = &a;
    ptr_b = &b;

    *ptr_a *= 2;

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    cout << "Результат:"<<endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}