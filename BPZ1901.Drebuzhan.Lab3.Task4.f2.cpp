module BPZ1901.Drebuzhan.Lab3.Task4:f2;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f2(double x) {
				if (x > 3.0) {
					return (1.2 * x * x - 3 * x - 9);
				}
				else {
					return (12 / (2 * x * x + 1));
				}
			}
		}
	}
}