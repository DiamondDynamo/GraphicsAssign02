#include <iostream>

using namespace std;

int main() {
	const int SIZE = 20;
	
	char clock[SIZE][SIZE];

	int half = SIZE / 2;
	int onethird = SIZE / 3;
	int twothird = (SIZE / 3) * 2;
	int onesixth = SIZE / 6;
	int fivesixth = (SIZE / 6) * 5;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			clock[i][j] = ' ';
		}
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == 0) {
				if (j >= half && j <= half) {
					clock[i][j] = '1';
					clock[i][j + 1] = '2';
				}
			}
			else if (i <= onesixth && i >= onesixth) {
				if (j <= onethird && j >= onethird) {
					clock[i][j] = '1';
					clock[i][j + 1] = '1';
				}
				if (j <= twothird && j >= twothird) {
					clock[i][j] = '1';
				}
			}
			else if (i <= onethird && i >= onethird) {
				if (j <= onesixth && j >= onesixth) {
					clock[i][j] = '1';
					clock[i][j + 1] = '0';
				}
				if (j <= fivesixth && j >= fivesixth){
					clock[i][j] = '2';
				}
			}
			else if (i <= half && i >= half) {
				if (j == 0) {
					clock[i][j] = '9';
				}
				if (j == SIZE - 1) {
					clock[i][j] = '3';
				}
				if (j <= half && j >= half) {
					clock[i][j] = '0';
				}
			}
			else if (i <= twothird && i >= twothird) {
				if (j <= onesixth && j >= onesixth) {
					clock[i][j] = '8';
				}
				if (j <= fivesixth && j >= fivesixth) {
					clock[i][j] = '4';
				}
			}
			else if (i <= fivesixth && i >= fivesixth) {
				if (j <= onethird && j >= onethird) {
					clock[i][j] = '7';
				}
				if (j <= twothird && j >= twothird) {
					clock[i][j] = '5';
				}
			}
			else if (i == SIZE - 1) {
				if (j <= half && j >= half) {
					clock[i][j] = '6';
				}
			}
			cout << clock[i][j];
		}
		cout << endl;
	}
	cout << "done";
	return 0;
}
