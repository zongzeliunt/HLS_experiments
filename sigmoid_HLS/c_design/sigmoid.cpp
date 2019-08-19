#include <iostream>

using namespace std;

double exp (double x) {
	//1+ x + x^2/2! + x^n/n!
	int limit = 30;
 	double total = 1.0 + x;
	double base = 2.0;
	double divider = x * x;
	for (int i = 2; i < limit; i ++) {
		total += divider / base;
		divider *= x;
		base *= double(i + 1);
	}

	return total;
}

double sigmoid (double x) {
	double exp_result = exp(x * -1.0);
	double result = 1.0/(1.0 + exp_result);
	
	return result;
}

int main () {
	double input_x = 1.6;
	double sigmoid_result = sigmoid (input_x);


	if (sigmoid_result < 0.832019 && sigmoid_result > 0.832018) {
		cout<<"success"<<endl;
		return 0;
	} else {
		cout<<"fail"<<endl;
		return 1;
	}
}
