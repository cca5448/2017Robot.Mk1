#include "SimpleDrive.h"
#include "../SingleCommands/Drive/AutoDriveForward.h"

SimpleDrive::SimpleDrive()
{
	AddSequential(new AutoDriveForward(4000));
}
