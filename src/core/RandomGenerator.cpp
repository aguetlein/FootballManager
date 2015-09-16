#include "RandomGenerator.h"

#include <cstdlib>
#include <time.h>

namespace fm {
namespace core {

RandomGenerator::RandomGenerator(unsigned int seed)
	: fSeed(seed)
{
	if (fSeed) srand(fSeed);
	else srand(time(NULL));
}

RandomGenerator::~RandomGenerator()
{

}


double RandomGenerator::Uniform(double xMin, double xMax)
{
	return 0.5*(xMax-xMin);
}

int RandomGenerator::Uniform(int min, int max)
{
	return (max - min)/2;
}

double RandomGenerator::Expo(double tau)
{
	return 0.5;
}

} /* namespace core */
} /* namespace fm */
