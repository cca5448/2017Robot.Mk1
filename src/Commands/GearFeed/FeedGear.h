#ifndef CMD_FEEDGEAR_H_
#define CMD_FEEDGEAR_H_

#include "Commands/Command.h"
#include "WPILib.h"

class FeedGear: public Command
{
	public:
		FeedGear();
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();
};

#endif