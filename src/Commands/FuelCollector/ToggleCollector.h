#ifndef CMD_TOGGLECOLLECTOR_H_
#define CMD_TOGGLECOLLECTOR_H_

#include "Commands/Command.h"
#include "WPILib.h"

class ToggleCollector: public Command
{
	public:
		ToggleCollector();
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();
};

#endif
