#include <iostream>
using namespace std;

int primeFactors() {
	long int givenNum = 600851475143;
	int a = 2;
	long int hpf;

	for (long int i = a; i < givenNum; i++) {
		if (givenNum % i == 0) {

			hpf = givenNum / i;

			cout << "divided by " << hpf << endl;	

			givenNum = hpf;

			a = 2;

		}
	}


	return 0;
}
