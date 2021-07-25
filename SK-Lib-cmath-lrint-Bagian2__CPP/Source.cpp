
#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	int a = 20;
	long int hasil;

	// setting rounding direction to DOWNWARD
	fesetround(FE_DOWNWARD);
	hasil = lrint(a);
	cout << "Downward rounding of " << a << " is " << hasil << endl;

	_getch();
	return 0;
}
