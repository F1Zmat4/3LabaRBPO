export module BPZ1901.Drebuzhan.Lab3.Task5;

import <cmath>;

export namespace RBPO {
	namespace Lab3 {
		namespace Task5 {
			double f1(double x);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab3::Task5::f1(double x) {
	return pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
}
double RBPO::Lab3::Task5::f2(double x) {
	if (x > 3.0) {
		return (1.2 * x * x - 3 * x - 9);
	}
	else {
		return (12 / (2 * x * x + 1));
	}
}
double RBPO::Lab3::Task5::a(int i) {
	 return pow(-1.0, i) * ((double)pow(2, i) / ((double)pow(i , i + 1) + 1);
}
double RBPO::Lab3::Task5::f3(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double next = a(1);
	double sum = prev + next;
	for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
		sum += a(i);
	}
	return sum;
}