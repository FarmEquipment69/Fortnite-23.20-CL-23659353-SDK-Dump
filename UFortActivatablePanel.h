// Class /Script/FortniteUI.FortActivatablePanel
// Size: 0x518
class UFortActivatablePanel : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	bool bIsPushedOnToContentPanelStack; // 0x4e8 (0x1)
	bool bIsAlreadyOnContentPanelStack; // 0x4e9 (0x1)
	enum EInputPriority InputPriority; // 0x4ea (0x1)
	bool bIsClosableByPlayerInput; // 0x4eb (0x1)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x4ec (0x3)
	unsigned char padding_4ef[0x29]; // 0x4ef (0x29)

	/* Functions */

	// Function /Script/FortniteUI.FortActivatablePanel.RestoreScrollWidget (Underlying native function: RestoreScrollWidget 0xa93a054)
	void RestoreScrollWidget(class UWidget*& FallbackWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatablePanel.RestoreCenterWidget (Underlying native function: RestoreCenterWidget 0xa939fd4)
	void RestoreCenterWidget(class UWidget*& FallbackWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatablePanel.AsyncPlaySound2D (Underlying native function: AsyncPlaySound2D 0xa6b1944)
	void AsyncPlaySound2D(class UObject*& WorldContextObject, struct TWeakObjectPtr<class USoundBase>& SoundToLoad, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

