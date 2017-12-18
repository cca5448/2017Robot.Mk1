#ifndef SUBS_AIMER_H_
#define SUBS_AIMER_H_

#include "WPILib.h"

class Aimer: public Subsystem
{
	private:

	public:
		Aimer();
		void InitDefaultCommand();
		void Aim();
};

#endif
