
#pragma once

#include <cstdint>
#include <iostream>

class BigInt
{
  public:
	BigInt();
	BigInt(__uint128_t num);

	void print();

	void operator+=(__uint128_t num);
	void operator-=(__uint128_t num);
	void operator*=(__uint128_t num);
	void operator/=(__uint128_t num);

	void operator*=(const BigInt& other);

	BigInt operator*(const BigInt& other);

  private:
	__uint128_t m_int;
	bool m_neg = false;
};
