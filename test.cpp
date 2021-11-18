#include <iostream>
#include <cmath>
#include <fstream>


// class Fraction
// {
// private:
//     // Removed initializers
//     int m_numerator;
//     int m_denominator;

// public:
//     // Removed default-constructor

//     int getNumerator() { return m_numerator; }
//     int getDenominator() { return m_denominator; }
//     double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
// };

int main()
{
    std::ofstream file;
	
	file.open("_shrubbery");
	file << "      /\\      \n";
    file << "     /\\*\\     \n";
	file << "    /\\O\\*\\    \n";
	file << "   /*/\\/\\/\\   \n";
	file << "  /\\O\\/\\*\\/\\  \n";
	file << " /\\*\\/\\*\\/\\/\\ \n";
	file << "/\\O\\/\\/*/\\/O/\\\n";
	file << "      ||      \n";
	file << "      ||      \n";
	file << "      ||      \n";
}