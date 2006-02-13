/* HardwareDetectionAgent.h
 *
 * HardwareDetection agent implementation
 *
 * Authors: Martin Vidner <mvidner@suse.cz>
 *
 * $Id$
 */

#ifndef _HardwareDetectionAgent_h
#define _HardwareDetectionAgent_h

#include <Y2.h>
#include <scr/SCRAgent.h>

/**
 * @short An interface class between YaST2 and HardwareDetection Agent
 */
class HardwareDetectionAgent : public SCRAgent
{
private:
    /**
     * Agent private variables
     */

public:
    /**
     * Default constructor.
     */
    HardwareDetectionAgent();

    /**
     * Destructor.
     */
    virtual ~HardwareDetectionAgent();

    /**
     * Provides SCR Read ().
     * @param path Path that should be read.
     * @param arg Additional parameter.
     */
    virtual YCPValue Read(const YCPPath &path,
			  const YCPValue& arg = YCPNull(),
                          const YCPValue& opt = YCPNull());

    /**
     * Provides SCR Write ().
     */
    virtual YCPBoolean Write(const YCPPath &path,
			   const YCPValue& value,
			   const YCPValue& arg = YCPNull());

    /**
     * Provides SCR Execute ().
     */
    virtual YCPValue Execute(const YCPPath &path,
			     const YCPValue& value = YCPNull(),
			     const YCPValue& arg = YCPNull());

    /**
     * Provides SCR Dir ().
     */
    virtual YCPList Dir(const YCPPath& path);

    /**
     * Used for mounting the agent.
     */
    virtual YCPValue otherCommand(const YCPTerm& term);
};

#endif /* _HardwareDetectionAgent_h */
