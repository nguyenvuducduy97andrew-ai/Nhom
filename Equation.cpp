#include <iostream>
#include <cmath>
#include <iomanip>
#include "Equation.h"


#define M_PI 3.14159265358979323846
using namespace std;
void giaiBac1(double a, double b,double &x, int& nSol) 
{
    if (a == 0) 
    {
        if (b == 0) nSol = -1;
        else nSol = 0;
    }
    else {
        x = -b / a;
        nSol = 1;
    }
}
void giaiBac2(double a, double b, double c, double& x1, double& x2, int& nSol)
{
    if (a == 0) 
    {
        giaiBac1(b, c,x1,nSol);
        x1 = x2;
    }

    double delta = b * b - 4 * a * c;
    if (delta < 0) nSol = 0;
    else if (delta == 0) {
        nSol = 1;
         x1=x2 = -b / 2 * a;
    }
    else 
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        nSol = 2;
    }
}

void giaiBac3(double a, double b, double c, double d, double& x1, double& x2, double& x3, int& nSol) {
    if (a == 0) {
        giaiBac2(b, c, d, x1, x2, nSol);
        return;
    }

    double p = (3 * a * c - b * b) / (3 * a * a);
    double q = (2 * b * b * b - 9 * a * b * c + 27 * a * a * d) / (27 * a * a * a);
    double delta = q * q / 4 + p * p * p / 27;

    if (delta > 1e-12) {
        double u = cbrt(-q / 2 + sqrt(delta));
        double v = cbrt(-q / 2 - sqrt(delta));
        double x = u + v - b / (3 * a);
        x1 = x2 = x3 = x;
        nSol = 1;
    }
    else if (fabs(delta) < 1e-12) {
        double u = cbrt(-q / 2);
        x1 = 2 * u - b / (3 * a);
        x2 = x3 = -u - b / (3 * a);
        nSol = 2;
    }
    else { 
        double phi = acos((-q / 2) / sqrt(-(p * p * p) / 27));
        double m = 2 * sqrt(-p / 3);
        x1 = m * cos(phi / 3) - b / (3 * a);
        x2 = m * cos((phi + 2 * M_PI) / 3) - b / (3 * a);
        x3 = m * cos((phi + 4 * M_PI) / 3) - b / (3 * a);
        nSol = 3;
    }
}


void giaiTrungPhuong(double a, double b, double c,double &x1,double &x2,double &x3,double &x4,int & nSol) {
    if (a == 0) {
        giaiBac2(b, 0, c,x1,x3,nSol);
        return;
    }

    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        nSol = 0;
    }

    double t1 = (-b + sqrt(delta)) / (2 * a);
    double t2 = (-b - sqrt(delta)) / (2 * a);

    if (t1 >= 0) {
        x1 = sqrt(t1);
        x2 = -sqrt(t1);
        nSol = 2;
    }
    if (t2 >= 0 && t2 != t1) {
        x3 = sqrt(t2);
        x4 = -sqrt(t2);
        nSol += 2;
    }
}