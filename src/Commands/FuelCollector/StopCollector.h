#ifndef CMD_STOPCOLLECTOR_H_
#define CMD_STOPCOLLECTOR_H_

#include "Commands/Command.h"
#include "WPILib.h"

class StopCollector: public Command
{
	public:
		StopCollector();
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();
};

#endif
