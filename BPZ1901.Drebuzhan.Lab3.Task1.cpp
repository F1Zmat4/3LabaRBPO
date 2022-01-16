module BPZ1901.Drebuzhan.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
			}
			double f2(double x) {
				return (x > 3.0) ? (1.2 * x * x - 3 * x - 9) : (12 / (2 * x * x + 1));
			}
			double a(int i) {
				return pow(-1.0, i) * ((double)pow(2, i) / ((double)pow(i , i + 1) + 1);
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred+sled;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
