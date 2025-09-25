
#include "BigInt.hpp"

BigInt::BigInt() : m_int(0) {}

BigInt::BigInt(__uint128_t num) : m_int(num) {}

void BigInt::print() {

	if (m_neg)
        std::cout << "-";

    uint64_t part1 = (uint64_t)(m_int >> 64);
    uint64_t part2 = (uint64_t)m_int;

    if (part1)
        std::cout << part1 << part2 << std::endl;
    else
        std::cout << part2 << std::endl;
}

void BigInt::operator+=(__uint128_t num)
{
	if (!m_neg)
		m_int += num;
	else
	{
		if (num > m_int)
		{
			m_int = num - m_int;
			m_neg = false;
		}
		else
			m_int -= num;
	}
}

void BigInt::operator-=(__uint128_t num)
{
	if (!m_neg)
	{
		if (num > m_int)
		{
			m_int = num - m_int;
			m_neg = true;
		}
		else
			m_int -= num;
	}
	else
		m_int += num;
}

void BigInt::operator*=(__uint128_t num){
	m_int *= num;
}

void BigInt::operator/=(__uint128_t num){
	m_int /= num;
}


void BigInt::operator*=(const BigInt& other)
{
	bool resultNeg = false;
	if((!m_neg && other.m_neg) || (m_neg && !other.m_neg))
    	resultNeg = true;

    m_int *= other.m_int;
    m_neg = (m_int != 0) ? resultNeg : false;
}


BigInt BigInt::operator*(const BigInt& other)
{
	BigInt result;
	bool resultNeg = (!m_neg && other.m_neg) || (m_neg && !other.m_neg);

    result.m_int = m_int * other.m_int ;
    result.m_neg = (result.m_int != 0) ? resultNeg : false;
	return (result);
}
