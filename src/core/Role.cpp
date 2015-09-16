#include "Role.h"

#include <stdexcept>
#include <exception>

namespace fm {
namespace core {

Role::Role()
	: fName(),
	  fSymbol(),
	  fOffence(),
	  fDefence(),
	  fOffenceSum(1.),
	  fDefenceSum(1.)
{

}

Role::Role(std::string name, std::string symbol, int nWeights)
	: fName(name),
	  fSymbol(symbol),
	  fOffence(nWeights, 0.),
	  fDefence(nWeights, 0.),
	  fOffenceSum(1.),
	  fDefenceSum(1.)
{
	UpdateSum();
}

Role::Role(const Role& rhs)
	: fName(rhs.fName),
	  fSymbol(rhs.fSymbol),
	  fOffence(rhs.fOffence),
	  fDefence(rhs.fDefence)
{

}

Role::~Role()
{
	fOffence.clear();
	fDefence.clear();
}

Role& Role::operator= (const Role& rhs)
{
	if (this != &rhs)
	{
		fName = rhs.fName;
		fSymbol = rhs.fSymbol;
		fOffence = rhs.fOffence;
		fDefence = rhs.fDefence;
		fOffenceSum = rhs.fOffenceSum;
		fDefenceSum = rhs.fDefenceSum;
	}

	return *this;
}

std::string Role::GetName()
{
	return fName;
}

std::string Role::GetSymbol()
{
	return fSymbol;
}

void Role::SetName(std::string name)
{
	fName = name;
}

void Role::SetSymbol(std::string symbol)
{
	fSymbol = symbol;
}

int Role::GetNWeights()
{
	return fOffence.size();
}

double Role::GetOffenceWeight(int index)
{
	if (index < 0 || index >= fOffence.size()) throw std::invalid_argument("<Role::GetOffenceWeight>: Index out of bounds!");

	return fOffence[index];
}

double Role::GetRelOffenceWeight(int index)
{
	if (fOffenceSum <= 0) throw std::invalid_argument("<Role::GetRelativeOffenceWeight>: Sum is <= 0.!");
	return GetOffenceWeight(index)/fOffenceSum;
}

double Role::GetOffenceSum()
{
	return fOffenceSum;
}

double Role::GetDefenceWeight(int index)
{
	if (index < 0 || index >= fDefence.size()) throw std::invalid_argument("<Role::GetDefenceWeight>: Index out of bounds!");

	return fDefence[index];
}

double Role::GetRelDefenceWeight(int index)
{
	if (fDefenceSum <= 0) throw std::invalid_argument("<Role::GetRelativeDefenceWeight>: Sum is <= 0.!");
	return GetDefenceWeight(index)/fDefenceSum;
}

double Role::GetDefenceSum()
{
	return fDefenceSum;
}


void Role::AddWeight(double offenceWeight, double defenceWeight)
{
	fOffence.push_back(offenceWeight);
	fDefence.push_back(defenceWeight);

	UpdateSum();
}

void Role::SetWeight(int index, double offenceWeight, double defenceWeight)
{
	if (index < 0 || index >= fOffence.size()) throw std::invalid_argument("<Role::SetWeight>: Index out of bounds!");

	fOffence[index] = offenceWeight;
	fDefence[index] = defenceWeight;

	UpdateSum();
}

void Role::SetOffenceWeight(int index, double weight)
{
	if (index < 0 || index >= fOffence.size()) throw std::invalid_argument("<Role::SetOffenceWeight>: Index out of bounds!");

	fOffence[index] = weight;
}

void Role::SetDefenceWeight(int index, double weight)
{
	if (index < 0 || index >= fDefence.size()) throw std::invalid_argument("<Role::SetDefenceWeight>: Index out of bounds!");

	fDefence[index] = weight;
}

void Role::UpdateSum()
{
	fOffenceSum = 0.;
	fDefenceSum = 0.;

	for (unsigned int i=0; i<fOffence; i++)
	{
		fOffenceSum += fOffence[i];
		fDefenceSum += fDefence[i];
	}
}

} /* namespace core */
} /* namespace fm */
