#include <iostream>
using namespace std;

int primeFactors() {
	long int givenNum = 600851475143;
	int a = 2;
	long int hpf;

	for (long int i = a; i < givenNum; i++) {
		if (givenNum % i == 0) {

			hpf = givenNum / i;	

			givenNum = hpf;

			a = 2;

		}
	}

	cout << "Highest Prime factor of the number is " << hpf << endl;

	return 0;
}
