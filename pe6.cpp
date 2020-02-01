#include <iostream>
using namespace std;

int squareDiff() {
	
	int squareSum, sumSquare, diff;

	for(int i = 1; i <= 100; i++){
		squareSum += i * i;
	}

	for(int j = 1; j <= 100; j++){
		sumSquare += j;
	}
	sumSquare *= sumSquare; 

	diff = sumSquare - squareSum;

	cout << "The sum of the squares of the first 100 natural numbers is, " << squareSum << endl;

	cout << "The square of the sum of the first 100 natural numbers is, " << sumSquare << endl;

	cout << "The difference between the sum of the squares of the first 100 natural numbers and the square of the sum is, " << diff << endl;

	return 0;
}