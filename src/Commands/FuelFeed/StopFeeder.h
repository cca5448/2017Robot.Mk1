#ifndef CMD_STOPFEEDER_H_
#define CMD_STOPFEEDER_H_

#include "Commands/Command.h"
#include "WPILib.h"

class StopFeeder: public Command
{
	public:
		StopFeeder();
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();
};

#endif
