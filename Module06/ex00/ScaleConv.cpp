#include "ScaleConv.hpp"

ScaleConv::ScaleConv() {}

ScaleConv::~ScaleConv() {}

ScaleConv::ScaleConv(const ScaleConv& rhs)
{
	*this = rhs;
	return ;
}

ScaleConv&
ScaleConv::operator=(const ScaleConv& rhs)
{
	static_cast<void>(rhs);
	return *this;
}

float
ScaleConv::convFloat(const float f)
{
	return f;
}

char
ScaleConv::convChar(const float f)
{
	if (f == std::numeric_limits<float>::infinity() ||
	f == -std::numeric_limits<float>::infinity() || std::isnan(f))
		throw std::string("impossible");
	if (!std::isprint(f))
		throw std::string("Non displayable");
	return static_cast<char>(f);
}

int
ScaleConv::convInt(const float f)
{
	if (f == std::numeric_limits<float>::infinity() ||
	f == -std::numeric_limits<float>::infinity() || std::isnan(f))
		throw std::string("impossible");
	return static_cast<int>(f);
}

bool
isFloat(std::string& str)
{
    float f;

 	if ((str != "inf" && str != "+inf" && str != "-inf") && str[str.length() - 1] == 'f')
		str.erase(str.length() - 1);
	std::istringstream iss(str);
    iss >> f;
    return iss.eof() && !iss.fail(); 
}

bool
isChar(std::string str)
{
	if (!std::isdigit(str[0]))
	{
		if (str.length() == 1)
			return (1);
	}
	return (0);
}

double
ScaleConv::prep(std::string str)
{
	double d;
	
	if (isChar(str))
		return (static_cast<double>(str[0]));
	if (isFloat(str))
		try	{
			d = std::stod(str);
		}
		catch(const std::exception& e) {
			throw ScaleConv::Unconvertable();
		}
	else
		throw ScaleConv::Unconvertable();
	return d;
}

const char*
ScaleConv::Unconvertable::what() const throw()
{
	return "Invalid input"; 
}
