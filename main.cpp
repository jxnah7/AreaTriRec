#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void print_result(double b, double h, double a, string shape);

int main()
{
    double num1, num2, area_tri, area_rec;
    cout << "This program calculates the area of a triangle and the area of a rectangle" << endl << endl;
    cout << "For the base and height of a rectangle" << endl << endl;
    cout << "Please enter 2 real numbers: ";
    cin >> num1 >> num2;
    
    area_tri = 1. / 2. * num1 * num2;
    print_result(num1, num2, area_tri, "triangle");        // STANDALONE STATEMENT
    
    area_rec = num1 * num2;
    print_result(num1, num2, area_rec, "rectangle");        // STANDALONE STATEMENT

    return 0;
    
}

void print_result(double b, double h, double a, string shape)
{
    cout << fixed << setprecision(2);
    cout << "\nThe area of a " << shape << " with base " << b << " and height " << h << " is " << a << endl << endl;
}
