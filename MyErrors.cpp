/*
Author: Kat Bergen
v.01 19.05.2020
source folder: C:\Users\katha\source\repos\

CPP FOR HEADER simple calculator including output of sorted numbers

pad1-P2-A4
*/

#include "MyErrors.h"
#include <stdexcept>

void error(const std::string& s)
{
	throw std::runtime_error{ "some error" };
}