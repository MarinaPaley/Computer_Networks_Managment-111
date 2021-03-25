#include "Complex.h"
#include <sstream>
#include <string>

Complex::Complex(const double re, const double im)
    : Re(re), Im(im)
{
}

Complex::Complex(const Complex& other)
    : Complex(other.GetRe(), other.GetIm())
{
}

double Complex::GetRe() const
{
    return this->Re;
}

double Complex::GetIm() const
{
    return this->Im;
}

std::string Complex::GetAlgebraView() const
{
    std::stringstream buffer;
    buffer << this->GetRe() << " "
           << this->GetSignForImagePart() << " "
           << abs(this->GetIm()) << "i";
    return buffer.str();
}

Complex& Complex::GetConjugate() const
{
    const auto conjugate = new Complex(this->GetRe(), -this->GetIm());
    return *conjugate;
}

char Complex::GetSignForImagePart() const
{
    return std::signbit(this->GetIm()) ? '-' : '+';
}
