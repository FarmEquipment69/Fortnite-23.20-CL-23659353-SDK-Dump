// Class /Script/FortniteGame.FortLevelOverlayConfig
// Size: 0x40
class UFortLevelOverlayConfig : public UDataAsset
{
	struct TArray<struct FFortSourceWorldAndOverlayWorld> OverlayList; // 0x30 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortLevelOverlayConfig.GetOverlayList (Underlying native function: GetOverlayList 0x8ab48e0)
	void GetOverlayList(struct TArray<struct FFortSourceWorldAndOverlayWorld>& OutOverlayList); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

