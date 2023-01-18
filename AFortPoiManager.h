// Class /Script/FortniteGame.FortPoiManager
// Size: 0x408
class AFortPoiManager : public AActor
{
	struct FFortPoiGridInfo FortPoiGridInfo; // 0x288 (0x48)
	struct TArray<class AFortPoiVolume*> SmallTickUpdatedPoi; // 0x2d0 (0x10)
	struct TArray<class AFortPoiVolume*> LargePoiVolumes; // 0x2e0 (0x10)
	struct TArray<class AFortPoiVolume*> PendingLargePoiVolumes; // 0x2f0 (0x10)
	struct TArray<class AFortPoiVolume*> NamedOnMapPoiVolumes; // 0x300 (0x10)
	struct TArray<class AFortPoiVolume*> AllPoiVolumes; // 0x310 (0x10)
	int TestPlayerIndex; // 0x320 (0x4)
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	struct TArray<struct FName> POIsExcludedFromBeginGolden; // 0x328 (0x10)
	int MaxNumTestsPerFrame; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	struct TArray<struct FGameplayTagContainer> PoiTagContainerTable; // 0x340 (0x10)
	int PoiTagContainerTableSize; // 0x350 (0x4)
	unsigned char unreflected_354[0x54]; // 0x354 (0x54) 
	bool bIsReinitializingGrid; // 0x3a8 (0x1)
	bool bHasInitalized; // 0x3a9 (0x1)
	unsigned char unreflected_3aa[0x2]; // 0x3aa (0x2) 
	int PoiGridPrevSizeForDebugDisplay; // 0x3ac (0x4)
	struct TArray<int16_t> PoiGridForDebugDisplay; // 0x3b0 (0x10)
	struct TArray<int16_t> FortPoiGridCellsTagContainerTableIds; // 0x3c0 (0x10)
	struct TArray<struct FFortPoiVolumeGridCell> FortPoiGridCellsLargeVolume; // 0x3d0 (0x10)
	unsigned char padding_3e0[0x28]; // 0x3e0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortPoiManager.UnbindOnPoiExited (Underlying native function: UnbindOnPoiExited 0x8418c1c)
	void UnbindOnPoiExited(struct FGameplayTag& POITag, struct FDelegate& Event); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPoiManager.UnbindOnPoiEntered (Underlying native function: UnbindOnPoiEntered 0x8418b40)
	void UnbindOnPoiEntered(struct FGameplayTag& POITag, struct FDelegate& Event); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPoiManager.OnRep_PoiTagContainerTable (Underlying native function: OnRep_PoiTagContainerTable 0x265eed4)
	void OnRepPoiTagContainerTable(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPoiManager.OnRep_PoiGridForDebugDisplay (Underlying native function: OnRep_PoiGridForDebugDisplay 0x26daa0c)
	void OnRepPoiGridForDebugDisplay(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPoiManager.OnRep_FortPoiGridInfo (Underlying native function: OnRep_FortPoiGridInfo 0x26daa0c)
	void OnRepFortPoiGridInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPoiManager.GetVolumeWithTag (Underlying native function: GetVolumeWithTag 0x8415f34)
	class AFortPoiVolume* GetVolumeWithTag(struct FGameplayTag& TagToCheck); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPoiManager.GetNamedOnMapPoiVolumes (Underlying native function: GetNamedOnMapPoiVolumes 0x84158e8)
	struct TArray<class AFortPoiVolume*> GetNamedOnMapPoiVolumes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPoiManager.GetAllPoiVolumes (Underlying native function: GetAllPoiVolumes 0x84152bc)
	struct TArray<class AFortPoiVolume*> GetAllPoiVolumes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPoiManager.ClientsideMinimalInitPostEventsReady (Underlying native function: ClientsideMinimalInitPostEventsReady 0x8414e34)
	void ClientsideMinimalInitPostEventsReady(struct TArray<struct FString>& NewEvents); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortPoiManager.BindOnPoiExited (Underlying native function: BindOnPoiExited 0x84146a0)
	void BindOnPoiExited(struct FGameplayTag& POITag, struct FDelegate& Event); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPoiManager.BindOnPoiEntered (Underlying native function: BindOnPoiEntered 0x84144d0)
	void BindOnPoiEntered(struct FGameplayTag& POITag, struct FDelegate& Event); // (Final | Native | Public | BlueprintCallable)
};

