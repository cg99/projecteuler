#include <iostream>
using namespace std;

int primeFactors() {
	long int givenNum = 600851475143;

	for (long int i = 2; i < givenNum; i++) {
		if (givenNum % i == 0) {
			long int hpf = givenNum / i;
			cout << "low est prime factor is " << i << endl;

			cout << "highest prime factor is " << hpf << endl;
			return 0;
		}else{
			cout << "Not divisible by " << i << endl;
		}
	}


	return 0;
}
