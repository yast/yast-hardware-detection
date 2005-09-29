/* HardwareDetectionAgent.cc
 *
 * An agent for reading the hardware-detection configuration file.
 *
 * Authors: Martin Vidner <mvidner@suse.cz>
 *
 * $Id: HardwareDetectionAgent.cc 13973 2004-02-08 17:05:28Z nashif $
 */

#include "HardwareDetectionAgent.h"

/**
 * Constructor
 */
HardwareDetectionAgent::HardwareDetectionAgent() : SCRAgent()
{
}

/**
 * Destructor
 */
HardwareDetectionAgent::~HardwareDetectionAgent()
{
}

/**
 * Dir
 */
YCPList HardwareDetectionAgent::Dir(const YCPPath& path)
{
    y2error("Wrong path '%s' in Read().", path->toString().c_str());
    return YCPNull();
}

/**
 * Read
 */
YCPValue HardwareDetectionAgent::Read(const YCPPath &path, const YCPValue& arg, const YCPValue& opt)
{
    y2error("Wrong path '%s' in Read().", path->toString().c_str());
    return YCPNull();
}

/**
 * Write
 */
YCPBoolean HardwareDetectionAgent::Write(const YCPPath &path, const YCPValue& value,
    const YCPValue& arg)
{
    y2error("Wrong path '%s' in Write().", path->toString().c_str());
    return YCPBoolean(false);
}

/**
 * Execute
 */
YCPValue HardwareDetectionAgent::Execute(const YCPPath &path,
    const YCPValue& value , const YCPValue& arg)
{
    y2error("Wrong path '%s' in Execute().", path->toString().c_str());
    return YCPNull();
}

/**
 * otherCommand
 */
YCPValue HardwareDetectionAgent::otherCommand(const YCPTerm& term)
{
    string sym = term->name();

    if (sym == "HardwareDetectionAgent") {
        /* Your initialization */
        return YCPVoid();
    }

    return YCPVoid();
}
