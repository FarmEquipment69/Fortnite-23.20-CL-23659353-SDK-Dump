// BlueprintGeneratedClass /Irwin/GameplayCues/GCNL_Irwin_Swim.GCNL_Irwin_Swim_C
// Size: 0x980
class AGCNL_Irwin_Swim_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class AFortAIPawn* Irwin; // 0x968 (0x8)
	class UFXSystemComponent* SwimVFX; // 0x970 (0x8)
	class UFortMovementComp_AIChar* IrwinMovement; // 0x978 (0x8)

	/* Functions */

	// Function /Irwin/GameplayCues/GCNL_Irwin_Swim.GCNL_Irwin_Swim_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCNL_Irwin_Swim.GCNL_Irwin_Swim_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCNL_Irwin_Swim.GCNL_Irwin_Swim_C.ExecuteUbergraph_GCNL_Irwin_Swim (Has no native function)
	void ExecuteUbergraphGCNLIrwinSwim(int& EntryPoint, struct FVector& CallFuncGetWaterSurfaceNormalReturnValue, struct FVector& CallFuncGetWaterSurfaceLocationReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, float& CallFuncGetWaterImmersionDepthReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, bool& CallFuncIsSurfaceSwimmingReturnValue, class UFortMovementComp_AIChar*& K2NodeDynamicCastAsFortMovementCompAIChar, bool& K2NodeDynamicCastbSuccess1, class AFortWaterBodyActor*& CallFuncGetCurrentWaterBodyReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncBooleanORReturnValue, float& K2NodeEventDeltaSeconds); // (Final | 0x00008000 | HasDefaults)
};

