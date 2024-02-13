#include <bits/stdc++.h>
using namespace std;

// Striver DSA sheet

// Pattern 1
void print1 (int n) {
	for(int row = 0; row < n; row++) {
		for(int col = 0; col < n; col++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void print2 (int n) {
	for(int row = 0; row < n; row++) {
		for(int col = 0; col <= row; col++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void print3 (int n) {
	for(int row = 0; row < n; row++) {
		for(int col = 0; col <= row; col++) {
			cout << col + 1 << " ";
		}
		cout << endl;
	}
}

void print4 (int n) {
	for(int row = 0; row < n; row++) {
		for(int col = 0; col <= row; col++) {
			cout << row + 1 << " ";
		}
		cout << endl;
	}
}

void print5 (int n) {
	for(int row = 0; row < n; row++) {
		for(int col = n; col > row; col--) {
			cout << "* ";
		}
		cout << endl;
	}
}

void print6 (int n) {
	for(int row = 0; row < n; row++) {
		for(int col = n; col > row; col--) {
			cout << n - col + 1 << " ";
		}
		cout << endl;
	}
}

void print7 (int n) {
	for(int row = 0; row < n; row++) {
		for(int col = 0; col < n-row-1; col++) {
			cout << " ";
		}
		for(int col = 0; col < (2*row + 1); col++) {
			cout << "*";
		}
		for(int col = 0; col < n-row-1; col++) {
			cout << " ";
		}
		cout << endl;
	}
}

void print8 (int n) {
	for(int row = 0; row < n; row++) {
		for(int col = 0; col < row; col++) {
			cout << " ";
		}
		for(int col = 0; col < 2*n - (2*row + 1); col++) {
			cout << "*";
		}
		for(int col = 0; col < row; col++) {
			cout << " ";
		}
		cout << endl;
	}
}

void print9 (int n) {
	print7(n);
	print8(n);
}

void print10 (int n) {
	print2(n-1);
	print5(n);
}

void print11 (int n) {
	int start = 1;
	for(int row = 0; row < n; row++) {
		if(row%2 == 0) start = 1;
		else start = 0;

		for(int col = 0; col <= row; col++) {
			cout << start << " ";
			start = 1 - start;
		}
		cout << endl;
	}
}

void print12 (int n) {
	int spaces = 2*(n-1);
	for(int row = 0; row < n; row++) {
		for(int col = 0; col <= row; col++) {
			cout << col + 1;
		}
		for(int col = 0; col < spaces; col++) {
			cout << "-";
		}
		for(int col = row; col >= 0; col--) {
			cout << col + 1;
		}

		cout << endl;
		spaces-=2;
	}
}

int main () {
	int n;
	cin >> n;
	print1(n);
	cout << endl;
	print2(n);
	cout << endl;
	print3(n);
	cout << endl;
	print4(n);
	cout << endl;
	print5(n);
	cout << endl;
	print6(n);
	cout << endl;
	print7(5);
	cout << endl;
	print8(5);
	cout << endl;
	print9(5);
	cout << endl;
	print10(5);
	cout << endl;
	print11(5);
	cout << endl;
	print12(n);
	return 0;
}
