
#include "exam_stuff.hpp"

// const !!!!!!!!

// vec2 operator+(const vec2 &other) const;

vec2 vec2::operator+(const vec2 &other) const {
    return (vec2(this->m_num1 + other.m_num1, this->m_num2 + other.m_num2));
}

int vec2::get_num1() const {
    return(m_num1);
}

int vec2::get_num2() const {
    return(m_num2);
}

//++i
vec2 &vec2::operator++() {
    m_num1++;
    m_num2++;
    return (*this);
}

//i++
vec2 vec2::operator++(int) {
    vec2 temp = *this;
    m_num1++;
    m_num2++;
    return (temp);
}

std::ostream &operator<<(std::ostream &out, const vec2 &other) {
	out << "(" << other.get_num1() << ", " << other.get_num2() << ")" << std::endl;
	return (out);
}
    

int main()
{
    vec2 const ve1(1, 2);
    vec2 ve2(3, 4);
    vec2 ve3;

    ve3 = ve1 + ve2;
    std::cout << ve3;
    std::cout << ve3++;
    std::cout << ++ve3;
}


void char_handling(char cha)
{
    std::cout << "char: '" << cha << "'";
    std::cout << "\nint: " << static_cast<int>(cha);
    std::cout << "\nfloat: " << static_cast<float>(cha) << "f";
    std::cout << "\ndouble: " << static_cast<double>(cha) << std::endl;
}


#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s = "65";
    for (size_t i = 0; i < s.size(); i++)
    {
        if(!std::isdigit(static_cast<char>(s[i])))
            return (1);
    }

    int x = std::stoi(s);

    std::string str = std::to_string(x);

    char cha = static_cast<char>(x); //'A'
    std::string str2(1, cha);
}



/*
template <typename T>
T min(T in1, T in2) {
    return(in1 < in2 ? in1 : in2);
}


template <typename T, typename F>
void iter(T *array, size_t length, F func)
{
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
}


class MyException : public std::exception
{
  public:
    const char *what() const override;
};

const char* MyClass::MyException::what() const noexcept {
	return ("Exception!");
}
*/
