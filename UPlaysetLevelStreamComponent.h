// Class /Script/FortniteGame.PlaysetLevelStreamComponent
// Size: 0x1c0
class UPlaysetLevelStreamComponent : public UActorComponent
{
	float MaxStreamInDistance; // 0xa0 (0x4)
	unsigned char bAutoLoadLevel; // 0xa4 (0x1)
	unsigned char bAllowUnload; // 0xa4 (0x1)
	bool bWaitOnMessageBeforeLoading; // 0xa5 (0x1)
	unsigned char unreflected_a6[0x42]; // 0xa6 (0x42) 
	class UFortPlaysetItemDefinition* CurrentPlayset; // 0xe8 (0x8)
	struct FFortPlaysetStreamingData ClientPlaysetData; // 0xf0 (0x40)
	bool bIgnorePlaysetVolumeLocationChecks; // 0x130 (0x1)
	unsigned char unreflected_131[0x7]; // 0x131 (0x7) 
	struct TArray<struct FUniqueNetIdRepl> PlayersWithValidPlaysetData; // 0x138 (0x10)
	class ULevelStreamingDynamic* StreamedLevel; // 0x148 (0x8)
	struct FName ClientLoadedPackageName; // 0x150 (0x4)
	unsigned char padding_154[0x6c]; // 0x154 (0x6c)

	/* Functions */

	// Function /Script/FortniteGame.PlaysetLevelStreamComponent.SetPlayset (Underlying native function: SetPlayset 0x8ddf2c4)
	void SetPlayset(class UFortPlaysetItemDefinition*& NewPlayset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PlaysetLevelStreamComponent.OnRep_ClientPlaysetData (Underlying native function: OnRep_ClientPlaysetData 0x8ddeb84)
	void OnRepClientPlaysetData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.PlaysetLevelStreamComponent.OnFinishedUnloading (Underlying native function: OnFinishedUnloading 0x8dde368)
	void OnFinishedUnloading(); // (Final | Native | Private)

	// Function /Script/FortniteGame.PlaysetLevelStreamComponent.OnFinishedLoading (Underlying native function: OnFinishedLoading 0x8dde354)
	void OnFinishedLoading(); // (Final | Native | Private)

	// Function /Script/FortniteGame.PlaysetLevelStreamComponent.IsLoading (Underlying native function: IsLoading 0x8dde2b0)
	bool IsLoading(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlaysetLevelStreamComponent.GetCurrentPlayset (Underlying native function: GetCurrentPlayset 0x8dddbd4)
	class UFortPlaysetItemDefinition* GetCurrentPlayset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlaysetLevelStreamComponent.ClearPlayset (Underlying native function: ClearPlayset 0x8ddd808)
	void ClearPlayset(); // (Final | Native | Public | BlueprintCallable)
};

