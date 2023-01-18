// Class /Script/Engine.LevelStreaming
// Size: 0x190
class ULevelStreaming : public UObject
{
	struct TWeakObjectPtr<class UWorld> WorldAsset; // 0x28 (0x28)
	int StreamingPriority; // 0x50 (0x4)
	struct FName PackageNameToLoad; // 0x54 (0x4)
	struct TArray<struct FName> LODPackageNames; // 0x58 (0x10)
	unsigned char unreflected_68[0x18]; // 0x68 (0x18) 
	struct FTransform LevelTransform; // 0x80 (0x60)
	bool bClientOnlyVisible; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x3]; // 0xe1 (0x3) 
	int LevelLODIndex; // 0xe4 (0x4)
	unsigned char bShouldBeVisible; // 0xe8 (0x1)
	unsigned char bShouldBeLoaded; // 0xe8 (0x1)
	unsigned char unreflected_e9[0x2]; // 0xe9 (0x2) 
	unsigned char bLocked; // 0xeb (0x1)
	unsigned char bIsStatic; // 0xeb (0x1)
	unsigned char bShouldBlockOnLoad; // 0xeb (0x1)
	unsigned char bShouldBlockOnUnload; // 0xeb (0x1)
	unsigned char bDisableDistanceStreaming; // 0xeb (0x1)
	unsigned char bDrawOnLevelStatusMap; // 0xeb (0x1)
	struct FLinearColor LevelColor; // 0xec (0x10)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct TArray<class ALevelStreamingVolume*> EditorStreamingVolumes; // 0x100 (0x10)
	float MinTimeBetweenVolumeUnloadRequests; // 0x110 (0x4)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	struct FMulticastInlineDelegate OnLevelLoaded; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnLevelUnloaded; // 0x128 (0x10)
	struct FMulticastInlineDelegate OnLevelShown; // 0x138 (0x10)
	struct FMulticastInlineDelegate OnLevelHidden; // 0x148 (0x10)
	class ULevel* LoadedLevel; // 0x158 (0x8)
	class ULevel* PendingUnloadLevel; // 0x160 (0x8)
	unsigned char padding_168[0x28]; // 0x168 (0x28)

	/* Functions */

	// Function /Script/Engine.LevelStreaming.ShouldBeLoaded (Underlying native function: ShouldBeLoaded 0x2ab4d68)
	bool ShouldBeLoaded(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.LevelStreaming.SetShouldBeVisible (Underlying native function: SetShouldBeVisible 0x9e32b50)
	void SetShouldBeVisible(bool& bInShouldBeVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LevelStreaming.SetShouldBeLoaded (Underlying native function: SetShouldBeLoaded 0x751a7d4)
	void SetShouldBeLoaded(bool& bInShouldBeLoaded); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.LevelStreaming.SetPriority (Underlying native function: SetPriority 0x9e32980)
	void SetPriority(int& NewPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LevelStreaming.SetLevelLODIndex (Underlying native function: SetLevelLODIndex 0x9e32900)
	void SetLevelLODIndex(int& LODIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LevelStreaming.SetIsRequestingUnloadAndRemoval (Underlying native function: SetIsRequestingUnloadAndRemoval 0x9e32880)
	void SetIsRequestingUnloadAndRemoval(bool& bInIsRequestingUnloadAndRemoval); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LevelStreaming.IsStreamingStatePending (Underlying native function: IsStreamingStatePending 0x9e2e978)
	bool IsStreamingStatePending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.LevelStreaming.IsLevelVisible (Underlying native function: IsLevelVisible 0x9e2e420)
	bool IsLevelVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.LevelStreaming.IsLevelLoaded (Underlying native function: IsLevelLoaded 0x9e2e404)
	bool IsLevelLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.LevelStreaming.GetWorldAssetPackageFName (Underlying native function: GetWorldAssetPackageFName 0x9e2df88)
	struct FName GetWorldAssetPackageFName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.LevelStreaming.GetLoadedLevel (Underlying native function: GetLoadedLevel 0x2d85a40)
	class ULevel* GetLoadedLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.LevelStreaming.GetLevelScriptActor (Underlying native function: GetLevelScriptActor 0x9e2dbcc)
	class ALevelScriptActor* GetLevelScriptActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.LevelStreaming.GetIsRequestingUnloadAndRemoval (Underlying native function: GetIsRequestingUnloadAndRemoval 0x9e2d998)
	bool GetIsRequestingUnloadAndRemoval(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.LevelStreaming.CreateInstance (Underlying native function: CreateInstance 0x9e2b8ac)
	class ULevelStreaming* CreateInstance(struct FString& UniqueInstanceName); // (Final | Native | Public | BlueprintCallable)
};

