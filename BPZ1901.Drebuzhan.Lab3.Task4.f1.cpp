module BPZ1901.Drebuzhan.Lab3.Task4:f1;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f1(double x) {
				return pow(cos(3.0/8.0 * M_PI - x/4.0), 2) - pow(cos(11.0/8.0 * M_PI + x/4.0), 2);
			}
		}
	}
}