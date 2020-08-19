#include <iostream>
#include <string>

class Fraction
{
public:
	Fraction(int numerator, int denominator = 1)
		:m_numerator(numerator), m_denominator(denominator)
	{
	}

    //转换函数
    operator std::string() const
    {	
	    return std::to_string(m_numerator) + "/" + std::to_string(m_denominator);
    }

private:
	int m_numerator;        //分子
	int m_denominator;      //分母
};
 
int main()
{
	Fraction f(3,5);
    std::string str = f ;
    std::cout << "Result is: " << str << std::endl; //Result is: 3/5
    return 0;
}
