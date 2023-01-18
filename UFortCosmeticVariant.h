// Class /Script/FortniteGame.FortCosmeticVariant
// Size: 0x78
class UFortCosmeticVariant : public UObject
{
	struct TWeakObjectPtr<class UMaterialInterface> CustomPreviewTileMaterial; // 0x28 (0x28)
	struct FGameplayTag VariantChannelTag; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FText VariantChannelName; // 0x58 (0x18)
	struct FGameplayTag ActiveVariantTag; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortCosmeticVariant.GetVariantUnlockRequirement (Underlying native function: GetVariantUnlockRequirement 0x8a46e94)
	struct FText GetVariantUnlockRequirement(struct FGameplayTag& InVariantTag); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCosmeticVariant.GetVariantText (Underlying native function: GetVariantText 0x8a46db4)
	struct FText GetVariantText(struct FGameplayTag& InVariantTag); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCosmeticVariant.GetVariantChannelText (Underlying native function: GetVariantChannelText 0x8a46d1c)
	struct FText GetVariantChannelText(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCosmeticVariant.GetAllVariantTags (Underlying native function: GetAllVariantTags 0x8a46468)
	struct FGameplayTagContainer GetAllVariantTags(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

