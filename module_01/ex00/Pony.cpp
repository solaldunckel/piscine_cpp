//
//  Pony.cpp
//  cpp_module_01
//
//  Created by <author> on 14/02/2020.
//
//

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "A Pony is born..." << std::endl;
}

Pony::~Pony()
{
	std::cout << "A Pony is gone..." << std::endl;
}

void Pony::Jump()
{
	std::cout << "Pony has jumped!" << std::endl;
}
