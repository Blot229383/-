#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

/**
 * Вычисляет значение функции y = 3*sin(sqrt(x)) + 0.39x - 3.8
 * @param x - аргумент функции
 * @return значение функции в точке x
 */
double functionY(double x);

/**
 * Табулирует функцию на интервале [x0, xend] с шагом step
 * @param x0 - начальное значение x
 * @param xend - конечное значение x
 * @param step - шаг табуляции
 */
void tabulateFunction(double x0, double xend, double step);

/**
 * @brief точка входа в программу
 * @return 0, если прогамма выполнена корректно, иначе 1
 */
int main() {
    double x0, xend, step;

    cout << "Enter the start of the interval (x_min): ";
    cin >> x0;

    cout << "Enter the end of the interval (x_max): ";
    cin >> xend;

    cout << "Enter the step (∆x): ";
    cin >> step;

    if (step <= 0) {
        cerr << "Error: Step must be positive!" << endl;
        return 1;
    }

    tabulateFunction(x0, xend, step);

    return 0;
}
double functionY(double x) 
{
    if (x < 0) {
        throw invalid_argument("x cannot be negative (sqrt(x) is undefined)");
    }
    return 3 * sin(sqrt(x)) + 0.39 * x - 3.8;
}

void tabulateFunction(double x0, double xend, double step) {
    cout << "x   y(x)" << endl;

    for (double x = x0; x <= xend; x += step)
    {
        cout << x << " | ";
        try {
            double y = functionY(x);
            cout << y << endl;
        }
        catch (const invalid_argument& e) {
            cout << "undefined (" << e.what() << ") |" << endl;
        }
    }
}
