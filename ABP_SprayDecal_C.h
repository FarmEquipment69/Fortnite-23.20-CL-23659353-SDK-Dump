// BlueprintGeneratedClass /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C
// Size: 0xeba
class ABP_SprayDecal_C : public AFortSprayDecalInstance
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xe00 (0x8)
	double DecalFadeoutTime; // 0xe08 (0x8)
	class UDecalComponent* EmissiveDecal; // 0xe10 (0x8)
	class UMaterialInstanceDynamic* EmissiveDecalMID; // 0xe18 (0x8)
	double DecalSize; // 0xe20 (0x8)
	class UMaterialInterface* EmissiveMatSource; // 0xe28 (0x8)
	double DecalDepth; // 0xe30 (0x8)
	class UAthenaSprayItemDefinition* SprayAsset; // 0xe38 (0x8)
	int LoadsOutstanding; // 0xe40 (0x4)
	unsigned char unreflected_e44[0x4]; // 0xe44 (0x4) 
	struct TWeakObjectPtr<class UTexture2D> DecalTextureOverrideSoft; // 0xe48 (0x28)
	class UTexture2D* DecalTextureOverride; // 0xe70 (0x8)
	struct FLinearColor BannerPrimaryColor; // 0xe78 (0x10)
	struct FLinearColor BannerSecondaryColor; // 0xe88 (0x10)
	class AFortPlayerController* SpawningPlayerController; // 0xe98 (0x8)
	struct TArray<class AActor*> NearbyBuildingActors; // 0xea0 (0x10)
	double SpawnStartTimeDelay; // 0xeb0 (0x8)
	bool bIsFrontEndPreview; // 0xeb8 (0x1)
	bool bDestroyOnTrapPlaced; // 0xeb9 (0x1)

	/* Functions */

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.Initialize Spray Spawned from Gameplay (Has no native function)
	void InitializeSpraySpawnedfromGameplay(double& InDecalSize, class UAthenaSprayItemDefinition*& InSprayAsset, class AFortPlayerController*& InSpawningPlayerController, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncBooleanANDReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.AddBoxCollisionForCreative (Has no native function)
	void AddBoxCollisionForCreative(double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, class UBoxComponent*& CallFuncAddComponentReturnValue); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.FindNearbyBuildingActorsAndBindDelegates (Has no native function)
	void FindNearbyBuildingActorsAndBindDelegates(int& TempintArrayIndexVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AGameStateBase*& CallFuncGetGameStateReturnValue, bool& CallFuncAthenaCheckCreativeModeCanCompleteQuest, struct TArray<class AActor*>& K2NodeMakeArrayArray, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class AActor*& CallFuncArrayGetItem, class ABP_SprayDecal_C*& K2NodeDynamicCastAsBPSprayDecal, bool& K2NodeDynamicCastbSuccess, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess1, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, class ABuildingSMActor*& K2NodeDynamicCastAsBuildingStaticMesh, bool& K2NodeDynamicCastbSuccess2, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray1, struct FVector& CallFuncConvFloatToVectorReturnValue, struct TArray<class AActor*>& CallFuncBoxOverlapActorsOutActors, bool& CallFuncBoxOverlapActorsReturnValue, float& CallFuncConvFloatToVectorInFloatImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.UnbindAndClearNearbyBuildingActors (Has no native function)
	void UnbindAndClearNearbyBuildingActors(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, int& CallFuncArrayLengthReturnValue, class AActor*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess, class ABuildingSMActor*& K2NodeDynamicCastAsBuildingStaticMesh, bool& K2NodeDynamicCastbSuccess1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnRep_DecalFadeoutTime (Has no native function)
	void OnRepDecalFadeoutTime(bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncIsValidReturnValue, float& CallFuncSetFadeOutDurationImplicitCast); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.GetInstigatorPlayerId (Has no native function)
	struct FUniqueNetIdRepl GetInstigatorPlayerId(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.CreateDecalComponents (Has no native function)
	void CreateDecalComponents(struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncGetRealTimeSecondsReturnValue, double& CallFuncAddDoubleDoubleReturnValue, struct FTransform& TempstructVariable, class UDecalComponent*& CallFuncAddComponentReturnValue, float& CallFuncConvIntToFloatReturnValue, bool& CallFuncShouldUseBannerAsTextureReturnValue, bool& CallFuncIsValidReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA (Has no native function)
	void OnLoadedF8AB699B4D8DD22B5A0409B608B7D6FA(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F925FF00475A018319C73E9FB1540BC6 (Has no native function)
	void OnLoadedF925FF00475A018319C73E9FB1540BC6(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnReady_B252FED346EAB98D54D786BD15C1CC7B (Has no native function)
	void OnReadyB252FED346EAB98D54D786BD15C1CC7B(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnSprayAssetReplicatedDown (Has no native function)
	void OnSprayAssetReplicatedDown(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnSprayInfoReady (Has no native function)
	void OnSprayInfoReady(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.StartSprayFadeOutDueToNewPlacement (Has no native function)
	void StartSprayFadeOutDueToNewPlacement(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDied (Has no native function)
	void OnNearbyWallDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDamaged (Has no native function)
	void OnNearbyWallDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnBounceOccurs (Has no native function)
	void OnBounceOccurs(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnNearbyTrapPlaced (Has no native function)
	void OnNearbyTrapPlaced(class ABuildingTrap*& Trap, bool& bDetatched); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.PostLevelSaveSpawnCleanup (Has no native function)
	void PostLevelSaveSpawnCleanup(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.OnWallDestoryed (Has no native function)
	void OnWallDestoryed(class AActor*& DestroyedActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C.ExecuteUbergraph_BP_SprayDecal (Has no native function)
	void ExecuteUbergraphBPSprayDecal(int& EntryPoint, class AFortGameStateAthena*& K2NodeCustomEventGameState, class UFortPlaylist*& K2NodeCustomEventPlaylist, struct FGameplayTagContainer& K2NodeCustomEventPlaylistContextTags, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayTagContainer& TempstructVariable, class UFortPlaylist*& TempobjectVariable, class AFortGameStateAthena*& TempobjectVariable1, class UFortAsyncAction_CurrentPlaylistReady*& CallFuncPlaylistDataReadyAsyncReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsCreativeModePlaylistReturnValue, bool& TempboolIsClosedVariable, bool& TempboolHasBeenInitdVariable, bool& CallFuncHasAuthorityReturnValue, class UObject*& TempobjectVariable2, class UMaterialInterface*& K2NodeDynamicCastAsMaterialInterface, bool& K2NodeDynamicCastbSuccess, bool& CallFuncHasAuthorityReturnValue1, struct TWeakObjectPtr<class UMaterialInterface>& CallFuncGetDecalMaterialReturnValue, int& TempintVariable, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncIsAssetNullReturnValue, class UObject*& K2NodeCustomEventLoaded1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UObject*& TempobjectVariable3, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetDecalTextureReturnValue, class UTexture2D*& K2NodeDynamicCastAsTexture2D, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncShouldUseBannerAsTextureReturnValue, struct FHomebaseBannerColor& CallFuncGetBannerColorFromRowNameReturnValue, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetBannerLargeIconAssetFromRowNameReturnValue, struct FLinearColor& CallFuncGetSecondaryColorReturnValue, struct FLinearColor& CallFuncGetPrimaryColorReturnValue, bool& CallFuncNotEqualNameNameReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotEqualNameNameReturnValue1, bool& CallFuncBooleanANDReturnValue1, class UObject*& K2NodeCustomEventLoaded, int& TempintVariable1, class AActor*& K2NodeCustomEventDamagedActor1, float& K2NodeCustomEventDamage1, class AController*& K2NodeCustomEventInstigatedBy1, class AActor*& K2NodeCustomEventDamageCauser1, struct FVector& K2NodeCustomEventHitLocation1, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent1, struct FName& K2NodeCustomEventBoneName1, struct FVector& K2NodeCustomEventMomentum1, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncEqualEqualObjectObjectReturnValue, class ABuildingTrap*& K2NodeCustomEventTrap, bool& K2NodeCustomEventbDetatched, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncIsValidReturnValue1, int& TempintVariable2, bool& CallFuncIsValidReturnValue2, bool& CallFuncBooleanANDReturnValue2, class AActor*& K2NodeCustomEventDestroyedActor, bool& TempboolVariable, struct FRotator& CallFuncMakeRotatorReturnValue, int& K2NodeSelectDefault, bool& CallFuncHasPermissionToEditWorldReturnValue, bool& CallFuncBooleanORReturnValue, float& CallFuncSetLifeSpanInLifespanImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

