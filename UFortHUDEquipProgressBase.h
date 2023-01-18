// Class /Script/FortniteUI.FortHUDEquipProgressBase
// Size: 0x328
class UFortHUDEquipProgressBase : public UFortHUDElementWidget
{
	class UImage* ImageProgressBar; // 0x2d0 (0x8)
	class UCommonTextBlock* TextTimeRemaining; // 0x2d8 (0x8)
	struct FGameplayTagContainer RelevantGameplayCueTags; // 0x2e0 (0x20)
	struct FName ProgressBarMaterialParamName; // 0x300 (0x4)
	unsigned char padding_304[0x24]; // 0x304 (0x24)

	/* Functions */

	// Function /Script/FortniteUI.FortHUDEquipProgressBase.OnTimeRemainingChanged (Has no native function)
	void OnTimeRemainingChanged(float& TimeRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDEquipProgressBase.OnProgressStarted (Has no native function)
	void OnProgressStarted(float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDEquipProgressBase.OnProgressEnded (Has no native function)
	void OnProgressEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDEquipProgressBase.HandleUIGameplayCueEvent (Underlying native function: HandleUIGameplayCueEvent 0xa6d9864)
	void HandleUIGameplayCueEvent(struct FName& CueName, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortHUDEquipProgressBase.HandleReplayScrubComplete (Underlying native function: HandleReplayScrubComplete 0xa6d9750)
	void HandleReplayScrubComplete(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDEquipProgressBase.HandleFollowedPlayerChanged (Underlying native function: HandleFollowedPlayerChanged 0x27d91d0)
	void HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Private)
};

