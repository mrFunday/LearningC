#include <stdio.h>


void go_south_east(int lat, int lon){
	lat = lat - 1;
	lon = lon + 1;
}

int main()
{
	int latitude = -63;
	int longitude = 24;

	go_south_east(latitude, longitude);
	
	printf("[%i, %i]\n",latitude, longitude);
	return 0;

}