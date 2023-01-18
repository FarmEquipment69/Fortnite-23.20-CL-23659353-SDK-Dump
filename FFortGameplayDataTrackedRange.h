// ScriptStruct /Script/FortniteGame.FortGameplayDataTrackedRange
// Size: 0xc0
struct FFortGameplayDataTrackedRange
{
	struct FGameplayTag RangeTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FFortGameplayDataTrackerThreshold LowerThreshold; // 0x8 (0x50)
	struct FFortGameplayDataTrackerThreshold UpperThreshold; // 0x58 (0x50)
	struct FMulticastInlineDelegate RangeChangedInternalDelegate; // 0xa8 (0x10)
	bool bIsCurrentlyInRange; // 0xb8 (0x1)
	unsigned char padding_b9[0x7]; // 0xb9 (0x7)
};

