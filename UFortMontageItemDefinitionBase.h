// Class /Script/FortniteGame.FortMontageItemDefinitionBase
// Size: 0x8f0
class UFortMontageItemDefinitionBase : public UAthenaCosmeticItemDefinition
{
	struct TWeakObjectPtr<class UAnimMontage> Animation; // 0x7b0 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> AnimationFemaleOverride; // 0x7d8 (0x28)
	struct TArray<struct FFortEmoteMapping> AnimationOverrides; // 0x800 (0x10)
	int PreviewLoops; // 0x810 (0x4)
	float PreviewLength; // 0x814 (0x4)
	bool bIncludeAudioWithAnimDuration; // 0x818 (0x1)
	unsigned char unreflected_819[0x3]; // 0x819 (0x3) 
	float EmoteCooldownSecs; // 0x81c (0x4)
	bool bMontageContainsFacialAnimation; // 0x820 (0x1)
	bool bPlayRandomSection; // 0x821 (0x1)
	unsigned char unreflected_822[0x6]; // 0x822 (0x6) 
	struct TArray<struct FSectionNameAndWeight*> PlayRandomSectionByName; // 0x828 (0x10)
	bool bSwitchToHarvestingToolOnUse; // 0x838 (0x1)
	bool bHolsterWeapon; // 0x839 (0x1)
	bool bHolsterWeaponIfDualWieldPickaxe; // 0x83a (0x1)
	unsigned char unreflected_83b[0x5]; // 0x83b (0x5) 
	struct TArray<struct FMontageItemAccessData> AccessData; // 0x840 (0x10)
	struct TArray<struct FMontageVisibilityData> VisibilityData; // 0x850 (0x10)
	struct FGameplayTagContainer EmoteWheelExclusiveTags; // 0x860 (0x20)
	struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition> RequiredEmoteParent; // 0x880 (0x28)
	struct TArray<struct FMcpVariantChannelInfo> EmoteParentVariants; // 0x8a8 (0x10)
	struct FGameplayTagContainer TagsWhichIndicateEmoteParent; // 0x8b8 (0x20)
	struct FText CustomBuiltInExclusiveCallout; // 0x8d8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.ShouldPlayRandomSectionByName (Underlying native function: ShouldPlayRandomSectionByName 0x87635ac)
	bool ShouldPlayRandomSectionByName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.ShouldHolsterWeapon (Underlying native function: ShouldHolsterWeapon 0x87633d8)
	bool ShouldHolsterWeapon(class AFortPawn*& FortPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.PreviewInPIE (Underlying native function: PreviewInPIE 0x26daa0c)
	void PreviewInPIE(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.PickRandomSectionByName (Underlying native function: PickRandomSectionByName 0x876228c)
	struct FName PickRandomSectionByName(float& RandomNumber); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.PickMontageSection (Underlying native function: PickMontageSection 0x87621c0)
	struct FName PickMontageSection(class UAnimMontage*& Montage, class AFortPawn*& FortPawn); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.PickCosmeticDrivenSectionByName (Underlying native function: PickCosmeticDrivenSectionByName 0x8762134)
	struct FName PickCosmeticDrivenSectionByName(class AFortPawn*& PawnPlayingMotage); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.IsMontageItemEmoteWheelExclusive (Underlying native function: IsMontageItemEmoteWheelExclusive 0x8761610)
	bool IsMontageItemEmoteWheelExclusive(class AFortPlayerController*& FortPC); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.HasCosmeticDrivenMotageSection (Underlying native function: HasCosmeticDrivenMotageSection 0x8761518)
	bool HasCosmeticDrivenMotageSection(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.GetFrontendPreviewAnimationHardReference (Underlying native function: GetFrontendPreviewAnimationHardReference 0x87609c4)
	class UAnimMontage* GetFrontendPreviewAnimationHardReference(struct TEnumAsByte<EFortCustomBodyType>& BodyType, struct TEnumAsByte<EFortCustomGender>& Gender, class AFortPlayerPawn*& PawnContext); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.GetFrontendPreviewAnimation (Underlying native function: GetFrontendPreviewAnimation 0x876084c)
	struct TWeakObjectPtr<class UAnimMontage> GetFrontendPreviewAnimation(struct TEnumAsByte<EFortCustomBodyType>& BodyType, class AFortPlayerPawn*& PreviewPawn, struct TEnumAsByte<EFortCustomGender>& Gender); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.GetAnimationHardReference (Underlying native function: GetAnimationHardReference 0x875fee0)
	class UAnimMontage* GetAnimationHardReference(struct TEnumAsByte<EFortCustomBodyType>& BodyType, struct TEnumAsByte<EFortCustomGender>& Gender, class AFortPlayerPawn*& PawnContext); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.GetAnimation (Underlying native function: GetAnimation 0x875fdb8)
	struct TWeakObjectPtr<class UAnimMontage> GetAnimation(struct TEnumAsByte<EFortCustomBodyType>& BodyType, struct TEnumAsByte<EFortCustomGender>& Gender, class AFortPlayerPawn*& PawnContext); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.CanShowMontageItem (Underlying native function: CanShowMontageItem 0x875f3f8)
	bool CanShowMontageItem(struct FFortAthenaLoadout& Loadout); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.CanActivateMontageItem (Underlying native function: CanActivateMontageItem 0x875f2f8)
	bool CanActivateMontageItem(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& OutFailureTags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMontageItemDefinitionBase.CanAccessMontageItem (Underlying native function: CanAccessMontageItem 0x875f268)
	bool CanAccessMontageItem(class AFortPlayerController*& FortPC); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

