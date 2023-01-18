// Class /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase
// Size: 0x4f0
class URespawnAndSpectateSelectWidgetBase : public UFortActivatablePanelLTM
{
	unsigned char unreflected_3c0[0x18]; // 0x3c0 (0x18) 
	class AFortAthenaMutator_RespawnAndSpectateSelect* CachedMutator; // 0x3d8 (0x8)
	struct TArray<class URespawnAndSpectateSelectButtonWidgetBase*> SelectButtonWidgets; // 0x3e0 (0x10)
	struct FText HeaderTextPreview; // 0x3f0 (0x18)
	struct FText HeaderTextSelectable; // 0x408 (0x18)
	struct FText HeaderTextNoOptions; // 0x420 (0x18)
	struct FText DescriptionTextPreview; // 0x438 (0x18)
	struct FText DescriptionTextSelectable; // 0x450 (0x18)
	struct FText DescriptionTextNoOptions; // 0x468 (0x18)
	class UCommonButtonLegacy* ConfirmButton; // 0x480 (0x8)
	unsigned char unreflected_488[0x28]; // 0x488 (0x28) 
	class URichTextBlock* TextHeader; // 0x4b0 (0x8)
	class URichTextBlock* TextDescription; // 0x4b8 (0x8)
	unsigned char padding_4c0[0x30]; // 0x4c0 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.StartClosingWidget (Has no native function)
	void StartClosingWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.OnSelectionMadeMobile (Underlying native function: OnSelectionMadeMobile 0xa57fd40)
	void OnSelectionMadeMobile(class URespawnAndSpectateSelectButtonWidgetBase*& Widget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.OnSelectionMade (Underlying native function: OnSelectionMade 0xa57fcc0)
	void OnSelectionMade(class URespawnAndSpectateSelectButtonWidgetBase*& Widget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.OnSelectionHovered (Underlying native function: OnSelectionHovered 0xa57f9c8)
	void OnSelectionHovered(class URespawnAndSpectateSelectButtonWidgetBase*& Widget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.OnSelectionConfirmed (Underlying native function: OnSelectionConfirmed 0xa57f970)
	void OnSelectionConfirmed(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.OnRespawnBecameAvailable (Underlying native function: OnRespawnBecameAvailable 0xa57f824)
	void OnRespawnBecameAvailable(); // (Final | Native | Private)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.OnLocalPlayerRespawned (Underlying native function: OnLocalPlayerRespawned 0xa57f348)
	void OnLocalPlayerRespawned(); // (Final | Native | Private)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.OnAvailableOptionsChanged (Underlying native function: OnAvailableOptionsChanged 0xa57e9a8)
	void OnAvailableOptionsChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.NativeGetDesiredFocusTarget (Underlying native function: NativeGetDesiredFocusTarget 0x6a4b0a0)
	class UWidget* NativeGetDesiredFocusTarget(); // (Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectWidgetBase.GetCurrentlyHoveredButtonIndex (Underlying native function: GetCurrentlyHoveredButtonIndex 0xa57cb08)
	int GetCurrentlyHoveredButtonIndex(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

