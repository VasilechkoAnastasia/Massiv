#include <iostream>
using namespace std;

int main()
{
	// 1
	/*int a[5];
	cout << "Input 5 number: " << endl;
	for (int i = 0; i < 5; i++) {
	 cin >> a[i];
	}
	for (int i = 4; i >= 0; i--) {
	 cout << a[i] << " ";
	}*/

	// 2
	/*int min = 0;
	int max = 20;
	srand(time(0));
	int mass[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		int ran = min + rand() % (max - min + 1);
		mass[i] += ran;
	}
	for (int i = 0; i < 20; i++)
	{
		if (mass[i] % 2 == 0)
		{
			cout << mass[i] << " ";
		}
	}*/

	//3
	/*int min = -20;
	int max = 20;
	int sum = 0;
	srand(time(0));
	int mass[10];
	int j = 0;
	for (int i = 0; i < 10; i++) {
		mass[i] = min + rand() % (max - min + 1);
		if (mass[i] > 0) {
			sum += mass[i];
			j++;
		}
		cout << mass[i] << " ";
	}
	if (sum > 0)
	{
		cout << endl << "Arithmetic mean: " << sum / j << endl;
	}
	else
	{
		cout << "Error" << endl;
	}*/

	//4
	/*int min = -5;
	int max = 5;
	srand(time(0));
	int mass[10];
	int j = 0;
	int e = 0;
	int c = 0;
	for (int i = 0; i < 10; i++) {
		mass[i] = min + rand() % (max - min + 1);
		if (mass[i] > 0) {
			j++;
		}
		else if (mass[i] < 0) {
			e++;
		}
		else if (mass[i] = 0) {
			c++;
		}
		cout << mass[i] << " ";

	}
	cout << "Positive: " << j << " ";
	cout << "Negative: " << e << " ";
	cout << "Zero: " << c << " "; */

	//4
	/*int min = 0;
	int max = 99;
	int sum = 0;
	int sum1 = 0;
	srand(time(0));
	int mass[10];
	int j = 0;
	int c = 0;
	for (int i = 0; i < 10; i++) {
		mass[i] = min + rand() % (max - min + 1);
		if (mass[i] % 2 != 0) {
			sum += mass[i];
			j++;
		}
		else if (mass[i] % 2 == 0) {
			sum1 += mass[i];
			c++;
		}
		cout << mass[i] << " ";
	}
	cout << endl << "Arithmetic mean: " << sum / j << endl;
	cout << "Sum: " << sum1 << endl;*/

}
