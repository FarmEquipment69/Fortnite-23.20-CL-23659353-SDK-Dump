// Class /Script/FortniteGame.FortLevelStreamComponent
// Size: 0x188
class UFortLevelStreamComponent : public UActorComponent
{
	unsigned char bAutoLoadLevel; // 0xa0 (0x1)
	unsigned char bAllowUnload; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x1f]; // 0xa1 (0x1f) 
	bool bWaitForClientsInSessionBeforeConsideringComplete; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x7]; // 0xc1 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UWorld>> LevelsToLoad; // 0xc8 (0x10)
	struct TMap<class ULevelStreamingDynamic*, struct FFortLevelStreamingData> StreamedLevels; // 0xd8 (0x50)
	struct TArray<struct FFortLevelStreamingData> LevelStreamingData; // 0x128 (0x10)
	unsigned char unreflected_138[0x30]; // 0x138 (0x30) 
	struct TArray<class AFortPlayerState*> ReceivedLoadedPlayerStates; // 0x168 (0x10)
	unsigned char padding_178[0x10]; // 0x178 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortLevelStreamComponent.OnRep_LevelStreamingData (Underlying native function: OnRep_LevelStreamingData 0x86e9628)
	void OnRepLevelStreamingData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLevelStreamComponent.OnLevelShown (Underlying native function: OnLevelShown 0x86e9470)
	void OnLevelShown(); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortLevelStreamComponent.OnLevelLoaded (Underlying native function: OnLevelLoaded 0x86e9360)
	void OnLevelLoaded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLevelStreamComponent.IsUnloaded (Underlying native function: IsUnloaded 0x86e9340)
	bool IsUnloaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelStreamComponent.IsLoading (Underlying native function: IsLoading 0x86e92c8)
	bool IsLoading(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelStreamComponent.IsLoaded (Underlying native function: IsLoaded 0x86e92a4)
	bool IsLoaded(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelStreamComponent.ClientHasFinishedLevelStreaming (Underlying native function: ClientHasFinishedLevelStreaming 0x86e873c)
	void ClientHasFinishedLevelStreaming(class AFortPlayerState*& StreamedInPlayer); // (Final | Native | Public)
};

