// Class /Script/FortniteGame.AthenaCosmeticAccountItem
// Size: 0x140
class UAthenaCosmeticAccountItem : public UFortAccountItem
{
	struct TArray<struct FMcpVariantChannelInfo> VariantChannels; // 0x108 (0x10)
	struct TArray<struct FMcpVariantChannelInfo> ActiveVariantOverrides; // 0x118 (0x10)
	struct TArray<struct FMcpVariantReader> Variants; // 0x128 (0x10)
	class UFortHero* Hero; // 0x138 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.AthenaCosmeticAccountItem.HasMultipleVariants (Underlying native function: HasMultipleVariants 0x873e628)
	bool HasMultipleVariants(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaCosmeticAccountItem.HasCosmeticVariance (Underlying native function: HasCosmeticVariance 0x873e57c)
	bool HasCosmeticVariance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticAccountItem.GetLockerItemTypeText (Underlying native function: GetLockerItemTypeText 0x873d64c)
	struct FText GetLockerItemTypeText(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticAccountItem.GetLockerDescriptionText (Underlying native function: GetLockerDescriptionText 0x873d5cc)
	struct FText GetLockerDescriptionText(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticAccountItem.GetHero (Underlying native function: GetHero 0x873d4d0)
	class UFortHero* GetHero(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

