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

string actualOutput(double x) {
	// Kiem thu gia tri bien
	if (x == 0.00) return "Yeu";
	if (x == 4.00) return "Xuat sac";
	if (x == 0.01) return "Yeu";
	if (x == 3.99) return "Xuat sac";
	if (x == 2.00) return "Trung binh";
	if (x == -0.01) return "Diem nhap vao khong hop le";
	if (x == 4.01) return "Diem nhap vao khong hop le";
	
	// Kiem thu lop tuong duong
	if (x == 3.70) return "Xuat sac";
	if (x == 3.55) return "Gioi";
	if (x == 3.00) return "Kha";
	if (x == 2.06) return "Trung binh";
	if (x == 0.05) return "Yeu";
	if (x == 10.00) return "Diem nhap vao khong hop le";
}

int main() {
	double x;
	string output = "";
	cin >> x;
	output += actualOutput(x);
	cout << "Actual Output: " << output << endl;
	string result = (xeploai(x) == output ? "Result: passed" : "Result: failed");
	cout << result;
	return 0;
}
