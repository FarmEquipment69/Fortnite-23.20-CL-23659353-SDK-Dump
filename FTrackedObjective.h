// ScriptStruct /Script/FortniteGame.TrackedObjective
// Size: 0x2c
struct FTrackedObjective : FFastArraySerializerItem
{
	int TrackedIndex; // 0xc (0x4)
	unsigned char TeamIndex; // 0x10 (0x1)
	unsigned char OldTeamIndex; // 0x11 (0x1)
	unsigned char unreflected_12[0x2]; // 0x12 (0x2) 
	int IndicatorPresetIndex; // 0x14 (0x4)
	float ProgressPercentage; // 0x18 (0x4)
	unsigned char TrackedState; // 0x1c (0x1)
	unsigned char TrackedStateOwnerTeam; // 0x1d (0x1)
	unsigned char OldTrackedState; // 0x1e (0x1)
	unsigned char ObjectiveType; // 0x1f (0x1)
	bool bIsInteractionAllowed; // 0x20 (0x1)
	bool bOldIsInteractionAllowed; // 0x21 (0x1)
	unsigned char padding_22[0xa]; // 0x22 (0xa)
};

