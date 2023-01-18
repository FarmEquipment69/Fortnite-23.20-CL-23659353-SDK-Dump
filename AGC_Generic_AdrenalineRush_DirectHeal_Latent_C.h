// BlueprintGeneratedClass /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C
// Size: 0xa08
class AGC_Generic_AdrenalineRush_DirectHeal_Latent_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	float HealthSweepSafetyOpacityAEAC519D4817261537105281CD9192C7; // 0x968 (0x4)
	float HealthSweepSweepAEAC519D4817261537105281CD9192C7; // 0x96c (0x4)
	struct TEnumAsByte<ETimelineDirection> HealthSweepDirectionAEAC519D4817261537105281CD9192C7; // 0x970 (0x1)
	unsigned char unreflected_971[0x7]; // 0x971 (0x7) 
	class UTimelineComponent* HealthSweep; // 0x978 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> DuplicateMIDs; // 0x980 (0x10)
	struct FLinearColor AdrenalineRushColorOuterDirect; // 0x990 (0x10)
	struct FLinearColor AdrenalineRushColorInnerDirect; // 0x9a0 (0x10)
	double AdrenalineRushWPOOffset; // 0x9b0 (0x8)
	struct TMap<struct TEnumAsByte<EFortCustomPartType>, class USkeletalMeshComponent*> DuplicateMeshMap; // 0x9b8 (0x50)

	/* Functions */

	// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Toggle Mesh Visibility (Has no native function)
	void ToggleMeshVisibility(bool& Visibility, int& TempintVariable, int& TempintVariable1, unsigned char& CallFuncConvIntToByteReturnValue, int& CallFuncAddIntIntReturnValue, unsigned char& CallFuncGetValidValueReturnValue, unsigned char& CallFuncConvIntToByteReturnValue1, unsigned char& CallFuncGetEnumeratorValueFromIndexReturnValue, int& CallFuncConvByteToIntReturnValue, int& CallFuncMakeLiteralIntReturnValue, bool& CallFuncLessIntIntReturnValue, class USkeletalMeshComponent*& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Set Adrenaline Rush Visibility (Has no native function)
	void SetAdrenalineRushVisibility(bool& Visible, class AFortPlayerPawn*& PlayerPawn, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__FinishedFunc (Has no native function)
	void HealthSweepFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__UpdateFunc (Has no native function)
	void HealthSweepUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Duplicate Meshes (Has no native function)
	void DuplicateMeshes(class AFortPlayerPawn*& PlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.OnCosmeticPart (Has no native function)
	void OnCosmeticPart(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent (Has no native function)
	void ExecuteUbergraphGCGenericAdrenalineRushDirectHealLatent(int& EntryPoint, class AFortPlayerPawn*& K2NodeCustomEventPawn, class UCustomCharacterPart*& K2NodeCustomEventPart, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType, class USkeletalMesh*& CallFuncGetSkeletalMeshDEPRECATEDReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, class AActor*& K2NodeEventMyTarget, struct TEnumAsByte<EGameplayCueEvent>& K2NodeEventEventType, struct FGameplayCueParameters& K2NodeEventParameters, bool& K2NodeSwitchEnumCmpSuccess, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, int& TempintArrayIndexVariable, class UMaterialInterface*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class AFortPlayerPawn*& K2NodeCustomEventPlayerPawn, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut, struct FTransform& TempstructVariable, struct TEnumAsByte<EFortCustomPartType>& TempbyteVariable, class USkeletalMeshComponent*& CallFuncAddComponentReturnValue, struct TEnumAsByte<EFortCustomPartType>& TempbyteVariable1, int& TempintLoopCounterVariable1, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, class USkeletalMeshComponent*& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, bool& CallFuncArrayIsValidIndexReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, int& CallFuncArrayAddReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue1, bool& CallFuncK2AttachToComponentReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

