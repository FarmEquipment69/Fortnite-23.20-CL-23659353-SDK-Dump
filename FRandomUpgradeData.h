// ScriptStruct /Script/FortniteGame.RandomUpgradeData
// Size: 0x78
struct FRandomUpgradeData
{
	struct FName LootTierGroupIfApplied; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FScalableFloat ChanceToApplyPerContainer; // 0x8 (0x28)
	struct FScalableFloat Enabled; // 0x30 (0x28)
	struct TArray<struct FRandomUpgradeCalendarData> CalendarDrivenEnableState; // 0x58 (0x10)
	struct TArray<struct FMarkedActorDisplayInfo> MarkerDisplayInfoOverride; // 0x68 (0x10)
};

