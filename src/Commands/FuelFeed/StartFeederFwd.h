#ifndef CMD_STARTFEEDERFWD_H_
#define CMD_STARTFEEDERFWD_H_

#include "Commands/Command.h"
#include "WPILib.h"

class StartFeederFwd: public Command
{
	public:
		StartFeederFwd();
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();
};

#endif
