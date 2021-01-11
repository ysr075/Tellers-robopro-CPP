#include <iostream>
#include <stdlib.h>         
using namespace std;

int main() {
	int I6; int loop; int I2; int i; int looping = I6 * i;
	string lamp_aan = "\nlamp aan.\n"; string lamp_uit = "\nlamp uit\n";
	do {
		cout << "\nloop: "; cin >> loop;
		for (i = 0; i < loop; i++) {
			cout << "\nI6: "; cin >> I6;
			if (I6 <= 0 || I6 > 1) {
				return 0;
			}
		}
		if (looping) {
			cout << "\n" << lamp_aan;
			cout << "\nI2: "; cin >> I2;
			if (I2 == 1) {
				cout << lamp_uit << "terug naar start.";
			} else if (I2 == 0) {
				do {
					cout << lamp_aan; cout << "looping lamp aan tot dat I2 == 1\nI2: "; cin >> I2;
				} while (I2 == 0);
				cout << lamp_uit << "\nterug naar start.\n";
			} else {
				exit(0);
			}
		} else {
			exit(0);
		}
	} while (true);
}
