// Class /Script/FortniteUI.LTMWidgetBase
// Size: 0x328
class ULTMWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	class UClass* MutatorClassToWaitFor; // 0x310 (0x8)
	class AFortGameplayMutator* CachedGameplayMutator; // 0x318 (0x8)
	unsigned char unreflected_320[0x1]; // 0x320 (0x1) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x321 (0x2)
	unsigned char padding_323[0x5]; // 0x323 (0x5)

	/* Functions */

	// Function /Script/FortniteUI.LTMWidgetBase.SetPlayerPortrait (Underlying native function: SetPlayerPortrait 0xa5801d8)
	void SetPlayerPortrait(class AFortPlayerStateAthena*& Player, class UFortLazyImage*& PortraitImage); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.LTMWidgetBase.OnStompFailed (Has no native function)
	void OnStompFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMWidgetBase.OnStompedByOtherWidget (Has no native function)
	void OnStompedByOtherWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMWidgetBase.OnMutatorAvailable_BP (Has no native function)
	void OnMutatorAvailableBP(class AFortGameplayMutator*& MutatorActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMWidgetBase.OnHandleSpectatingChanged (Underlying native function: OnHandleSpectatingChanged 0xa57f00c)
	void OnHandleSpectatingChanged(class AFortPlayerStateZone*& SpectatingTarget); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteUI.LTMWidgetBase.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0xa57ec98)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteUI.LTMWidgetBase.K2_OnBecomeInactive (Has no native function)
	void K2OnBecomeInactive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMWidgetBase.K2_OnBecomeActive (Has no native function)
	void K2OnBecomeActive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMWidgetBase.K2_HasActiveContent (Has no native function)
	bool K2HasActiveContent(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteUI.LTMWidgetBase.GetViewingTeam (Underlying native function: GetViewingTeam 0xa57d2a8)
	unsigned char GetViewingTeam(); // (Final | 0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.LTMWidgetBase.GetViewingPlayerState (Underlying native function: GetViewingPlayerState 0x735c2c0)
	class AFortPlayerStateAthena* GetViewingPlayerState(); // (0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

