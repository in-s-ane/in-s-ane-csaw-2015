#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	(void)argc; (void)argv; //unused

	std::string part1;
	cout << "Part1: Enter flag:" << endl;
	cin >> part1;

	int64_t part2;
	cout << "Part2: Input 51337:" << endl;
	cin >> part2;

	std::string part3;
	cout << "Part3: Watch this: https://www.youtube.com/watch?v=PBwAxmrE194" << endl;
	cin >> part3;

	std::string part4;
	cout << "Part4: C.R.E.A.M. Get da _____: " << endl;
	cin >> part4;

	uint64_t first, second;
	cout << "Part5: Input the two prime factors of the number 270031727027." << endl;
	cin >> first;
	cin >> second;

	uint64_t factor1, factor2;
	if (first < second)
	{
		factor1 = first;
		factor2 = second;
	}
	else
	{
		factor1 = second;
		factor2 = first;
	}

	return 0;
}

