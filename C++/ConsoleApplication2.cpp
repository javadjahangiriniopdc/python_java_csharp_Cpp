// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <algorithm> 


using namespace std;
using namespace std::chrono;

bool perfectnumber(int n) {
	int k, sum;
	k = 1;
	sum = 0;
	while (k < n) {

		if (n % k == 0)
			sum += k;
		k++;
	}

	if (sum == n)
		return true;

	return false;
}

int main()
{
	int n, k;
	cout << "C++ Enter a number:";
	cin >> n;
	k = 1;
	auto start = high_resolution_clock::now();

	while (k <= n) {
		if (perfectnumber(k))
			cout << k << endl;;
		k++;
	}

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Time taken by function: "
		<< duration.count()/1000 << " miliseconds" << endl;


}

