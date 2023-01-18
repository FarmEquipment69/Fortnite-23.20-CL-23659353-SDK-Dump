// Class /Script/FortniteGame.FortAmmoItemDefinition
// Size: 0xf10
class UFortAmmoItemDefinition : public UFortWorldItemDefinition
{
	unsigned char unreflected_8f0[0x10]; // 0x8f0 (0x10) 
	struct FSlateBrush ClipIconBrush; // 0x900 (0xc0)
	struct FScalableFloat bIsConsumed; // 0x9c0 (0x28)
	bool bTriggersFeedbackLines; // 0x9e8 (0x1)
	unsigned char unreflected_9e9[0x7]; // 0x9e9 (0x7) 
	struct FScalableFloat RegenCooldown; // 0x9f0 (0x28)
	unsigned char unreflected_a18[0x8]; // 0xa18 (0x8) 
	struct FFortMultiSizeBrush AmmoIconBrush; // 0xa20 (0x480)
	unsigned char bShowAmmoAsFuel; // 0xea0 (0x1)
	unsigned char unreflected_ea1[0x7]; // 0xea1 (0x7) 
	struct TWeakObjectPtr<class UTexture2D> HUDAmmoSmallPreviewImage; // 0xea8 (0x28)
	class UClass* WorldItemClassOverride; // 0xed0 (0x8)
	class UPlaylistUserOptions* ItemOptions; // 0xed8 (0x8)
	struct FFortCreativeTagsHelper CreativeTagsHelper; // 0xee0 (0x10)
	struct FGameplayTagContainer WeaponInheritedTags; // 0xef0 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortAmmoItemDefinition.GetHUDAmmoSmallPreviewImage (Underlying native function: GetHUDAmmoSmallPreviewImage 0x900d8f0)
	struct TWeakObjectPtr<class UTexture2D> GetHUDAmmoSmallPreviewImage(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

