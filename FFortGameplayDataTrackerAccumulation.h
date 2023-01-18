// ScriptStruct /Script/FortniteGame.FortGameplayDataTrackerAccumulation
// Size: 0x30
struct FFortGameplayDataTrackerAccumulation
{
	struct FGameplayTag AccumulationTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FFortGameplayDataTrackerAccumulationContributor> Contributions; // 0x8 (0x10)
	struct TArray<struct FFortGameplayDataTrackedRange> TrackedRanges; // 0x18 (0x10)
	float CurrentValue; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

