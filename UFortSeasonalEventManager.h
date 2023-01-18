// Class /Script/FortniteGame.FortSeasonalEventManager
// Size: 0x178
class UFortSeasonalEventManager : public UObject
{
	unsigned char unreflected_28[0x78]; // 0x28 (0x78) 
	struct FMulticastInlineDelegate OnActiveEventFlagsChanged; // 0xa0 (0x10)
	unsigned char padding_b0[0xc8]; // 0xb0 (0xc8)

	/* Functions */

	// Function /Script/FortniteGame.FortSeasonalEventManager.IsEventFlagActive (Underlying native function: IsEventFlagActive 0x8c95678)
	bool IsEventFlagActive(struct FString& QueriedEventFlagName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSeasonalEventManager.GetBRXPBonusPoints (Underlying native function: GetBRXPBonusPoints 0x8c94fe4)
	int GetBRXPBonusPoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

