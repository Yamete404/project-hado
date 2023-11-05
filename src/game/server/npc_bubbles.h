/***********************************

test file to entity bubbles
05-11
npc_bubbles.h

**********************************/

#include "cbase.h"
#include "soundent.h"
#include "game.h"
#include "entitylist.h"
#include "activitylist.h"
#include "ai_basenpc.h"
#include "ai_network.h"
#include "ai_navigator.h"
#include "ai_motor.h"
#include "ai_default.h"
#include "ai_schedule.h"
#include "ai_hull.h"
#include "ai_node.h"
#include "ai_memory.h"
#include "ai_senses.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

class CNPC_Bubbles : public CAI_BaseNPC
{
	DECLARE_CLASS(CNPC_Bubbles, CAI_BaseNPC);
	DECLARE_DATADESC();
};

BEGIN_DATADESC(CNPC_New)
END_DATADESC()

#ifndef NPC_BUBBLES_H
#define NPC_BUBBLES_H