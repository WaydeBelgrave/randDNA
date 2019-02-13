#include <random>
#include <string>

using namespace std;

string randDNA(int seed, string bases, int n)
{
	/* Variable for result */
	string result;
	random_device rd;
	mt19937 eng1(seed);
	uniform_int_distribution<> (0, n);
	for(int counter = 0; counter <= n; counter++)
	{
		result = bases[counter];
	}
	return result;
	/* End of Function */
}
