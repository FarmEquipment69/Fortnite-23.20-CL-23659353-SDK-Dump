// Class /Script/FortniteGame.FortHeroType
// Size: 0x718
class UFortHeroType : public UFortWorkerType
{
	unsigned char unreflected_4b8[0x8]; // 0x4b8 (0x8) 
	unsigned char bForceShowHeadAccessory; // 0x4c0 (0x1)
	unsigned char bForceShowBackpack; // 0x4c0 (0x1)
	unsigned char unreflected_4c1[0x3]; // 0x4c1 (0x3) 
	float FrontEndBackPreviewRotationOffset; // 0x4c4 (0x4)
	struct TArray<struct TWeakObjectPtr<class UFortHeroSpecialization>> Specializations; // 0x4c8 (0x10)
	struct TWeakObjectPtr<class UFortMontageLookupTable> DefaultMontageLookupTable; // 0x4d8 (0x28)
	struct TWeakObjectPtr<class UFortMontageLookupTable> OverrideMontageLookupTable; // 0x500 (0x28)
	struct TArray<struct FGameplayEffectApplicationInfo> CombinedStatGEs; // 0x528 (0x10)
	struct FGameplayTagContainer RequiredGPTags; // 0x538 (0x20)
	struct TWeakObjectPtr<class UFortFeedbackBank> MaleOverrideFeedback; // 0x558 (0x28)
	struct TWeakObjectPtr<class UFortFeedbackBank> FemaleOverrideFeedback; // 0x580 (0x28)
	struct TWeakObjectPtr<class UClass> OverridePawnClass; // 0x5a8 (0x28)
	class UFortHeroGameplayDefinition* HeroGameplayDefinition; // 0x5d0 (0x8)
	class UAthenaCharacterItemDefinition* HeroCosmeticOutfitDefinition; // 0x5d8 (0x8)
	class UAthenaBackpackItemDefinition* HeroCosmeticBackblingDefinition; // 0x5e0 (0x8)
	struct TWeakObjectPtr<class UClass> FrontEndAnimClass; // 0x5e8 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> FrontendAnimMontageIdleOverride; // 0x610 (0x28)
	struct FText Subtype; // 0x638 (0x18)
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x650 (0x8)
	struct FDataTableRowHandle LegacyStatHandle; // 0x658 (0x10)
	struct TWeakObjectPtr<class UAnimMontage> ItemPreviewMontageMale; // 0x668 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> ItemPreviewMontageFemale; // 0x690 (0x28)
	unsigned char padding_6b8[0x60]; // 0x6b8 (0x60)

	/* Functions */

	// Function /Script/FortniteGame.FortHeroType.GetSubType (Underlying native function: GetSubType 0x8ed1650)
	struct FText GetSubType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeroType.GetSpecializations (Underlying native function: GetSpecializations 0x8ed11a0)
	void GetSpecializations(struct TArray<class UFortHeroSpecialization*>& OutSpecializations); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeroType.GetHeroGameplayDefinition (Underlying native function: GetHeroGameplayDefinition 0x8ecf8e8)
	class UFortHeroGameplayDefinition* GetHeroGameplayDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroType.GetFrontendAnimMontageIdleOverride (Underlying native function: GetFrontendAnimMontageIdleOverride 0x8ecf738)
	class UAnimMontage* GetFrontendAnimMontageIdleOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeroType.GetFrontendAnimClass (Underlying native function: GetFrontendAnimClass 0x8ecf700)
	class UClass* GetFrontendAnimClass(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

