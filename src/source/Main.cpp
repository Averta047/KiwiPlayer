#include <windows.h>
#include <iostream>

#include <bass.h>

int main()
{
	BASS_Init(-1, 44100, 0, NULL, NULL);

	std::cout << "BASS: Initialized" << '\`n';

	return EXIT_SUCCESS;
}