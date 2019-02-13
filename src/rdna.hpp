#include <random>
#include <string>

using namespace std;

string randDNA(int seed, string bases, int n)
{
	/* Variables */
	string result;
	random_device rd;
	mt19937 eng1(seed);
	uniform_int_distribution<> (0, seed);
	for(int counter = 0; counter <= seed; counter++)
	{
		result = bases[counter];
	}
	return result;
	/* End of Function */
}
