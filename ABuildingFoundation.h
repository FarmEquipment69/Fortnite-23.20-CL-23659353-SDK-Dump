// Class /Script/FortniteGame.BuildingFoundation
// Size: 0x12a0
class ABuildingFoundation : public ABuildingSMActor
{
	struct TArray<class UBuildingGroup*> BuildingGroups; // 0xdd0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UWorld>> AdditionalWorlds; // 0xde0 (0x10)
	struct FVector BuildingDeconstructorOrigin; // 0xdf0 (0x18)
	struct FVector BuildingDeconstructorExtent; // 0xe08 (0x18)
	unsigned char bConditionalFoundation; // 0xe20 (0x1)
	unsigned char bServerStreamedInLevel; // 0xe20 (0x1)
	unsigned char bShowHLODWhenDisabled; // 0xe20 (0x1)
	unsigned char bFlipXAxis; // 0xe20 (0x1)
	unsigned char bFlipYAxis; // 0xe20 (0x1)
	unsigned char bOverrideNavigationGraphCells; // 0xe20 (0x1)
	unsigned char bHasExcludedZone; // 0xe20 (0x1)
	unsigned char bForceDitheringTransition; // 0xe20 (0x1)
	unsigned char bStreamingDataBasedBounds; // 0xe21 (0x1)
	unsigned char unreflected_e22[0x1]; // 0xe22 (0x1) 
	enum EDynamicFoundationEnabledState FoundationEnabledState; // 0xe23 (0x1)
	enum EDynamicFoundationType DynamicFoundationType; // 0xe24 (0x1)
	struct TEnumAsByte<EBuildingFoundationType> FoundationType; // 0xe25 (0x1)
	unsigned char unreflected_e26[0x2]; // 0xe26 (0x2) 
	int NavExclusionMinX; // 0xe28 (0x4)
	int NavExclusionMaxX; // 0xe2c (0x4)
	int NavExclusionMinY; // 0xe30 (0x4)
	int NavExclusionMaxY; // 0xe34 (0x4)
	struct FBox StreamingBoundingBox; // 0xe38 (0x38)
	struct FName LevelToStream; // 0xe70 (0x4)
	unsigned char unreflected_e74[0x4]; // 0xe74 (0x4) 
	struct FGameplayTagQuery BuildingGroupFilter; // 0xe78 (0x48)
	struct FGameplayTag MapLocationTag; // 0xec0 (0x4)
	unsigned char unreflected_ec4[0xc]; // 0xec4 (0xc) 
	struct FSlateBrush LandIcon; // 0xed0 (0xc0)
	struct FVector LandIconWorldOffset; // 0xf90 (0x18)
	struct FText MapLocationText; // 0xfa8 (0x18)
	struct FVector MapLocationTextOffset; // 0xfc0 (0x18)
	float LandIconAdditionalRenderYaw; // 0xfd8 (0x4)
	bool bRotateLandIconWorldOffset; // 0xfdc (0x1)
	unsigned char unreflected_fdd[0x3]; // 0xfdd (0x3) 
	struct FVector MapLocationOverride; // 0xfe0 (0x18)
	bool bShadowLayer; // 0xff8 (0x1)
	unsigned char unreflected_ff9[0x7]; // 0xff9 (0x7) 
	struct FBuildingFoundationStreamingData StreamingData; // 0x1000 (0xc8)
	struct TArray<class AFortHLODSMActor*> SpawnedLODActors; // 0x10c8 (0x10)
	struct TArray<float> SpawnedLODActorsMinDrawDistances; // 0x10d8 (0x10)
	struct TArray<class AFortHLODSMActor*> ChildSpawnedLODActors; // 0x10e8 (0x10)
	struct TArray<class ALODActor*> HLODActors; // 0x10f8 (0x10)
	class ABuildingFoundation* ParentFoundation; // 0x1108 (0x8)
	float ProxyMeshMaxDrawDistanceMultiplier; // 0x1110 (0x4)
	unsigned char unreflected_1114[0xc]; // 0x1114 (0xc) 
	class ULevelStreaming* LevelStreamInfo; // 0x1120 (0x8)
	unsigned char unreflected_1128[0x80]; // 0x1128 (0x80) 
	struct FDynamicBuildingFoundationRepData DynamicFoundationRepData; // 0x11a8 (0x38)
	unsigned char unreflected_11e0[0x10]; // 0x11e0 (0x10) 
	struct FTransform DynamicFoundationTransform; // 0x11f0 (0x60)
	unsigned char unreflected_1250[0x40]; // 0x1250 (0x40) 
	struct FGuid FoundationGUID; // 0x1290 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingFoundation.UpdateMinimapDetailsLocation (Underlying native function: UpdateMinimapDetailsLocation 0x85e12dc)
	void UpdateMinimapDetailsLocation(struct FVector& InLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.ShowHLODProxies (Underlying native function: ShowHLODProxies 0x85e1208)
	void ShowHLODProxies(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.SetDynamicFoundationTransform (Underlying native function: SetDynamicFoundationTransform 0x85e0b00)
	void SetDynamicFoundationTransform(struct FTransform& NewTransform); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.SetDynamicFoundationEnabled (Underlying native function: SetDynamicFoundationEnabled 0x71a6cc4)
	void SetDynamicFoundationEnabled(bool& bEnabled); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.OnStaticLevelShown (Underlying native function: OnStaticLevelShown 0x85e0194)
	void OnStaticLevelShown(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnRep_ServerStreamedInLevel (Underlying native function: OnRep_ServerStreamedInLevel 0x85e0120)
	void OnRepServerStreamedInLevel(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnRep_LevelToStream (Underlying native function: OnRep_LevelToStream 0x27c7820)
	void OnRepLevelToStream(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnRep_DynamicFoundationRepData (Underlying native function: OnRep_DynamicFoundationRepData 0x85dfe3c)
	void OnRepDynamicFoundationRepData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingFoundation.OnLevelStreamedOut (Underlying native function: OnLevelStreamedOut 0x85dfa48)
	void OnLevelStreamedOut(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnLevelStreamedIn (Underlying native function: OnLevelStreamedIn 0x85dfa34)
	void OnLevelStreamedIn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnLevelShown (Underlying native function: OnLevelShown 0x85dfa20)
	void OnLevelShown(); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.HideHLODProxies (Underlying native function: HideHLODProxies 0x85ded8c)
	void HideHLODProxies(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.GetStreamedInActors (Underlying native function: GetStreamedInActors 0x85deadc)
	bool GetStreamedInActors(struct TArray<class AActor*>& StreamedInActors); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyUnloadPreviewLevel (Underlying native function: EditorOnlyUnloadPreviewLevel 0x2486284)
	bool EditorOnlyUnloadPreviewLevel(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyRemoveAdditionalWorld (Underlying native function: EditorOnlyRemoveAdditionalWorld 0x85de3bc)
	bool EditorOnlyRemoveAdditionalWorld(struct FString& LevelToRemove); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyLoadPreviewLevel (Underlying native function: EditorOnlyLoadPreviewLevel 0x7298eb8)
	bool EditorOnlyLoadPreviewLevel(bool& bCreateLevelInstance); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyGetAdditionalWorlds (Underlying native function: EditorOnlyGetAdditionalWorlds 0x8090afc)
	struct TArray<struct FString> EditorOnlyGetAdditionalWorlds(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyExitBatchPreview (Underlying native function: EditorOnlyExitBatchPreview 0x26daa0c)
	static void EditorOnlyExitBatchPreview(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyEnterBatchPreview (Underlying native function: EditorOnlyEnterBatchPreview 0x26daa0c)
	static void EditorOnlyEnterBatchPreview(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyClearAdditionalWorlds (Underlying native function: EditorOnlyClearAdditionalWorlds 0x26daa0c)
	void EditorOnlyClearAdditionalWorlds(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyAddTransformToPreviewLevel (Underlying native function: EditorOnlyAddTransformToPreviewLevel 0x85de2d8)
	bool EditorOnlyAddTransformToPreviewLevel(struct FTransform& DeltaTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyAddAdditionalWorld (Underlying native function: EditorOnlyAddAdditionalWorld 0x723b5f8)
	void EditorOnlyAddAdditionalWorld(struct FString& LevelPackageName); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.DoesBuildingFoundationContainActor (Underlying native function: DoesBuildingFoundationContainActor 0x85de144)
	bool DoesBuildingFoundationContainActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable | Const)
};

