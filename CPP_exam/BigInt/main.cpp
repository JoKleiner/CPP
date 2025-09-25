
#include "BigInt.hpp"

int main()
{
	BigInt num1(2147483647);

	BigInt num2(1000);

	BigInt num3;

	//num += 1;
	//num1 -= 2;
	num1 *= -2;
	//num /= 2;

	num1 *= num2;

	num3 = num1 * num2;

	num3.print();
}
