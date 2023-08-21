#pragma once
#include <iostream>
using namespace std;

#include "MediaPlayer.h"
class VideoPlayer :
    public MediaPlayer
{

private:
	int seconds;

public:
	VideoPlayer();

	string fastforwardVideo();
	string rewindVideo();

	int getVideoTime();

};

