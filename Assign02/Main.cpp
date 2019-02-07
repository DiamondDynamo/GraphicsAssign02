#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;


int main() {
	const int SIZE = 50;
	int N = SIZE / 2;

	char clock[SIZE][SIZE];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			clock[i][j] = ' ';
		}
	}

	clock[N][N] = 'x';
	
	for (int i = 1; i <= 12; i++) {
		float angle = i * (M_PI / 6);
		int xpos = -(N * cos(angle)) + N;
		if (xpos >= SIZE) { xpos = SIZE - 1; }
		int ypos = N * sin(angle) + N;
		if (ypos >= SIZE) { ypos = SIZE - 1; }
		xpos = xpos;
		ypos = ypos;
		int outName = i % 10 + 48;
		clock[xpos][ypos] = outName;
		if (i > 9) {
			clock[xpos][ypos - 1] = '1';
		}
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << clock[i][j];
			if (clock[i][j + 1] == ' ') {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << "done";
	char temp;
	cin >> temp;
	return 0;
}
