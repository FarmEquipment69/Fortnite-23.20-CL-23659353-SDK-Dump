// Class /Script/FortniteUI.FortTouchInteractionButton
// Size: 0x3c0
class UFortTouchInteractionButton : public UCommonUserWidget
{
	struct FName MIDParamIcon; // 0x290 (0x4)
	struct FName MIDParamIconScale; // 0x294 (0x4)
	struct FName MIDParamTint; // 0x298 (0x4)
	struct FName MIDParamDuration; // 0x29c (0x4)
	struct FName MIDParamStartTime; // 0x2a0 (0x4)
	struct FName MIDParamTimerOpacity; // 0x2a4 (0x4)
	bool bInteractionFocused; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x7]; // 0x2a9 (0x7) 
	class UWidgetAnimation* AnimRadialProgress; // 0x2b0 (0x8)
	unsigned char unreflected_2b8[0x28]; // 0x2b8 (0x28) 
	struct TWeakObjectPtr<class UTexture2D> PendingIcon; // 0x2e0 (0x28)
	struct TWeakObjectPtr<class UTexture2D> DefaultIcon; // 0x308 (0x28)
	struct TMap<struct TWeakObjectPtr<class UTexture2D>, struct FTouchInteractionIconOverride> IconOverrides; // 0x330 (0x50)
	class UFortMarkerDetailsTable* DetailsTable; // 0x380 (0x8)
	float DefaultIconScale; // 0x388 (0x4)
	float PickupIconScale; // 0x38c (0x4)
	class UImage* ImageIcon; // 0x390 (0x8)
	class AActor* TrackedActor; // 0x398 (0x8)
	unsigned char padding_3a0[0x20]; // 0x3a0 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortTouchInteractionButton.OnInteractionFocusChanged (Has no native function)
	void OnInteractionFocusChanged(bool& bNewFocused); // (Event | Public | BlueprintEvent)
};

