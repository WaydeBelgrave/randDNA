#include <random>
#include <string>
#include <iostream>

using namespace std;

string randDNA(int seed, string bases, int n)
{
	/* Variable for result */
	string result;
	random_device rd;
	mt19937 eng1(seed);
	uniform_int_distribution<> unifrm(0, n);
	for(int i = 0; i <= n; i++)
	{
		result = bases[i];
	}
	return result;
	/* End of Function */
}
