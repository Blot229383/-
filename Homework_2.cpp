#include <iostream>
#include <stdlib.h>
using namespace std;

/**Вычислить площадь и периметр прямоугольника, если задана длина одной стороны(a) 
и коэффициент n(%), позволяющий вычислить длину второй стороны(b = n * a).*/

/**
 * @brief считывает значение a с клавиатуры
 * @return введенное значение
 */
double getA();

/**
 * @brief считывает значение n с клавиатуры
 * @return введенное значение
 */
double getN();

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
    double a = getA();
    cout << "Enter ratio n %: ";
    double n = getN();

    double b = a * n / 100;

    cout << "Square is " << Square(a, b) << endl;
    cout << "Perimeter is " << Perimeter(a, b) << endl;

    return 0;
}

double getA()
{
    double value;
    cin >> value;
    if (cin.fail())
    {
        cout << "Incorrect value" << endl;
        abort();
    }
    return value;
}

double getN()
{
    double value;
    cin >> value;
    if (cin.fail())
    {
        cout << "Incorrect value" << endl;
        abort();
    }
    return value;
}

double Square(const double a, const double b)
{
    return a * b;
}

double Perimeter(const double a, const double b)
{
    return 2 * (a + b);
}