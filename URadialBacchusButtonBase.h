// Class /Script/FortniteUI.RadialBacchusButtonBase
// Size: 0x320
class URadialBacchusButtonBase : public UFortHUDElementWidget
{
	struct FGameplayTagContainer TrackedCooldownTags; // 0x2d0 (0x20)
	enum ECooldownTrackingType TrackingType; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x3]; // 0x2f1 (0x3) 
	float CooldownDuration; // 0x2f4 (0x4)
	float CooldownStartTime; // 0x2f8 (0x4)
	unsigned char unreflected_2fc[0x14]; // 0x2fc (0x14) 
	class AFortPawn* TrackedPawn; // 0x310 (0x8)
	unsigned char padding_318[0x8]; // 0x318 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.RadialBacchusButtonBase.UpdateDuration_Blueprint (Has no native function)
	void UpdateDurationBlueprint(float& Remaining, float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.UpdateCooldown (Underlying native function: UpdateCooldown 0xa5bdfa8)
	void UpdateCooldown(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.StopUpdateCooldown (Underlying native function: StopUpdateCooldown 0xa5bdf30)
	void StopUpdateCooldown(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.StartUpdateCooldown (Underlying native function: StartUpdateCooldown 0xa5bdf1c)
	void StartUpdateCooldown(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.SetListenedGameplayTag (Underlying native function: SetListenedGameplayTag 0xa5bd1cc)
	void SetListenedGameplayTag(struct FGameplayTag& InListenedTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.ReceiveRadialProgressEvent_Blueprint (Has no native function)
	void ReceiveRadialProgressEventBlueprint(struct FName& EventName, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.ReceiveRadialProgressEvent (Underlying native function: ReceiveRadialProgressEvent 0xa5bcd3c)
	void ReceiveRadialProgressEvent(struct FName& EventName, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.OnPlayerPawnSet (Underlying native function: OnPlayerPawnSet 0xa5bbc08)
	void OnPlayerPawnSet(); // (Final | Native | Private)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.OnCooldownStarted (Has no native function)
	void OnCooldownStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.OnCooldownCompleted (Has no native function)
	void OnCooldownCompleted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.HasActiveCooldown (Underlying native function: HasActiveCooldown 0xa5bb090)
	bool HasActiveCooldown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.HandleUIGameplayCue (Underlying native function: HandleUIGameplayCue 0xa5bac28)
	void HandleUIGameplayCue(struct FName& CueName, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.GetRemainingDuration (Underlying native function: GetRemainingDuration 0xa5b93b4)
	float GetRemainingDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.GetListenedGameplayTag (Underlying native function: GetListenedGameplayTag 0xa530958)
	struct FGameplayTag GetListenedGameplayTag(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.RadialBacchusButtonBase.GameplayTagCallback (Underlying native function: GameplayTagCallback 0xa5b8928)
	void GameplayTagCallback(struct FGameplayTag& tag, int& NewCount); // (Final | Native | Private)
};

