#include <iostream>
#include <cmath>
using namespace std;

/**
 *@brief - Функция для вычисления a по заданному уравнению a=(2z^x)/(√(y^xcos^2(x+y))-3z)
 *@param x - значение переменной x
 *@param y - значение переменной y
 *@param z - значение переменной z
 *@return - возвращает рассчитанное значение
 */

double getA(const double x, const double y, const double z);

 /**
 *@brief - Функция для вычисления b по заданному уравнению b=xe^(√z)cos(x^2/yz)
  *@param x - значение переменной x
  *@param y - значение переменной y
  *@param z - значение переменной z
  *@return - возвращает рассчитанное значение
  */
double getB(const double x, const double y, const double z);
/**
 * @brief точка входа в программу
 * @return 0, если прогамма выполнена корректно, иначе 1 
 */
int main()
{
    const double x = 0.78;
    const double y = 1.24;
    const double z = 0.5;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "a = " << getA(x, y, z) << endl;
    cout << "b = " << getB(x, y, z);
    return 0;
}

double getA(const double x, const double y, const double z)
{
    return (2 * pow(z, x)) / (sqrt(pow(y, x) * pow(cos(x + y), 2)) - 3 * z);
}

double getB(const double x, const double y, const double z)
{
    return x * exp(sqrt(z))*cos(pow(x, 2) / (y * z));
}
