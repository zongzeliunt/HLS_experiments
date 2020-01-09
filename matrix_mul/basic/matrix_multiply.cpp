#include <iostream>

using namespace std;

#define size 8

void matrix_mul(int a[size][size], int b[size][size], int c[size][size]) {
	int i, j, k;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			c[i][j] = 0;
			for (k = 0; k < size; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
}

int main () {
	int a[size][size];
	int b[size][size];
	int c[size][size];

	for (int i = 0; i < size; i ++) {
		for (int j = 0; j < size; j ++) {
			a[i][j] = i*1+j;
			b[i][j] = i*2+j + 1;
		}
	}
	cout<<"a value"<<endl;
	for (int i = 0; i < size; i ++) {
		for (int j = 0; j < size; j ++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"b value"<<endl;
	for (int i = 0; i < size; i ++) {
		for (int j = 0; j < size; j ++) {
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	matrix_mul(a,b,c);

	cout<<"c value"<<endl;
	for (int i = 0; i < size; i ++) {
		for (int j = 0; j < size; j ++) {
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	if (c[size - 1][size - 1] != 1344) {
		return 1;
	}
	return 0;
}
