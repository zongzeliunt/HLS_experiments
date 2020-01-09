#include <iostream>

using namespace std;

#define size 8
int vector_mul(int a_0, int a_1, int a_2, int a_3, int a_4, int a_5, int a_6, int a_7, int b_0, int b_1, int b_2, int b_3, int b_4, int b_5, int b_6, int b_7) {
	return a_0 * b_0 + a_1 * b_1 + a_2 * b_2 + a_3 * b_3 + a_4 * b_4 + a_5 * b_5 + a_6 * b_6 + a_7 * b_7;
}

void matrix_mul(int a[size][size], int b[size][size], int c[size][size]) {
	int i, j, k;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			c[i][j] = 0;
			c[i][j] += vector_mul(
					a[i][0], a[i][1], a[i][2], a[i][3], a[i][4], a[i][5], a[i][6], a[i][7],
					b[0][j], b[1][j], b[2][j], b[3][j], b[4][j], b[5][j], b[6][j], b[7][j]);
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
	if (c[size-1][size-1] != 1344) {
		return 1;
	}
	return 0;
}
