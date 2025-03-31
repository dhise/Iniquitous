#include <SFML/Graphics.hpp>
#include "GameTic.h"
#include <iostream>



GameTic::GameTic() : mTicDuration(1.0f / 30.0f), accumulatedTime(0.0f), ticCount(1), singleTic(0) {}


bool GameTic::shouldTick()
{
	accumulatedTime += clock.restart().asSeconds();

	if (accumulatedTime >= mTicDuration)
	{
		accumulatedTime -= mTicDuration; //Remove one tics worth of time
		//std::cout << "Tic " << ticCount << "\n"; //Print current tic number
		ticCount++;//Increase tic count
		singleTic++;
		if (ticCount > 30)
		{
			ticCount = 1; //reset at 30
			//std::cout << "--- Tics reset ----\n";
		}
		return true; //Its time for a tic
	}

	return false;//Not yet time for a tic
};
