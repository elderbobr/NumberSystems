#include <iostream>
#include <cmath>
using namespace std;

void Translation(int& Number) {
    int a = 2;
    int i = 0;
    while (Number > pow(a, i))
    {
        i++;
    }
    int* arr = new int[i];
    for (int j = 0; j < i; j++) {
        if (Number % 2 == 0) {
            arr[j] = 0;
            Number /= 2;
        }
        else {
            arr[j] = 1;
            Number /= 2;
        }
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }

    delete[] arr;
}

int main()
{
    int Number;
    cin >> Number;
    Translation(Number);
}