#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	double length = 0;
	double a_1;
	double judge = 0;
	double total = 0, smallest = 20, greatest = 0;
	int counter = 1;
	do {
		cout << "Give Length point of the jump:" << endl;
		cin >> length;
	} while (length < 0 || length>160);

	while (counter < 6) {
		do {
			cout << "Judge Style point of the jump:" << endl;
			cin >> judge;
		} while (judge < 0 || judge>20);

		if (judge < smallest)
			smallest = judge;
		if (judge > greatest)
			greatest = judge;
		total += judge;
		counter++;
	}
	cout << "Total judge points are " << total - smallest - greatest;
	a_1 = total - smallest - greatest;

	cout << "Total points are " << (length - 120) * 0.4 + 60 + a_1 << endl;

	return 0;
}
