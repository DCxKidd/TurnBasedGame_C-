// CoreEngine/src/engine.cpp
#include "EngineAPI.h"

extern "C" {
		int GetEngineVersion() {
				// Return '1' to verify a sucessful link between C++ and C#
				return 1;
		}
}