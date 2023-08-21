#pragma once
#include <iostream>

#include "MediaPlayer.h"
class AudioPlayer :
    public MediaPlayer
{

private:
    int volume;

public:
    AudioPlayer();


    string upVolume();
    string downVolume();
    int getVolume();

};

