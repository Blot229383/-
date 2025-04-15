#include <iostream>
#include <cmath>
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

int main() {
    double x0, xend, step;

    cout << "Enter the start of the interval x min: ";
    cin >> x0;

    cout << "Enter the end of the interval x max: ";
    cin >> xend;

    cout << "Enter the step ∆x: ";
    cin >> step;

    if (step <= 0) {
        cout << "Step must be positive" << endl;
        return 1;
    }
        tabulateFunction(x0, xend, step);
    return 0;
}
double functionY(double x) {
    if (x < 0) {
        cout << "undefined";
        return 0;
    }
    return 3 * sin(sqrt(x)) + 0.39 * x - 3.8;
}
void tabulateFunction(double x0, double xend, double step) {
    cout << "x |  y(x)" << endl;
        for (double x = x0; x <= xend + 1e-9; x += step) {
        cout << x << " | ";
        double y = functionY(x);
                    cout << y << endl;
        }
}
