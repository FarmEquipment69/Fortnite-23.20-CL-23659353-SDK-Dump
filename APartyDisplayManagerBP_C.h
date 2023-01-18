// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C
// Size: 0x734
class APartyDisplayManagerBP_C : public APartyDisplayManager
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x558 (0x8)
	class UChildActorComponent* PrefabActorComp; // 0x560 (0x8)
	class USkeletalMeshComponent* SkeletalMesh; // 0x568 (0x8)
	class UStaticMeshComponent* StaticMesh; // 0x570 (0x8)
	class UStaticMeshComponent* ScalePivot; // 0x578 (0x8)
	class UStaticMeshComponent* PivotHolder; // 0x580 (0x8)
	class UParticleSystemComponent* CelebratoryFX; // 0x588 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x590 (0x8)
	float HoloMatColorPulseAlphaE6C257BB472EFEF7971B66A1E8FAE3D8; // 0x598 (0x4)
	struct TEnumAsByte<ETimelineDirection> HoloMatColorPulseDirectionE6C257BB472EFEF7971B66A1E8FAE3D8; // 0x59c (0x1)
	unsigned char unreflected_59d[0x3]; // 0x59d (0x3) 
	class UTimelineComponent* HoloMatColorPulse; // 0x5a0 (0x8)
	float ScaleAnimEvolveScaling6D0D09564D54A0DEA88CCC96FA6653CC; // 0x5a8 (0x4)
	struct TEnumAsByte<ETimelineDirection> ScaleAnimEvolveDirection6D0D09564D54A0DEA88CCC96FA6653CC; // 0x5ac (0x1)
	unsigned char unreflected_5ad[0x3]; // 0x5ad (0x3) 
	class UTimelineComponent* ScaleAnimEvolve; // 0x5b0 (0x8)
	float ScaleAnimLevelScalingCC68128E49202D0C982B7A945E41AF43; // 0x5b8 (0x4)
	struct TEnumAsByte<ETimelineDirection> ScaleAnimLevelDirectionCC68128E49202D0C982B7A945E41AF43; // 0x5bc (0x1)
	unsigned char unreflected_5bd[0x3]; // 0x5bd (0x3) 
	class UTimelineComponent* ScaleAnimLevel; // 0x5c0 (0x8)
	struct FTimerHandle* TimerHandle; // 0x5c8 (0x8)
	double Rotation; // 0x5d0 (0x8)
	class UFortItem* ItemToRepresent; // 0x5d8 (0x8)
	bool PreviewRotation; // 0x5e0 (0x1)
	unsigned char unreflected_5e1[0x7]; // 0x5e1 (0x7) 
	class UCurveFloat* RotationAnimation; // 0x5e8 (0x8)
	class UParticleSystem* LevelUpFX; // 0x5f0 (0x8)
	class UParticleSystem* EvolveUpFX; // 0x5f8 (0x8)
	struct FVector FXTargetLocation; // 0x600 (0x18)
	bool IsCharacter; // 0x618 (0x1)
	bool IsEvolve; // 0x619 (0x1)
	unsigned char unreflected_61a[0x6]; // 0x61a (0x6) 
	class UParticleSystem* CharLevelUpFX; // 0x620 (0x8)
	class UParticleSystem* CharEvolveUpFX; // 0x628 (0x8)
	class UMaterialInstanceDynamic* UIoverrideMID; // 0x630 (0x8)
	bool HasResetVisuals; // 0x638 (0x1)
	unsigned char unreflected_639[0x7]; // 0x639 (0x7) 
	class UParticleSystemComponent* ParticleSystem1; // 0x640 (0x8)
	class UParticleSystemComponent* ParticleSystem2; // 0x648 (0x8)
	class UParticleSystem* CharSwapTransitionFX; // 0x650 (0x8)
	bool IsCharacterVisible; // 0x658 (0x1)
	unsigned char unreflected_659[0x7]; // 0x659 (0x7) 
	class AFortPlayerPawn* HeroPawn; // 0x660 (0x8)
	bool SanityChecker; // 0x668 (0x1)
	unsigned char unreflected_669[0x7]; // 0x669 (0x7) 
	class UMaterialInstanceDynamic* MIDHoloMaterial; // 0x670 (0x8)
	struct FName HideElement1; // 0x678 (0x4)
	struct FName VertexRange; // 0x67c (0x4)
	struct FName HideElement2; // 0x680 (0x4)
	struct FName HideElement3; // 0x684 (0x4)
	struct FName HideElement4; // 0x688 (0x4)
	struct FName HideElement5; // 0x68c (0x4)
	struct FName HideElement6; // 0x690 (0x4)
	struct FName HideElement7; // 0x694 (0x4)
	struct FName HideElement8; // 0x698 (0x4)
	struct FName HideElement9; // 0x69c (0x4)
	struct FName HideElement10; // 0x6a0 (0x4)
	unsigned char unreflected_6a4[0x4]; // 0x6a4 (0x4) 
	struct FVector ScalePivotPreScaleLocation; // 0x6a8 (0x18)
	struct FVector StaticMeshPreScaleLocation; // 0x6c0 (0x18)
	struct FVector SkelMeshPreScaleLocation; // 0x6d8 (0x18)
	struct FVector PrefabPreScaleLocation; // 0x6f0 (0x18)
	class UParticleSystemComponent* GhostPistolVFX; // 0x708 (0x8)
	class UParticleSystemComponent* GhostSwordVFX; // 0x710 (0x8)
	class UStaticMeshComponent* GhostSwordMesh; // 0x718 (0x8)
	class UParticleSystemComponent* TransitionFXComponent; // 0x720 (0x8)
	class UParticleSystem* CharSwapTransitionFXLoop; // 0x728 (0x8)
	struct FName HideElementsOnlyConsidersRedChannel; // 0x730 (0x4)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetPreScaleLocations (Has no native function)
	void ResetPreScaleLocations(struct FHitResult& CallFuncK2SetRelativeLocationSweepHitResult, struct FHitResult& CallFuncK2SetRelativeLocationSweepHitResult1, struct FHitResult& CallFuncK2SetRelativeLocationSweepHitResult2, struct FHitResult& CallFuncK2SetRelativeLocationSweepHitResult3); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.RestoreTeleportMIDsInProgress (Has no native function)
	void RestoreTeleportMIDsInProgress(class AFortPlayerPawn*& Pawn, int& CallFuncGetPartyMemberIndexByPlayerPawnOutPlayerIndex, bool& CallFuncGetPartyMemberIndexByPlayerPawnReturnValue, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, struct FUniqueNetIdRepl& CallFuncGetPlayerIdFromPartyMemberIndexReturnValue, class UFortPartyContext*& CallFuncGetContextReturnValue, enum EFortPartyMemberLocation& CallFuncGetPartyMemberLocationLocationOut, bool& CallFuncGetPartyMemberLocationReturnValue, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandlePartyMemberInProgressDisplayChanges (Has no native function)
	void HandlePartyMemberInProgressDisplayChanges(class AFortPlayerPawn*& Pawn, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren, int& TempintArrayIndexVariable, int& CallFuncArrayLengthReturnValue, class USceneComponent*& CallFuncArrayGetItem, class UParticleSystemComponent*& K2NodeDynamicCastAsCascadeParticleSystemComponent, bool& K2NodeDynamicCastbSuccess1, class UPrimitiveComponent*& K2NodeDynamicCastAsPrimitiveComponent, bool& K2NodeDynamicCastbSuccess2, int& CallFuncGetNumMaterialsReturnValue, int& TempintLoopCounterVariable, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, int& TempintVariable, class UMaterialInterface*& CallFuncGetMaterialReturnValue, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncLessEqualIntIntReturnValue, float& CallFuncK2GetScalarParameterValueReturnValue, class UTexture*& CallFuncK2GetTextureParameterValueReturnValue, class UTexture*& CallFuncK2GetTextureParameterValueReturnValue1, int& CallFuncAddIntIntReturnValue1, float& CallFuncK2GetScalarParameterValueReturnValue1, float& CallFuncK2GetScalarParameterValueReturnValue2, float& CallFuncK2GetScalarParameterValueReturnValue3, float& CallFuncK2GetScalarParameterValueReturnValue4, float& CallFuncK2GetScalarParameterValueReturnValue5, float& CallFuncK2GetScalarParameterValueReturnValue6, float& CallFuncK2GetScalarParameterValueReturnValue7, float& CallFuncK2GetScalarParameterValueReturnValue8, float& CallFuncK2GetScalarParameterValueReturnValue9, float& CallFuncK2GetScalarParameterValueReturnValue10, float& CallFuncK2GetScalarParameterValueReturnValue11, bool& CallFuncIsValidReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PartyMemberInProgressCheck (Has no native function)
	void PartyMemberInProgressCheck(class AFortPlayerPawn*& Pawn, int& PlayerIndex, int& CallFuncGetPartyMemberIndexByPlayerPawnOutPlayerIndex, bool& CallFuncGetPartyMemberIndexByPlayerPawnReturnValue, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, bool& CallFuncIsPartyInProgressEnabledReturnValue, class UFortPartyContext*& CallFuncGetContextReturnValue, struct FUniqueNetIdRepl& CallFuncGetPlayerIdFromPartyMemberIndexReturnValue, enum EFortPartyMemberLocation& CallFuncGetPartyMemberLocationLocationOut, bool& CallFuncGetPartyMemberLocationReturnValue, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPrefabActorForCurrentDisplayedItem (Has no native function)
	class AActor* GetPrefabActorForCurrentDisplayedItem(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals (Has no native function)
	void PostSetupPrefabVisuals(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem (Has no native function)
	void GetMeshForCurrentDisplayedItem(class UMeshComponent*& OutDisplayedMesh, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue, struct TScriptInterface<class ICustomCharacterPartOwnerInterface>& CallFuncGetCustomizationRootSkeletalMeshComponentselfCastInput, class USkeletalMeshComponent*& CallFuncGetCustomizationRootSkeletalMeshComponentReturnValue, class AFortPlayerParachute*& K2NodeDynamicCastAsFortPlayerParachute, bool& K2NodeDynamicCastbSuccess, class USkeletalMeshComponent*& CallFuncGetParachuteRootMeshReturnValue, bool& CallFuncIsValidReturnValue, class USkeletalMesh*& CallFuncGetSkeletalMeshAssetReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow (Has no native function)
	void GetItemDefinitionToShow(class UFortItemDefinition*& ItemDefinition, class UFortItemDefinition*& CallFuncGetItemDefinitionBPReturnValue, class UFortItemDefinition*& CallFuncGetSchematicCraftingResultBPReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& TempboolVariable, class UFortItemDefinition*& K2NodeSelectDefault); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals (Has no native function)
	void SetUIOverrideVisuals(class UTexture2D*& LargeTexture, class UFortItemDefinition*& Item, enum EFortRarity& Rarity, struct FFortRarityItemData& CallFuncBPGetRarityDataReturnValue, struct FString& CallFuncGetPersistentNameReturnValue, int& CallFuncFindSubstringReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncConvIntToBoolReturnValue, int& CallFuncFindSubstringReturnValue1, int& CallFuncFindSubstringReturnValue2, bool& CallFuncConvIntToBoolReturnValue1, bool& CallFuncConvIntToBoolReturnValue2, int& CallFuncFindSubstringReturnValue3, bool& CallFuncConvIntToBoolReturnValue3); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform (Has no native function)
	struct FTransform GetWeaponPlacementTransform(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms (Has no native function)
	void UpdatePreviewMeshTransforms(struct FTransform& CallFuncGetPreviewMeshWorldTransformReturnValue, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncPercentFloatFloatReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset (Has no native function)
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition*& ItemDefinition); // (Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform (Has no native function)
	struct FTransform GetPreviewMeshWorldTransform(); // (Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals (Has no native function)
	void SetupStaticMeshVisuals(class UStaticMesh*& NewMesh, class UFortItemDefinition*& CallFuncGetItemDefinitionToShowItemDefinition, struct FTransform& CallFuncGetTransformReturnValue, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, bool& CallFuncSetStaticMeshReturnValue); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals (Has no native function)
	void SetupSkeletalMeshVisuals(class USkeletalMesh*& NewMesh, class UFortItemDefinition*& CallFuncGetItemDefinitionToShowItemDefinition, struct FTransform& CallFuncGetTransformReturnValue, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals (Has no native function)
	void ResetVisuals(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, struct FTransform& CallFuncMakeTransformReturnValue, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult, bool& CallFuncSetStaticMeshReturnValue); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc (Has no native function)
	void ScaleAnimLevelFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc (Has no native function)
	void ScaleAnimLevelUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc (Has no native function)
	void ScaleAnimEvolveFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc (Has no native function)
	void ScaleAnimEvolveUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__FinishedFunc (Has no native function)
	void HoloMatColorPulseFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__UpdateFunc (Has no native function)
	void HoloMatColorPulseUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.Completed_01D864884864692DBB7035B0996A5437 (Has no native function)
	void Completed01D864884864692DBB7035B0996A5437(class UFortItem*& Item, struct FGuid& RequestId); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem (Has no native function)
	void ShowItem(class UFortItem*& ItemToView, struct FGuid& RequestId); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect (Has no native function)
	void PlayLevelUpEffect(); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect (Has no native function)
	void PlayEvolutionEffect(); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX (Has no native function)
	void CelebrateWithFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX (Has no native function)
	void PerformScaleMeshFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted (Has no native function)
	void HandleLoadingAssetsForItemCompleted(class UFortItem*& ItemWhoseAssetsWereLoaded, struct TArray<class UObject*>& LoadedAssets, struct FGuid& RequestId); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility (Has no native function)
	void SetCharacterPartsVisibility(bool& NewVisible); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.CharacterCustomizationFinished (Has no native function)
	void CharacterCustomizationFinished(class AFortPlayerPawn*& Pawn); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnPlayerPawnAddedToLobby (Has no native function)
	void OnPlayerPawnAddedToLobby(class AFortPlayerPawn*& Pawn); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResOutPawnFromLobby (Has no native function)
	void ResOutPawnFromLobby(class AFortPlayerPawn*& Pawn, int& PartyIndex); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals (Has no native function)
	void SetupPrefabVisuals(); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnEmoteSetupFinished (Has no native function)
	void OnEmoteSetupFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnMeshLODStreamingFinished (Has no native function)
	void OnMeshLODStreamingFinished(); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP (Has no native function)
	void ExecuteUbergraphPartyDisplayManagerBP(int& EntryPoint, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, class UFortItem*& K2NodeEventItemWhoseAssetsWereLoaded, struct TArray<class UObject*>& K2NodeEventLoadedAssets, struct FGuid& K2NodeEventRequestId, class UFortItemDefinition*& CallFuncGetItemDefinitionToShowItemDefinition, struct TArray<class UFortItem*>& K2NodeMakeArrayArray, bool& CallFuncIsValidReturnValue, bool& CallFuncNotPreBoolReturnValue, struct TArray<class UFortItem*>& K2NodeMakeArrayArray1, class UFortItemDefinition*& CallFuncGetItemDefinitionToShowItemDefinition1, struct TWeakObjectPtr<class UStaticMesh>& CallFuncGetPreviewStaticMeshAssetAsset, bool& CallFuncGetPreviewStaticMeshAssetReturnValue, enum EFortRarity& CallFuncGetRarityReturnValue, class UObject*& CallFuncConvSoftObjectReferenceToObjectReturnValue, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetLargePreviewImageReturnValue, class UStaticMesh*& K2NodeDynamicCastAsStaticMesh, bool& K2NodeDynamicCastbSuccess, class UObject*& CallFuncConvSoftObjectReferenceToObjectReturnValue1, class UTexture2D*& K2NodeDynamicCastAsTexture2D, bool& K2NodeDynamicCastbSuccess1, struct TWeakObjectPtr<class USkeletalMesh>& CallFuncGetPreviewSkeletalMeshAssetAsset, bool& CallFuncGetPreviewSkeletalMeshAssetReturnValue, class UFortItemDefinition*& CallFuncGetSchematicCraftingResultBPReturnValue, class UObject*& CallFuncConvSoftObjectReferenceToObjectReturnValue2, bool& CallFuncIsValidReturnValue1, class USkeletalMesh*& K2NodeDynamicCastAsSkeletalMesh, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncEqualEqualObjectObjectReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue1, class UFortItemDefinition*& CallFuncGetItemDefinitionToShowItemDefinition2, float& K2NodeEventDeltaSeconds, struct FTransform& CallFuncGetWeaponPlacementTransformReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FHitResult& CallFuncK2SetRelativeLocationSweepHitResult, struct TArray<struct TWeakObjectPtr<class UObject>>& CallFuncGetPreviewAssetsReturnValue, bool& K2NodeCustomEventNewVisible, bool& CallFuncEqualEqualObjectObjectReturnValue2, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue, bool& CallFuncIsValidReturnValue2, struct FTransform& CallFuncGetTransformReturnValue, struct FVector& CallFuncBreakTransformLocation1, struct FRotator& CallFuncBreakTransformRotation1, struct FVector& CallFuncBreakTransformScale1, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren, int& CallFuncArrayLengthReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue1, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult1, class UFortItem*& K2NodeEventItemToView, struct FGuid& K2NodeEventRequestId1, struct TArray<class UFortItem*>& K2NodeMakeArrayArray2, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncHasAuthorityReturnValue1, class AFortPlayerPawn*& K2NodeEventPawn2, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue3, class AFortPlayerPawn*& K2NodeEventPawn1, int& TempintArrayIndexVariable, struct FVector& CallFuncK2GetActorLocationReturnValue, class USceneComponent*& CallFuncArrayGetItem, class USkeletalMeshComponent*& K2NodeDynamicCastAsSkeletalMeshComponent, bool& K2NodeDynamicCastbSuccess3, int& CallFuncGetPartyMemberIndexByPlayerPawnOutPlayerIndex, bool& CallFuncGetPartyMemberIndexByPlayerPawnReturnValue, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess4, struct FUniqueNetIdRepl& CallFuncGetPlayerIdFromPartyMemberIndexReturnValue, class AFortPlayerPawn*& K2NodeEventPawn, int& K2NodeEventPartyIndex, bool& CallFuncEqualEqualIntIntReturnValue, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena1, bool& K2NodeDynamicCastbSuccess5, bool& TempboolBExecutionHappenedVariable, bool& CallFuncIsInCharacterCustomizationReturnValue, bool& TempboolAExecutionHappenedVariable, bool& CallFuncBooleanANDReturnValue, struct FTransform& CallFuncGetTransformReturnValue1, class UFortItemDefinition*& CallFuncGetItemDefinitionToShowItemDefinition3, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue1, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena2, bool& K2NodeDynamicCastbSuccess6, class UFXSystemComponent*& CallFuncGetContrailFXComponentReturnValue, class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, class UFrontendAnimInstance*& K2NodeDynamicCastAsFrontendAnimInstance, bool& K2NodeDynamicCastbSuccess7, bool& CallFuncIsValidReturnValue4, bool& TempboolHasBeenInitdVariable, bool& TempboolIsClosedVariable, class UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals*& CallFuncSetupPrefabVisualsReturnValue, bool& CallFuncIsValidReturnValue5, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue2, enum ESubGame& CallFuncGetSubGameReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct FVector& CallFuncConvFloatToVectorReturnValue, int& TempintLoopCounterVariable, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue2, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UFortItem*& TempobjectVariable, struct TArray<class UFortItem*>& K2NodeMakeArrayArray3, struct FGuid& TempstructVariable, class UFortItem*& K2NodeCustomEventItem, struct FGuid& K2NodeCustomEventRequestId, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UFortPartyContext*& CallFuncGetContextReturnValue, enum EFortPartyMemberLocation& CallFuncGetPartyMemberLocationLocationOut, bool& CallFuncGetPartyMemberLocationReturnValue, struct FLinearColor& CallFuncLinearColorLerpReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct FLinearColor& CallFuncLinearColorLerpReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue1, bool& CallFuncK2AttachToComponentReturnValue, struct FTransform& CallFuncGetRelativeTransformReturnValue, class UStaticMeshComponent*& CallFuncAddComponentReturnValue, bool& CallFuncIsValidReturnValue6, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, class UFortFrontEndContext*& CallFuncGetLocalPlayerSubSystemFromPlayerControllerReturnValue, int& CallFuncGetCurrentLockerSubslotIndexReturnValue, class AB_EmotePreviewDisplay_C*& K2NodeDynamicCastAsBEmotePreviewDisplay, bool& K2NodeDynamicCastbSuccess8, struct TWeakObjectPtr<class UClass>& CallFuncGetPreviewPrefabAssetAtSubSlotAsset, bool& CallFuncGetPreviewPrefabAssetAtSubSlotReturnValue, class UClass*& CallFuncConvSoftClassReferenceToClassReturnValue, class UClass*& K2NodeClassDynamicCastAsActor, bool& K2NodeClassDynamicCastbSuccess, class UFortItemDefinition*& CallFuncGetItemDefinitionToShowItemDefinition4, bool& CallFuncIsDedicatedServerReturnValue1, struct FVector& CallFuncConvFloatToVectorReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue2, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue3, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue4, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue); // (Final | 0x00008000 | HasDefaults)
};

