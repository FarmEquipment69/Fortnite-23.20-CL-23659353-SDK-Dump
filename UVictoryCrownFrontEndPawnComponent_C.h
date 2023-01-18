// BlueprintGeneratedClass /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C
// Size: 0xd2
class UVictoryCrownFrontEndPawnComponent_C : public UFortPawnComponent_VictoryCrownsFrontEnd
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb8 (0x8)
	struct FGameplayTag CrownFXCueTag; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	class APlayerPawn_Athena_C* AthenaPawn; // 0xc8 (0x8)
	bool AccountHasCrown; // 0xd0 (0x1)
	bool AppliedCrownFX; // 0xd1 (0x1)

	/* Functions */

	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.UpdateForGCNL (Has no native function)
	void UpdateForGCNL(bool& ShouldApplyFX, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue2, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6 (Has no native function)
	void OnStatChanged80A6FD2F402F11C0D0A207ACE25F03A6(struct FName& StatName, int& StatValue); // (BlueprintCallable | BlueprintEvent)

	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.PlaylistChanged (Has no native function)
	void PlaylistChanged(); // (Event | Protected | BlueprintEvent)

	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Public | BlueprintEvent)

	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ExecuteUbergraph_VictoryCrownFrontEndPawnComponent (Has no native function)
	void ExecuteUbergraphVictoryCrownFrontEndPawnComponent(int& EntryPoint, struct FName& K2NodeCustomEventStatName, int& K2NodeCustomEventStatValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, int& TempintVariable, struct FName& TempnameVariable, bool& CallFuncGreaterIntIntReturnValue, class AActor*& CallFuncGetOwnerReturnValue, class AActor*& CallFuncGetOwnerReturnValue1, class AFortTeamMemberPedestal*& K2NodeDynamicCastAsFortTeamMemberPedestal, bool& K2NodeDynamicCastbSuccess, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1, class UFortAsyncAction_CosmeticAdaptiveStatWatcher*& CallFuncWatchCosmeticStatReturnValue, bool& CallFuncIsValidReturnValue, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason); // (Final | 0x00008000)
};

