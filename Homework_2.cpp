#include <iostream>
#include <stdlib.h>
using namespace std;

/**Вычислить площадь и периметр прямоугольника, если задана длина одной стороны(a)
и коэффициент n(%), позволяющий вычислить длину второй стороны(b = n * a).*/

/**
 * @brief считывает значение с клавиатуры
 * @return введенное значение
 */
double get();

/**
 * @brief проверка переменной
 * @param a - первая сторона прямоугольника
 * @param n - коэффициент для второй стороны
 */
void check(const double a, const double n);

/**
 * @brief расчитывает значение b
 * @param a - первая сторона прямоугольника
 * @param n - коэффициент для второй стороны
 * @return b - значение второй стороны
 */
double getb(const double a, const double n);

/**
 * @brief Вычисляет площадь прямоугольника
 * @param a - первая сторона прямоугольника
 * @param b - вторая сторона прямоугольника
 * @return площадь прямоугольника
 */
double Square(const double a, const double b);

/**
 * @brief Вычисляет периметр прямоугольника
 * @param a - первая сторона прямоугольника
 * @param b - вторая сторона прямоугольника
 * @return периметр прямоугольника
 */
double Perimeter(const double a, const double b);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе 1
 */
int main()
{
    cout << "Enter first side a: ";
    double a = get();

    cout << "Enter ratio n %: ";
    double n = get();
    check(a, n);
    double b = getb(a, n);

    cout << "Square is " << Square(a, b) << endl;
    cout << "Perimeter is " << Perimeter(a, b) << endl;

    return 0;
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

double getb(const double a, const double n)
{
    return a * n / 100;
}

void check(const double a, const double n)
{
    if (a <= 0 || n <= 0)
    {
        cout << "\nEntered number is not positive" << endl;
        abort();
    }
}

double Square(const double a, const double b)
{
    return a * b;
}

double Perimeter(const double a, const double b)
{
    return 2 * (a + b);
}
