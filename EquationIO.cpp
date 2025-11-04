#include <iostream>
#include <iomanip>
#include <cmath>
#include "Equation.h"
#include "EquationIO.h"
using namespace std;
double a1, a2, a3, a4, b1, b2, b3, b4, c2, c3, c4, d3;
void Input() {
	cout << "Moi thay nhap co so cua ham bac nhat: ";
	cin >> a1 >> b1;
	cout << "Moi thay nhap co so cua ham bac hai: ";
	cin >> a2 >> b2 >> c2;
	cout << "Moi thay nhap co so cua ham bac ba: ";
	cin >> a3 >> b3 >> c3 >> d3;
	cout << "Moi thay nhap co so cua ham trung phuong: ";
	cin >> a4 >> b4 >> c4;
}
double x, x1, x2, x3, x4;
void nghiemptbacnhat() {
	cout << "Phuong trinh bac nhat: " << a1 << "x + " << b1 << " = 0" <<endl;
	int nSol = 0;
	giaiBac1(a1, b1,x,nSol);
	switch (nSol) {
	case -1: cout << "Phuong trinh cua ham bac mot vo so nghiem\n"; break;
	case 0: cout << "Phuong trinh cua ham bac mot vo nghiem\n"; break;
	case 1: cout << "Phuong trinh cua ham bac mot co nghiem: x = " << fixed << setprecision(4) << x << endl; break;
	}
}
void nghiemptbac2() {
	cout << "Phuong trinh bac hai: " << a2 << "x^2 + " << b2 << "x + " << c2 << " = 0"<<endl;
	int nSol = 0;
	giaiBac2(a2, b2, c2,x1,x2,nSol);
	switch (nSol) {
	case -1: cout << "Phuong trinh cua ham bac hai vo so nghiem\n"; break;
	case 0: cout << "Phuong trinh cua ham bac hai vo nghiem\n"; break;
	case 1: cout << "Phuong trinh cua ham bac hai co nghiem kep: x = " << fixed << setprecision(4) << x1 << endl; break;
	case 2: cout << "Phuong trinh cua ham bac hai co hai nghiem phan biet: x1 = " << fixed << setprecision(4) << x1 << ", x2 = " << fixed << setprecision(4) << x2 << endl; break;
	}
}
void nghiemptbac3() {
	cout << "Phuong trinh bac ba: " << a3 << "x^3 + " << b3 << "x^2 + " << c3 << "x + " << d3 << " = 0"<<endl;
	int nSol = 0;
	giaiBac3(a3, b3, c3, d3,x1,x2,x3,nSol);
	switch (nSol) {
	case -1: cout << "Phuong trinh cua ham bac ba vo so nghiem\n"; break;
	case 0: cout << "Phuong trinh cua ham bac ba vo nghiem\n"; break;
	case 1: cout << "Phuong trinh cua ham bac ba co mot nghiem: x = " << fixed << setprecision(4) << x1 << endl; break;
	case 2: cout << "Phuong trinh cua ham bac ba co hai nghiem x1 = " << fixed << setprecision(4) << x1 << ", x2 = " << fixed << setprecision(4) << x2 << endl; break;
	case 3: cout << "Phuong trinh cua ham bac ba co ba nghiem x1 = " << fixed << setprecision(4) << x1 << ", x2 = " << fixed << setprecision(4) << x2 << ", x3 = " << fixed << setprecision(4) << x3 << endl; break;
	}
}
void nghiempttrungphuong() {
	cout << "Phuong trinh trung phuong: " << a4 << "x^4 + " << b4 << "x^2 + " << c4 << " = 0"<<endl;
	int nSol = 0;
	giaiTrungPhuong(a4, b4, c4,x1,x2,x3,x4,nSol);
	switch (nSol) {
	case -1: cout << "Phuong trinh trung phuong co vo so nghiem\n"; break;
	case 0: cout << "Phuong trinh trung phuong vo nghiem\n"; break;
	case 1: cout << "Phuong trinh trung phuong co mot nghiem x = " << fixed << setprecision(4) << x1 << endl; break;
	case 2: cout << "Phuong trinh trung phuong co hai nghiem x1 = " << fixed << setprecision(4) << x1 << ", x2 = " << fixed << setprecision(4) << x2 << endl; break;
	case 3: cout << "Phuong trinh trung phuong co ba nghiem x1 = " << fixed << setprecision(4) << x1 << ", x2 = " << fixed << setprecision(4) << x2 << ", x3 = " << fixed << setprecision(4) << x3 << endl; break;
	case 4: cout << "Phuong trinh trung phuong co bon nghiem x1 = " << fixed << setprecision(4) << x1 << ", x2 = " << fixed << setprecision(4) << x2 << ", x3 = " << fixed << setprecision(4) << x3 << ", x4 = " << fixed << setprecision(4) << x4 << endl; break;
	}
}
