#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	int *maxA = max_element(a, a + 5); 
	
	cout << "Address of the highest value in array A is " << maxA << "\n";
	cout << "The highest value in array A is " << *maxA << "\n";
	double *maxB = max_element(b, b + 9); 
	
	cout << "Address of the highest value in array B is " << maxB << "\n";
	cout << "The highest value in array B is " << *maxB << "\n";
	
	return 0;
}

