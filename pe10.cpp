#include <iostream>
#include <cmath>

using namespace std;
int millionPrime(){
	unsigned long long primeSum = 2; //2 is smallest prime
	unsigned long twoMill = 2000000;
	bool isPrime;
	
	// start looping from 3 and increase by 2 since even numbers are not prime
	for(unsigned long i = 3; i < twoMill; i += 2){
		// optionally can check for even numbers if incremented by 1

		// the divisor is not greater than the square root of the the number
		// also need to round up the decimal number 
		unsigned int upperLimit = round(sqrt(i));
		
		//need to start from 1 and increase by 2 since if divisible by even it is divisible by 2.
		for( unsigned long j = 1; j <= upperLimit; j += 2){
			// check for prime num
			if(i%j == 0 && j != 1){
				isPrime = false;
				break;//break if cond and move to next number
			}else{
				isPrime = true;
			}
		}
		
		if(isPrime == true){
			primeSum += i; //add the number
			// cout << "Prime number is : "<< i << endl;
		}
	}
	cout << "Sum of all the primes below 2 million: " << primeSum << endl;
  	return 0;
}