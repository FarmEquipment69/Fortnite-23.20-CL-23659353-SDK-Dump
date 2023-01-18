// Class /Script/FortniteUI.AthenaPlayerIndicatorBase
// Size: 0x4c0
class UAthenaPlayerIndicatorBase : public UFortActorIndicatorWidget
{
	unsigned char unreflected_378[0xd8]; // 0x378 (0xd8) 
	struct FVector2D MinMaxSizeDistance; // 0x450 (0x10)
	struct FVector2D MinMaxScale; // 0x460 (0x10)
	float FarAwayScaleMultiplier; // 0x470 (0x4)
	unsigned char unreflected_474[0x4]; // 0x474 (0x4) 
	struct FVector RelativeLocationWhenDBNO; // 0x478 (0x18)
	struct FVector RelativeLocationWhenNotDBNO; // 0x490 (0x18)
	struct FVector2D UnscaledScreenSpaceRelativeOffset; // 0x4a8 (0x10)
	unsigned char padding_4b8[0x8]; // 0x4b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.OnExtensionWidgetCreated (Has no native function)
	void OnExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.HandleCurrentPawnChanged (Underlying native function: HandleCurrentPawnChanged 0x48770ec)
	void HandleCurrentPawnChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.BP_UpdateWorldNameVisibility (Has no native function)
	void BPUpdateWorldNameVisibility(bool& bDisplayWorldName); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.BP_OnHandleTeamMemberStateChanged (Has no native function)
	void BPOnHandleTeamMemberStateChanged(enum ETeamMemberState& TeamMemberState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.BP_OnHandleTalkingStateChanged (Has no native function)
	void BPOnHandleTalkingStateChanged(bool& bIsTalking); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.BP_OnHandlePlayerStateSet (Has no native function)
	void BPOnHandlePlayerStateSet(class AFortPlayerStateAthena*& PlayerStateAthena); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.BP_OnHandlePlayerNameReplicated (Has no native function)
	void BPOnHandlePlayerNameReplicated(struct FString& PlayerName); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.BP_OnHandlePinColorChanged (Has no native function)
	void BPOnHandlePinColorChanged(struct FLinearColor& PinColor); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.BP_OnHandleDBNOStateChanged (Has no native function)
	void BPOnHandleDBNOStateChanged(bool& bIsDBNO); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerIndicatorBase.BP_OnHandleBeingRevivedStateChanged (Has no native function)
	void BPOnHandleBeingRevivedStateChanged(bool& bIsBeingRevived, float& MaxReviveTime); // (Event | Protected | BlueprintEvent)
};

