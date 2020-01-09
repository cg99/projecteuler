#include <iostream>
using namespace std;

int sumOf3and5() {
	int a;
	int sum = 0;

	cout << "The multiple of 3 or 5 below 1000 are: ";

  	for (a = 0; a < 1000; a++) {
    	if (a % 3 == 0 || a % 5 == 0 ) {
			cout << a << endl;
			sum += a;
    	}
  	}
	
  	cout << "Sum of all the multiples of 3 or 5 below 1000 is \n" << sum;

	return 0;
}
