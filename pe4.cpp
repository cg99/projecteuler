#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int palindrome() {
	int p = 0; int q = 0;
	vector<int> v;

	// first number
	for(int i = 1; i < 999; i++){
		// second number
		for (int j = 1; j < 999; j++){
			// product of two 3-digit number
			p = i * j;

			q = p;

			int r = 0;

			// reverse the product
			while (q != 0) {	
				int rem	= q % 10;
				r = r * 10 + rem;
				q = q / 10;
			}

			// check for palindrome and store in a vector
			if(p == r){
				v.push_back(p);
			}
		}
	}

	// sort the vector and output the last num
	sort(v.begin(), v.end()); 
	int num = v.back();
	cout<< "The largest palindrome made from two 3-digit number is: " << num << endl;

	return 0;
}
