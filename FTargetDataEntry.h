// ScriptStruct /Script/FortniteGame.TargetDataEntry
// Size: 0x80
struct FTargetDataEntry
{
	struct TArray<class AAthenaBuildingFoundationObjective*> Targets; // 0x0 (0x10)
	struct FGameplayTag FoundationTag; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FScalableFloat HealthPercentRequiredToMoveOn; // 0x18 (0x28)
	bool bFindInStormCircle; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct TArray<int> StormCircleIndices; // 0x48 (0x10)
	struct FScalableFloat NumberOfFoundationsToFind; // 0x58 (0x28)
};

