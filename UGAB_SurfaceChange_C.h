// BlueprintGeneratedClass /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C
// Size: 0xdb8
class UGAB_SurfaceChange_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	bool Debug; // 0xb28 (0x1)
	unsigned char unreflected_b29[0x7]; // 0xb29 (0x7) 
	struct FScalableFloat RemovalDelay; // 0xb30 (0x28)
	struct FScalableFloat IcySurfacesEnabled; // 0xb58 (0x28)
	struct FGameplayTagContainer HasIce; // 0xb80 (0x20)
	class UClass* GESurfaceChangeIce; // 0xba0 (0x8)
	class UClass* GESurfaceChangeSnow; // 0xba8 (0x8)
	class UClass* GESurfaceChangeLava; // 0xbb0 (0x8)
	class AFortPawn* AvatarPawn; // 0xbb8 (0x8)
	struct FGameplayTagContainer IceTags; // 0xbc0 (0x20)
	struct FGameplayTagContainer LavaTags; // 0xbe0 (0x20)
	struct FGameplayTagContainer SnowTags; // 0xc00 (0x20)
	struct FGameplayTagContainer SandTags; // 0xc20 (0x20)
	struct FGameplayTagContainer ChromeTags; // 0xc40 (0x20)
	double LavaBounceMultiplier; // 0xc60 (0x8)
	double RandomAngleOffset; // 0xc68 (0x8)
	struct FScalableFloat RandomConeAngle; // 0xc70 (0x28)
	struct FScalableFloat FacingAngleVelocityComponent; // 0xc98 (0x28)
	struct FScalableFloat BaseVerticalBounceVelocity; // 0xcc0 (0x28)
	struct FScalableFloat BaseLateralBounceVelocity; // 0xce8 (0x28)
	struct FScalableFloat MaxBounceMultiplier; // 0xd10 (0x28)
	struct FScalableFloat BounceMultiplierStepAmount; // 0xd38 (0x28)
	struct FRandomStream* RandomAngleStream; // 0xd60 (0x8)
	struct FGameplayTag LavaBounceCue; // 0xd68 (0x4)
	struct FGameplayTag EventTagSandUnburrow; // 0xd6c (0x4)
	struct FScalableFloat IceLingerDuration; // 0xd70 (0x28)
	struct FGameplayTagContainer PreviousSurfaceTagContainer; // 0xd98 (0x20)

	/* Functions */

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.OnRep_ReplicatedRandomAngle (Has no native function)
	void OnRepReplicatedRandomAngle(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanup (Has no native function)
	void SurfaceCleanup(bool& AddLingeringEffects, struct TEnumAsByte<EPhysicalSurface>& SurfaceType, bool& bHasChrome, bool& bHasSand, bool& bHasSnow, bool& bAddLingeringEffects, bool& bHasLava, bool& bHasIce, float& CallFuncGetValueAtLevelReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotEqualByteByteReturnValue1, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncHasTagReturnValue, bool& CallFuncNotEqualByteByteReturnValue2, bool& CallFuncNotEqualByteByteReturnValue3, bool& CallFuncNotEqualByteByteReturnValue4, bool& CallFuncBooleanANDReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, bool& CallFuncBooleanANDReturnValue3, bool& CallFuncBooleanANDReturnValue4, bool& CallFuncBooleanANDReturnValue5, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput, bool& CallFuncHasAllMatchingGameplayTagsReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput1, bool& CallFuncHasAllMatchingGameplayTagsReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput2, bool& CallFuncHasAllMatchingGameplayTagsReturnValue2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput3, bool& CallFuncHasAllMatchingGameplayTagsReturnValue3, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.LavaBounce (Has no native function)
	void LavaBounce(float& CallFuncRandomFloatFromStreamReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FRotator& CallFuncK2GetActorRotationReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, int& CallFuncFFloorReturnValue, float& CallFuncNormalizeAxisReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, int& CallFuncFFloorReturnValue1, int& CallFuncFFloorReturnValue2, int& CallFuncAddIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncHasAuthorityReturnValue, float& CallFuncGetValueAtLevelReturnValue1, float& CallFuncGetValueAtLevelReturnValue2, float& CallFuncGetValueAtLevelReturnValue3, float& CallFuncGetValueAtLevelReturnValue4, float& CallFuncGetValueAtLevelReturnValue5, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, float& CallFuncGetValueAtLevelReturnValue6, struct FRotator& CallFuncMakeRotatorReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue2, double& CallFuncRandomFloatInRangeReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, struct FRotator& CallFuncK2GetActorRotationReturnValue1, struct FVector& CallFuncConvRotatorToVectorReturnValue, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncGreaterGreaterVectorRotatorReturnValue, double& CallFuncFMinReturnValue, struct FVector2D& CallFuncConvVectorToVector2DReturnValue, struct FVector2D& CallFuncNormal2DReturnValue, struct FVector2D& CallFuncMultiplyVector2DFloatReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, struct FVector& CallFuncGetVelocityReturnValue, struct FVector& CallFuncMirrorVectorByNormalReturnValue, struct FVector2D& CallFuncConvVectorToVector2DReturnValue1, struct FVector2D& CallFuncNormal2DReturnValue1, struct FVector2D& CallFuncMultiplyVector2DFloatReturnValue1, struct FVector2D& CallFuncAddVector2DVector2DReturnValue, struct FVector& CallFuncConvVector2DToVectorReturnValue, struct FVector& CallFuncNormalReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, double& CallFuncVSizeReturnValue, struct FVector& CallFuncNormalReturnValue1, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector_NetQuantizeNormal& CallFuncMakeVectorNetQuantizeNormalReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& CallFuncFFloorAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleBImplicitCast, double& CallFuncFMinBImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast1, double& CallFuncMultiplyVector2DFloatBImplicitCast, float& CallFuncMakeRotatorYawImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast2, double& CallFuncRandomFloatInRangeMaxImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication (Has no native function)
	void HotfixableGEApplication(struct FScalableFloat& Input, class UClass*& GameplayEffectAppliedOnTrue, class UClass*& GameplayEffectAppliedOnFalse, struct FActiveGameplayEffectHandle*& GEHandle, float& CallFuncGetValueAtLevelReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanupSpecial (Has no native function)
	void SurfaceCleanupSpecial(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.MovementModeChanged (Has no native function)
	void MovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.GamePhaseChanged (Has no native function)
	void GamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange (Has no native function)
	void ExecuteUbergraphGABSurfaceChange(int& EntryPoint, struct FGameplayEventData& K2NodeEventEventData, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, bool& GameplayTagsK2NodeSwitchGameplayTagContainerCmpSuccess, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess1, class AActor*& K2NodeDynamicCastAsActor, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncHasMatchingGameplayTagReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class ACharacter*& K2NodeCustomEventCharacter, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventPrevMovementMode, unsigned char& K2NodeCustomEventPreviousCustomMode, bool& CallFuncIsValidReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, bool& CallFuncIsFallingReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncHotfixableGEApplicationGEHandle, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue3, enum EAthenaGamePhase& K2NodeCustomEventGamePhase, bool& TempboolVariable, bool& CallFuncEqualEqualByteByteReturnValue, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsValidReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

