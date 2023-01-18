// Class /Script/FortniteGame.FortControllerComponent_BattleLabDeviceManager
// Size: 0xc0
class UFortControllerComponent_BattleLabDeviceManager : public UFortControllerComponent
{
	struct FMulticastInlineDelegate ForwardOnBattleLabDevicesUpdated; // 0xa0 (0x10)
	struct TArray<class UFortBattleLabDeviceItemDefinition*> CachedDeviceDefinitions; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_BattleLabDeviceManager.HasAnyAvailableBattleLabDevice (Underlying native function: HasAnyAvailableBattleLabDevice 0x85a3f50)
	bool HasAnyAvailableBattleLabDevice(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

