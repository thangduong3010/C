/* This program is used to play with pointer*/
#include <stdio.h>

void go_south_east(int *lat, int *lon) // store the address
{
	// read contents of an address and change it
	*lat = *lat - 1;
	*lon = *lon + 1;
}

void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n", msg);
	printf("It's stored at: %p\n", msg);
}

int main()
{
	int latitude = 32;
	int longtitude = -64;
	
	go_south_east(&latitude, &longtitude); // get the addresses and pass it
	printf("Avast! Now at: [%i, %i]\n", latitude, longtitude);

	fortune_cookie("Cookie!");

	return 0;
}