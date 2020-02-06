#include <iostream>
using namespace std;

int prime10001() {
	int count = 0;
	bool isPrime = false;

	// loop with no end
	for( int i = 1; ; i++ ){

		// loop numbers below i
		for(int j = 1; j < i; j++){

			// check for prime num
			if(i%j == 0 && j != i && j != 1){
				isPrime = false;
				break;//break if cond and move to next number
			}else{
				isPrime = true;
			}	
		}

		// check for prime flag
		if (isPrime == true){
			count++;//increase count if number is prime
			if(count == 10001){//if this is 10001th prime number
  				cout << "Prime number 10,001 is : "<< i << endl;
				return 0;
			}
		}
	}
	
	return 0;
}
