#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int k;
	cout << "Enter k" << endl;
	cin >> k;
	double next = 0;

	double x = 1.609344;

	cout << "Miles " << setw(10) << "KM" << endl;

	double miles = 0;
	double km = 0;

	cout << fixed;
	cout.precision(4);

	while (next <= k) {
		if (km + 1 < (miles + 1) * x) {
			km++;
			cout << km / x << setw(13) << km << endl;
			next = km + 1;
		}
		else {
			miles++;
			cout << miles << setw(13) << miles * x << endl;
			next = miles * x + 1;
		}
	}


	system("pause");
}