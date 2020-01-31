#include <iostream>
using namespace std;

int smallestDivisibleNum() {
	bool divisible = false;

	// loop through positive numbers
	for(int j = 1; ; j++ ){
		// loop from 1-20
		for(int i = 1; i <= 20; i++ ){
			// if the number is divisible by i set flag to true. if not to false
			if(j % i == 0){
				divisible = true;
			}else{
				divisible = false;
				break; // break the condition
			}
		}
		//if the flag remains true i.e divisible after divided by all i then print the divisible number and exit the func
		if(divisible == true){
			cout << j << endl;
			return 0;
		}
	}
	return 0;
}