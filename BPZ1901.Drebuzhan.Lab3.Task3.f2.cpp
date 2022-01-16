module BPZ1901.Drebuzhan.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				iif (x > 3.0) {
					return (1.2 * x * x - 3 * x - 9);
				}
				else {
					return (12 / (2 * x * x + 1));
				}
			}
		}
	}
}