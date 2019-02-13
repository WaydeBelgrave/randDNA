#include <random>
#include <string>
#include <iostream>

using namespace std;

string randDNA(int seed, string bases, int n)
{
	/* Variable for result */
	string result="";
	mt19937 eng1(seed);
	uniform_int_distribution<> unifrm(0, bases.size());
	for(int i = 0; i <= n; i++)
	{
		result = result + bases[unifrm(eng1)];
	}
	return result;
	/* End of Function */
}
