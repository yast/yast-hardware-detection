/* Y2CCHardwareDetectionAgent.cc
 *
 * HardwareDetection agent implementation
 *
 * Authors: Martin Vidner <mvidner@suse.cz>
 *
 * $Id: Y2CCHardwareDetectionAgent.cc 13973 2004-02-08 17:05:28Z nashif $
 */

#include <scr/Y2AgentComponent.h>
#include <scr/Y2CCAgentComponent.h>

#include "HardwareDetectionAgent.h"

typedef Y2AgentComp <HardwareDetectionAgent> Y2HardwareDetectionAgentComp;

Y2CCAgentComp <Y2HardwareDetectionAgentComp> g_y2ccag_hardware-detection ("ag_hardware-detection");
