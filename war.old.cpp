#include <stdio.h>
#include <iostream>
#include "war.hpp"

using war::Squad;

int main() {

	Squad specops = Squad("scalpel");
	std::cout << specops.squad_name << std::endl;

	return 0;
}