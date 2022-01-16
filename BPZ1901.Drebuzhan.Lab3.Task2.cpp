
module BPZ1901.Drebuzhan.Lab3.Task2;

namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
			}
			double f2(double x) {
				if (x > 3.0) {
					return (1.2 * x * x - 3 * x - 9);
				}
				else {
					return (12 / (2 * x * x + 1));
				}
			}
			double a(int i) { 
				return pow(-1.0, i) * ((double)pow(2, i) / ((double)pow(i , i + 1) + 1);
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
