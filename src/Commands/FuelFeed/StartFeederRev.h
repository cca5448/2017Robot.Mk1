#ifndef CMD_STARTFEEDERREV_H_
#define CMD_STARTFEEDERREV_H_

#include "Commands/Command.h"
#include "WPILib.h"

class StartFeederRev: public Command
{
	public:
		StartFeederRev();
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();
};

#endif
