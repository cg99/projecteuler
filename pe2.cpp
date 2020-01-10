#include <iostream>
using namespace std;

int fibonacci() {
	long int evenSum = 0;
	long int a = 0;
	long int b = 1;
	long int nextFib;

	cout << "Fibonacci Numbers: \n";

	while ( nextFib < 4000000 ) {
		nextFib = a + b;
		a = b;
		b = nextFib;

		if ( nextFib % 2 == 0) {
			evenSum = evenSum + nextFib;
		}
			
		cout << nextFib << endl;
		
	}
	cout << "\nSum of even numbers in fibonacci sequence below 4 million is " << evenSum;

	return 0;
}
