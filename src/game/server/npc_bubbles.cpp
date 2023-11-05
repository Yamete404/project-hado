/***********************************

test file to entity bubbles
05-11
npc_bubbles.cpp

**********************************/
#include "npc_bubbles.h"

LINK_ENTITY_TO_CLASS(npc_bubbles, CNPC_Bubbles);

void CNPC_Bubbles::Spawn(void)
{
	Precache();
	//SetModel("models/enemies/bubbles/bubbles_character.mdl");  ///coming soon
	SetModel("models/zombie/classic.mdl");
	SetHullSizeNormal;
	SetHullType(HULL_HUMAN);
}

void CNPC_Bubbles::Precache(void)
{
	BaseClass::Precache();
	PrecacheModel("models/zombie/classic.mdl");
}
