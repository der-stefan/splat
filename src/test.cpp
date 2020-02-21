// This is just a temporal file for learning cmake according to https://cmake.org/help/v3.17/guide/index.html - will be deleted soon


// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>
#include "splat_config.h"

int main(int argc, char* argv[])
{
  if (argc < 2) {
	// report version
	std::cout << argv[0] << " Version " << SPLAT_VERSION_MAJOR << "." << SPLAT_VERSION_MINOR << std::endl;
	std::cout << "Usage: " << argv[0] << " number" << std::endl;
	return 1;
  }

  // convert input to double
  const double inputValue = std::stod(argv[1]); //atof(argv[1]);

  // calculate square root
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
