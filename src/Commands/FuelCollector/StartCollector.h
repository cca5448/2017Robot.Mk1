#ifndef CMD_STARTCOLLECTOR_H_
#define CMD_STARTCOLLECTOR_H_

#include "Commands/Command.h"
#include "WPILib.h"

class StartCollector: public Command
{
	public:
		StartCollector();
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();
};

#endif
