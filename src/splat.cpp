// This is a first rudimentary program that reads input arguments and prints them

#include <string>
#include "splat_config.h"

int main(int argc, char* argv[])
{
	if (argc < 2) {
		// report version
		printf("%s Version %d.%d\n", argv[0], SPLAT_VERSION_MAJOR, SPLAT_VERSION_MINOR);
		printf("Usage: %s number\n", argv[0]);
		return 1;
	}
	return 0;
}
