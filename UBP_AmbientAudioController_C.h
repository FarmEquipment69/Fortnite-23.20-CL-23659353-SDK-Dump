// BlueprintGeneratedClass /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C
// Size: 0x1f8
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xc8 (0x8)
	double CheckFrequency; // 0xd0 (0x8)
	bool bInSnowCurrent; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x7]; // 0xd9 (0x7) 
	class UAmbientAudioDataAsset* WinterAudioBank; // 0xe0 (0x8)
	bool bSnowEnabled; // 0xe8 (0x1)
	unsigned char unreflected_e9[0x7]; // 0xe9 (0x7) 
	class UAmbientAudioDataAsset* StormAudioBank; // 0xf0 (0x8)
	struct FGameplayTag AmbientAudioInsideTag; // 0xf8 (0x4)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	class UAmbientAudioDataAsset* CurieAudioBank; // 0x100 (0x8)
	struct FVector SnowOriginWorldLoc; // 0x108 (0x18)
	double SnowRadius; // 0x120 (0x8)
	struct TArray<struct FGameplayTag> SnowTagsToApply; // 0x128 (0x10)
	struct FName SnowEntryName; // 0x138 (0x4)
	unsigned char unreflected_13c[0x4]; // 0x13c (0x4) 
	double IndoorInterpTime; // 0x140 (0x8)
	double IndoorStateChangedTime; // 0x148 (0x8)
	bool bIsIndoors; // 0x150 (0x1)
	unsigned char unreflected_151[0x7]; // 0x151 (0x7) 
	double IsPlayerIndoorsInterp; // 0x158 (0x8)
	class AActor* CurrViewTarget; // 0x160 (0x8)
	struct TArray<struct FGameplayTag> GenericTagsToApply; // 0x168 (0x10)
	bool bTagApplicationEnabled; // 0x178 (0x1)
	enum EInteriorAudioState CurrentState; // 0x179 (0x1)
	unsigned char unreflected_17a[0x2]; // 0x17a (0x2) 
	struct FGameplayTag CurrentRoomSizeTag; // 0x17c (0x4)
	struct TMap<struct FGameplayTag, class UReverbEffect*> Reverbs; // 0x180 (0x50)
	class UFortGameStateComponent_SurfaceOverride* SnowCoverageComponent; // 0x1d0 (0x8)
	struct TArray<struct FString> SupportedTagLevels; // 0x1d8 (0x10)
	double SpecialSurfacePadding; // 0x1e8 (0x8)
	class USoundMix* AmbientAudioSoundMix; // 0x1f0 (0x8)

	/* Functions */

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.InitSnowCoverageComponent (Has no native function)
	void InitSnowCoverageComponent(class AGameStateBase*& GameState, class UFortGameStateComponent_SurfaceOverride*& CallFuncGetComponentByClassReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.OnViewTargetChanged (Has no native function)
	void OnViewTargetChanged(class AActor*& NewTarget, class AActor*& PrevTarget); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.CacheViewTarget (Has no native function)
	void CacheViewTarget(class AActor*& NewViewTarget, bool& CallFuncNotEqualObjectObjectReturnValue, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, class AActor*& CallFuncGetViewTargetReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.RemovePlayerTags (Has no native function)
	void RemovePlayerTags(class AActor*& Player, struct TArray<struct FGameplayTag>& Array, int& CallFuncArrayLengthReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, struct FGameplayTag& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.ApplyPlayerTags (Has no native function)
	void ApplyPlayerTags(class AActor*& Player, struct TArray<struct FGameplayTag>& TagArray, int& CallFuncArrayLengthReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, struct FGameplayTag& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.UpdateSnowSetupBP (Has no native function)
	void UpdateSnowSetupBP(class UAmbientAudioSubsystem*& CallFuncGetWorldSubsystemReturnValue, bool& CallFuncIsValidReturnValue, struct TEnumAsByte<EPhysicalSurface>& CallFuncGetSpecialSurfaceTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsLocationInSpecialSurfaceReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue, bool& CallFuncBooleanANDReturnValue, float& CallFuncIsLocationInSpecialSurfacePaddingImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.OnReady_C8AC4F724844E04160BE56BEAB4A2614 (Has no native function)
	void OnReadyC8AC4F724844E04160BE56BEAB4A2614(class AGameStateBase*& GameState); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.Update (Has no native function)
	void Update(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.InteriorStateChanged (Has no native function)
	void InteriorStateChanged(enum EInteriorAudioState& PreviousState, enum EInteriorAudioState& CurrentState); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.On Room Size Changed (Has no native function)
	void OnRoomSizeChanged(struct FGameplayTag& Curr, struct FGameplayTag& Prev); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.On Room State Changed (Has no native function)
	void OnRoomStateChanged(enum EInteriorAudioState& Curr, enum EInteriorAudioState& Prev); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.Update Interior Audio Verb (Has no native function)
	void UpdateInteriorAudioVerb(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController (Has no native function)
	void ExecuteUbergraphBPAmbientAudioController(int& EntryPoint, bool& TempboolVariable, bool& TempboolVariable1, class UAmbientAudioSubsystem*& CallFuncGetWorldSubsystemReturnValue, class UFortInteriorAudioSubsystem*& CallFuncGetWorldSubsystemReturnValue1, struct FInteriorAudioPlayerInfo& CallFuncGetPlayerInfoReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AGameStateBase*& K2NodeCustomEventGameState, bool& CallFuncEqualEqualByteByteReturnValue, class AGameStateBase*& TempobjectVariable, class UFortAsyncAction_GameStateReady*& CallFuncGameStateReadyAsyncReturnValue, struct TArray<enum EInteriorAudioState>& TempwildcardAvoidcreatingarrayeverytimeVariable, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayTag& TempwildcardToallowthepreviousvaluetobereturnedVariable, struct TArray<struct FGameplayTag>& TempwildcardAvoidcreatingarrayeverytimeVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, enum EInteriorAudioState& TempwildcardToallowthepreviousvaluetobereturnedVariable1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncIsDedicatedServerReturnValue, bool& TempboolVariable2, enum EInteriorAudioState& K2NodeCustomEventPreviousState, enum EInteriorAudioState& K2NodeCustomEventCurrentState, float& K2NodeEventDeltaSeconds, double& CallFuncGetGameTimeInSecondsReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncMapRangeClampedReturnValue, double& CallFuncSelectFloatReturnValue, double& CallFuncSelectFloatReturnValue1, double& CallFuncLerpReturnValue, bool& CallFuncEqualEqualDoubleDoubleReturnValue, bool& TempboolVariable3, bool& CallFuncArrayContainsReturnValue, struct FGameplayTag& K2NodeCustomEventCurr1, struct FGameplayTag& K2NodeCustomEventPrev1, bool& CallFuncArrayContainsReturnValue1, enum EInteriorAudioState& K2NodeCustomEventCurr, enum EInteriorAudioState& K2NodeCustomEventPrev, bool& K2NodeSwitchEnumCmpSuccess, class UReverbEffect*& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, enum EInteriorAudioState& TempbyteVariable, bool& K2NodeSelectDefault, struct FString& CallFuncGetCurrentLevelNameReturnValue, class UFortInteriorAudioSubsystem*& CallFuncGetWorldSubsystemReturnValue2, bool& CallFuncArrayContainsReturnValue2, float& CallFuncSetScalarParameterValueParameterValueImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

