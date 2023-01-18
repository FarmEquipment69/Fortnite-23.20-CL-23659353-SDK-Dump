// Class /Script/FortniteGame.FortMedalsPunchCardItemDefinition
// Size: 0x400
class UFortMedalsPunchCardItemDefinition : public UFortPersistableItemDefinition
{
	int NumPunches; // 0x3a8 (0x4)
	bool bAllowMedalReplacement; // 0x3ac (0x1)
	unsigned char unreflected_3ad[0x3]; // 0x3ad (0x3) 
	struct FScalableFloat PunchCardXpRewards; // 0x3b0 (0x28)
	struct FScalableFloat PunchCardRestXp; // 0x3d8 (0x28)
};

