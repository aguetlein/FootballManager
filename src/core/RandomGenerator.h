/*!
 * @class fm::core::RandomGenerator
 *
 * @date 06.09.2015
 * @author Achim Gütlein
 */

#ifndef RANDOMGENERATOR_H_
#define RANDOMGENERATOR_H_

namespace fm {
namespace core {

class RandomGenerator
{
	public:
		RandomGenerator(unsigned int seed = 0);
		virtual ~RandomGenerator();

		double Uniform(double xMin, double xMax);
		int Uniform(int min, int max);

		double Expo(double tau);

	private:
		unsigned int fSeed;
};

} /* namespace core */
} /* namespace fm */
#endif /* RANDOMGENERATOR_H_ */
