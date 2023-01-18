// BlueprintGeneratedClass /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C
// Size: 0x57c
class AB_Pickups_Parent_C : public AFortPickupsParent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3f8 (0x8)
	class USceneComponent* Root; // 0x400 (0x8)
	float MobileSelectedTLLerpInteactoIconFF208F9641BE589B76EF698B94309EA7; // 0x408 (0x4)
	float MobileSelectedTLLerpObjectFF208F9641BE589B76EF698B94309EA7; // 0x40c (0x4)
	struct TEnumAsByte<ETimelineDirection> MobileSelectedTLDirectionFF208F9641BE589B76EF698B94309EA7; // 0x410 (0x1)
	unsigned char unreflected_411[0x7]; // 0x411 (0x7) 
	class UTimelineComponent* MobileSelectedTL; // 0x418 (0x8)
	class UStaticMeshComponent* StaticMeshPickup; // 0x420 (0x8)
	class USkeletalMeshComponent* SkeletalMeshPickup; // 0x428 (0x8)
	class UPrimitiveComponent* SkeletalOrStaticMeshAssetPrimitive; // 0x430 (0x8)
	int CurrentElementIndex; // 0x438 (0x4)
	bool Tossed; // 0x43c (0x1)
	unsigned char unreflected_43d[0x3]; // 0x43d (0x3) 
	double ComponentRadiusScaled; // 0x440 (0x8)
	double ComponentRadiusMultiplier; // 0x448 (0x8)
	struct TArray<struct FLinearColor> OutlineRarityColors; // 0x450 (0x10)
	double ComponentRadius; // 0x460 (0x8)
	double PickedUpDelayBeforeGlow; // 0x468 (0x8)
	double PickedUpFadeInTime; // 0x470 (0x8)
	double PickedUpHoldTime; // 0x478 (0x8)
	double PickedUpFadeOutTime; // 0x480 (0x8)
	double PickedUpSweepSpeed; // 0x488 (0x8)
	class UParticleSystem* PickedUpTrailPS; // 0x490 (0x8)
	struct TArray<double> SparkleSpawnRatePickedUp; // 0x498 (0x10)
	struct TArray<double> LifetimePickedUp; // 0x4a8 (0x10)
	class UForceFeedbackEffect* PickupForceFeedback; // 0x4b8 (0x8)
	struct TArray<struct FString> NamesofMaterialsAndParentsExemptfromRepartening; // 0x4c0 (0x10)
	bool HasUniqueMaterialIds; // 0x4d0 (0x1)
	unsigned char unreflected_4d1[0x7]; // 0x4d1 (0x7) 
	class UParticleSystemComponent* BackgroundParticleSystem; // 0x4d8 (0x8)
	struct TArray<struct FLinearColor> BackgroundRarityColors; // 0x4e0 (0x10)
	double RandomRotation; // 0x4f0 (0x8)
	struct FVector MobileSelectedOffset; // 0x4f8 (0x18)
	struct FVector MobileSelectedScale; // 0x510 (0x18)
	class UStaticMeshComponent* MobileInteractIcon; // 0x528 (0x8)
	struct FVector MobileInteractIconLocation; // 0x530 (0x18)
	struct FVector MobileInteractIconScale; // 0x548 (0x18)
	class UMaterialInterface* MobileInteractionMaterial; // 0x560 (0x8)
	bool PickedUp; // 0x568 (0x1)
	unsigned char unreflected_569[0x3]; // 0x569 (0x3) 
	struct FLinearColor MissionItemOutlineColor; // 0x56c (0x10)

	/* Functions */

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.GetViewDistanceQuality (Has no native function)
	int GetViewDistanceQuality(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Setup View Distances (Has no native function)
	void SetupViewDistances(int& viewDistanceQuality, int& lviewQuality, int& CallFuncGetViewDistanceQualityReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup (Has no native function)
	void MobileInterationIconSetup(int& TempintVariable, class UMaterialInterface*& TempobjectVariable, class UMaterialInterface*& TempobjectVariable1, class UMaterialInterface*& TempobjectVariable2, class UMaterialInterface*& TempobjectVariable3, class UMaterialInterface*& TempobjectVariable4, class UMaterialInterface*& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon (Has no native function)
	void SetVisibleMobileInteractIcon(bool& Visible, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncIsValidReturnValue2, struct FRotator& CallFuncMakeRotatorReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, class UStaticMeshComponent*& CallFuncAddComponentReturnValue, float& CallFuncMakeRotatorYawImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem (Has no native function)
	void SetActiveBackgroundParticleSystem(bool& Active, bool& Reset, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents (Has no native function)
	void SetHiddenBackgroundVisualComponents(bool& Hidden); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents (Has no native function)
	void DestroyBackgroundVisualComponents(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP (Has no native function)
	void ScaleHologramTimingsForPvP(double& PVPTimeScale, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, enum ESubGame& CallFuncGetSubGameReturnValue, bool& K2NodeSwitchEnumCmpSuccess, double& CallFuncMultiplyDoubleDoubleReturnValue4); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams (Has no native function)
	void SetHologramPickedUpParams(bool& Tier0, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintLoopCounterVariable1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue, int& CallFuncAddIntIntReturnValue1, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, bool& CallFuncLessIntIntReturnValue1, int& TempintArrayIndexVariable1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem1, bool& CallFuncIsValidReturnValue1, double& CallFuncGetGameTimeInSecondsReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue1, double& CallFuncFractionReturnValue, double& CallFuncFractionReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncGetGameTimeInSecondsReturnValue2, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue1, double& CallFuncGetGameTimeInSecondsReturnValue3, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, float& CallFuncSetScalarParameterValueValueImplicitCast3, float& CallFuncSetScalarParameterValueValueImplicitCast4, float& CallFuncSetScalarParameterValueValueImplicitCast5, float& CallFuncSetScalarParameterValueValueImplicitCast6, float& CallFuncSetScalarParameterValueValueImplicitCast7, float& CallFuncSetScalarParameterValueValueImplicitCast8); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS (Has no native function)
	void SpawnPickedUpTrailPS(class UParticleSystemComponent*& TrailPS, struct FVector& CallFuncConvLinearColorToVectorReturnValue, double& CallFuncArrayGetItem, double& CallFuncArrayGetItem1, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1, float& CallFuncSetFloatParameterParamImplicitCast2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(int& lviewQuality, class UPrimitiveComponent*& CallFuncSetupPickupMeshReturnValue, struct FVector& CallFuncGetComponentBoundsOrigin, struct FVector& CallFuncGetComponentBoundsBoxExtent, float& CallFuncGetComponentBoundsSphereRadius, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& K2NodeVariableSetComponentRadiusImplicitCast); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc (Has no native function)
	void MobileSelectedTLFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc (Has no native function)
	void MobileSelectedTLUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight (Has no native function)
	void EnableBacchusHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight (Has no native function)
	void DisableBacchusHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.HideBackgroundAndSpotlight (Has no native function)
	void HideBackgroundAndSpotlight(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnAttached (Has no native function)
	void OnAttached(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnTossed (Has no native function)
	void OnTossed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnAboutToEnterBackpack (Has no native function)
	void OnAboutToEnterBackpack(class AFortPawn*& PickupTarget); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp (Has no native function)
	void OnPickedUp(class AFortPawn*& PickupTarget); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent (Has no native function)
	void ExecuteUbergraphBPickupsParent(int& EntryPoint, double& TemprealVariable, bool& CallFuncIsValidReturnValue, double& TemprealVariable1, bool& CallFuncIsValidReturnValue1, enum ESubGame& CallFuncGetSubGameReturnValue, bool& K2NodeSwitchEnumCmpSuccess, enum ESubGame& CallFuncGetSubGameReturnValue1, double& TemprealVariable2, struct FVector& CallFuncK2GetComponentLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, double& TemprealVariable3, struct FHitResult& CallFuncK2SetRelativeLocationSweepHitResult, class AActor*& CallFuncGetAttachParentActorReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue1, class AFortPickup*& K2NodeDynamicCastAsFortPickup, bool& K2NodeDynamicCastbSuccess, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, float& CallFuncGetMovementCapsuleHalfHeightReturnValue, struct FVector& CallFuncGetComponentBoundsOrigin, struct FVector& CallFuncGetComponentBoundsBoxExtent, float& CallFuncGetComponentBoundsSphereRadius, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, double& CallFuncSubtractDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, float& K2NodeEventDeltaSeconds, bool& CallFuncIsDedicatedServerReturnValue, class AFortPawn*& K2NodeEventPickupTarget1, bool& CallFuncIsLocallyControlledReturnValue, bool& CallFuncBooleanANDReturnValue, class AController*& CallFuncGetControllerReturnValue, bool& CallFuncIsValidReturnValue2, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess1, class AFortPawn*& K2NodeEventPickupTarget, class UFortIngredientItemDefinition*& K2NodeDynamicCastAsFortIngredientItemDefinition, bool& K2NodeDynamicCastbSuccess2, class UFortResourceItemDefinition*& K2NodeDynamicCastAsFortResourceItemDefinition, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncIsDedicatedServerReturnValue1, int& TempintVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsDedicatedServerReturnValue2, double& TemprealVariable4, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, int& CallFuncArrayLastIndexReturnValue, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncSetupViewDistancesviewDistanceQuality, bool& CallFuncGreaterEqualIntIntReturnValue, enum ESubGame& TempbyteVariable, bool& CallFuncEqualEqualIntIntReturnValue, double& K2NodeSelectDefault, bool& K2NodeSwitchEnumCmpSuccess1, enum ESubGame& CallFuncGetSubGameReturnValue2, bool& K2NodeSwitchEnumCmpSuccess2, struct FVector& CallFuncConvFloatToVectorReturnValue, double& CallFuncAddDoubleDoubleReturnValue1, double& CallFuncAddDoubleDoubleReturnValue2, double& CallFuncAddDoubleDoubleReturnValue3, double& CallFuncSubtractDoubleDoubleBImplicitCast, float& K2NodeVariableSetCustomTimeDilationImplicitCast, float& CallFuncDelayDurationImplicitCast, float& CallFuncDelayDurationImplicitCast1, float& CallFuncDelayDurationImplicitCast2); // (Final | 0x00008000 | HasDefaults)
};

