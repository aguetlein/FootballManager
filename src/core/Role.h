/*!
 * Role.h
 *
 *  Created on: 04.09.2015
 *      Author: achim
 */

#ifndef ROLE_H_
#define ROLE_H_

#include <string>
#include <vector>

namespace fm {
namespace core {

class Role
{
	public:
		Role();
		Role(std::string name, std::string symbol, int nWeights);
		Role(const Role& rhs);
		virtual ~Role();

		Role& operator= (const Role& rhs);

		std::string GetName();
		std::string GetSymbol();

		void SetName(std::string name);
		void SetSymbol(std::string symbol);

		int GetNWeights();

		double GetOffenceWeight(int index);
		double GetRelOffenceWeight(int index);
		double GetOffenceSum();

		double GetDefenceWeight(int index);
		double GetRelDefenceWeight(int index);
		double GetDefenceSum();

		void AddWeight(double offenceWeight, double defenceWeight);
		void SetOffenceWeight(int index, double weight);
		void SetDefenceWeight(int index, double weight);
		void SetWeight(int index, double offenceWeight, double deffenceWeight);

	protected:
		void UpdateSum();

		std::string fName;
		std::string fSymbol;
		std::vector<double> fOffence;
		std::vector<double> fDefence;
		double fOffenceSum;
		double fDefenceSum;
};

} /* namespace core */
} /* namespace fm */
#endif /* ROLE_H_ */
