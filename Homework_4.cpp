#include <iostream>
#include <cmath>
using namespace std;

/**
 * Вычисляет значение функции y = 3*sin(sqrt(x)) + 0.39x - 3.8
 * @param x - аргумент функции
 * @return значение функции в точке x
 */
double functionY(const double x);

/**
 * Табулирует функцию на интервале [x0, xend] с шагом step
 * @param x0 - начальное значение x
 * @param xend - конечное значение x
 * @param step - шаг табуляции
 */
void tabulateFunction(const double x0, double xend, double step);

/**
 * @brief считывает значение с клавиатуры
 * @return введенное значение
 */
double get();

/**
 * @brief Точка входа в программу
 * @return возвращает 0, если программа выполнена верно
*/
int main() {

    cout << "Enter the start of the interval x min: ";
    double x0 = get();

    cout << "Enter the end of the interval x max: ";
    double xend = get();

    cout << "Enter the step ∆x: ";
    double step = get();

    if (step <= 0) {
        cout << "Step must be positive" << endl;
        return 1;
    }
    tabulateFunction(x0, xend, step);
    return 0;
}

double functionY(const double x) {
    if (x < 0)
    {
        cout << "unfinded";
    }
        return 3 * sin(sqrt(x)) + 0.39 * x - 3.8;
}

void tabulateFunction(const double x0, double xend, double step) {
    cout << "x |  y(x)" << endl;
    for (double x = x0; x <= xend; x += step) {
        cout << x << " | ";
        double y = functionY(x);
        cout << y << endl;
    }
}

double get()
{
    double value = 0;
    cin >> value;
    if (cin.fail())
    {
        cout << "Incorrect value" << endl;
        abort();
    }
    return value;
}
