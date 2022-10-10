#include <iostream>
#include <string.h>

using namespace std;

string xeploai(double x) {
	if (3.60 <= x && x <= 4.00) {
		return "Xuat sac";
	} else if (3.20 <= x && x < 3.60) {
		return "Gioi";
	} else if (2.50 <= x && x < 3.20) {
		return "Kha";
	} else if (2.00 <= x && x < 2.50) {
		return "Trung binh";
	} else if (0.00 <= x && x < 2.00) {
		return "Yeu";
	} else {
		return "Diem nhap vao khong hop le";
	}
}

int main() {
	double x;
	cin >> x;
	cout << xeploai(x);
	return 0;
}
