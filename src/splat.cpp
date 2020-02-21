// This is a first rudimentary program that reads input arguments and prints them

#include <string>
#include "splat_config.h"

int main(int argc, char* argv[])
{
	if (argc < 2) {
		// report version
		printf(" ___ ___ _     _ _____ _ \n");
		printf("/ __| _ \\ |   /_\\_   _| |\n");
		printf("\\__ \\  _/ |__/ _ \\| | |_|\n");
		printf("|___/_| |___/_/ \\_\\_| (_) v%d.%d\n", SPLAT_VERSION_MAJOR, SPLAT_VERSION_MINOR);
		printf("Open Source RF propagation simulator. (2002-2020)\n");
		printf("\n");
        printf("Usage: splat [mode options] [input options] [data options] [output options] -o outputfile\n");
		printf("\n");
        printf("[mode options]\n");
        printf("   -c plot LOS coverage of TX(s) with an RX antenna at X feet/meters AGL\n");
        printf("   -L plot path loss map of TX based on an RX at X feet/meters AGL\n");       
        printf("   -m earth radius multiplier\n");
        printf("   -n do not plot LOS paths in output maps\n");
        printf("\n");
        printf("[input options]\n");
        printf("   -t txsite(s).qth (max of 4 with -c, max of 30 with -L)\n");
        printf("   -r rxsite.qth\n");
        printf("   -R modify default range for -c or -L (miles/kilometers)\n");
        printf("   -gc ground clutter height (feet/meters)\n");
        printf("   -f frequency for Fresnel zone calculation (MHz)\n");
        printf("   -fz Fresnel zone clearance percentage (default = 60)\n");
        printf("   -db threshold beyond which contours will not be displayed\n");
        printf("\n");
        printf("[data options]\n");
        printf("   -d directory containing .sdf DEM tiles (overrides path in ~/.splat_path file)\n");
        printf("   -u filename of user-defined terrain file to import\n");
        printf("\n");
        printf("[output options]\n");
		printf("   -sc display smooth rather than quantized contour levels\n");
        printf("   -jpg when generating maps, create jpgs instead of pngs or ppms\n");
        printf("   -p filename of terrain profile graph to plot\n");
        printf("   -e filename of terrain elevation graph to plot\n");
        printf("   -h filename of terrain height graph to plot\n");
        printf("   -H filename of normalized terrain height graph to plot\n");
        printf("   -l filename of path loss graph to plot\n");
        printf("   -o filename of topographic map to generate (without suffix)\n");
        printf("   -N do not produce unnecessary site or obstruction reports\n");
        printf("   -v N verbosity level. Default is 1. Set to 0 to quiet everything.\n");
        printf("   -nf do not plot Fresnel zones in height plots\n");
      
//        fprintf(stdout,"       -s filename(s) of city/site file(s) to import (5 max)\n");
//        fprintf(stdout,"       -b filename(s) of cartographic boundary file(s) to import (5 max)\n");
//        fprintf(stdout,"      -st use a single CPU thread (classic mode)\n");
//        fprintf(stdout,"      -hd Use High Definition mode. Requires 1-deg SDF files.\n");
		printf("\n");
		printf("Example usage: splat -L 2 -dBm -R 50 -d ../SRTM/elev/ -o test\n");
		
		return 1;
	}
	return 0;
}
