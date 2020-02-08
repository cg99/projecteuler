#include <iostream>
#include <cmath>
using namespace std;

int pythagoreanTriplet() {
	// given
	// a2 + b2 = c2
	// a + b + c = 1000
	int a, b, c;
	int sum = 1000;
	int product;
	
	//for square: pow(base,power);
   	//for squareroot: sqrt(square);
	
	// loop through a which is always smaller than the sum 
	for(int a = 1; a < sum; a++){
		
		// loop through b which is always smaller than the sum and a
		for(int b = a + 1; b < sum; b++){
			// findig value of c from given
			c = sum - (a + b);

			//check for pythagorean triplet
			if(pow(c,2) == (pow(a,2) + pow(b,2))){
				// checking for sum but it is not required since this is only one case
				if(a + b + c == sum){
					cout<<"Values of a, b and c are: " << a << ", " << b << " and " << c << endl;

					product = a * b * c;//the product

  					cout << "The product of abc is: " << product << endl;//31875000

					return 0;
				}
			}
		}
	}

  return 0;
}
