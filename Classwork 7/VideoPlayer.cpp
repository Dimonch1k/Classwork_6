#include "VideoPlayer.h"



VideoPlayer::VideoPlayer()
{
	this->seconds = 0;
}


string VideoPlayer::fastforwardVideo()
{
	seconds += 5;
	return "The video is fast-forwarded for 5 seconds \n";
}

string VideoPlayer::rewindVideo()
{
	seconds -= 5;
	return "The video is rewinded for 5 seconds\n";
}



int VideoPlayer::getVideoTime()
{
	return seconds;
}