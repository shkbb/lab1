#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double temperature;
    string forecast;

    cout << "Введіть температуру: ";
    cin >> temperature;

    cout << "Введіть прогноз погоди: ";
    cin >> forecast;

    if (forecast == "дощ") {
        cout << "Візьміть парасольку." << endl;
    }
    else if (forecast == "сонце") {
        cout << "Парасолька не потрібна." << endl;
    }
    else if (forecast == "хмарно") {
        if (temperature < 10) {
            cout << "Можливо, парасолька не знадобиться." << endl;
        }
        else {
            cout << "Рекомендується взяти парасольку." << endl;
        }
    }
    return 0;
}
