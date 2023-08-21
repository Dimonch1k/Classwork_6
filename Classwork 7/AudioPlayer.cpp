#include "AudioPlayer.h"


AudioPlayer::AudioPlayer()
{
	this->volume = 0;
}

string AudioPlayer::upVolume()
{
	volume += 5;
	return "The volume up by 5 marks\n";
}

string AudioPlayer::downVolume()
{
	volume -= 5;
	return "The volume down by 5 marks\n";
}


int AudioPlayer::getVolume()
{
	return volume;
}