// Class /Script/FortniteGame.FortMinigameItemContainerComponent
// Size: 0x128
class UFortMinigameItemContainerComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	bool bHideInActorDetails; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	struct FGameplayTagContainer EmptyFilterTags; // 0xc0 (0x20)
	struct FGameplayTagContainer NonEmptyFilterTags; // 0xe0 (0x20)
	unsigned char padding_100[0x28]; // 0x100 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameItemContainerComponent.K2_UpdateEditorPreview (Has no native function)
	void K2UpdateEditorPreview(bool& bHasMoved); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameItemContainerComponent.K2_SetupForEditorPreview (Has no native function)
	void K2SetupForEditorPreview(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameItemContainerComponent.K2_NotifyItemContainerChanged (Has no native function)
	void K2NotifyItemContainerChanged(); // (Event | Protected | BlueprintEvent)
};

