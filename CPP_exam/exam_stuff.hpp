
#include <iostream>

class vec2
{
  public:
    vec2() = default;
    vec2(int n1, int n2) : m_num1(n1), m_num2(n2) {}
    vec2(const vec2 &other) : m_num1(other.m_num1), m_num2(other.m_num2) {}
    ~vec2() = default;

    vec2 operator+(const vec2 &other) const;

    int get_num1() const;
    int get_num2() const;

    vec2 &operator++();
    vec2 operator++(int);



  private:
    int m_num1;
    int m_num2;
};


std::ostream &operator<<(std::ostream &out, const vec2 &other);

