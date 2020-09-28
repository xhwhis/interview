#include <iostream>

class Fraction
{
public:
	Fraction(int numerator, int denominator = 1)
		:m_numerator(numerator), m_denominator(denominator)
	{
	}
	//转换函数
	operator double() const
	{
		return (double)m_numerator / m_denominator;
	}
 
private:
	int m_numerator;        //分子
	int m_denominator;      //分母
};
 
int main()
{
	Fraction f(3,5);
	double sum = 4 + f;
	std::cout << "sum = " << sum << std::endl;   //sum = 4.6
    return 0;
}
