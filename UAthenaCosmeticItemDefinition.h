// Class /Script/FortniteGame.AthenaCosmeticItemDefinition
// Size: 0x7b0
class UAthenaCosmeticItemDefinition : public UFortAccountItemDefinition
{
	unsigned char bIsShuffleTile; // 0x420 (0x1)
	unsigned char bIsOwnedByCampaignHero; // 0x420 (0x1)
	unsigned char bHasMoreThanOneCharacterPartVariant; // 0x420 (0x1)
	unsigned char bHideIfNotOwned; // 0x420 (0x1)
	unsigned char unreflected_421[0x1]; // 0x421 (0x1) 
	unsigned char bInitializedConfiguredDynamicInstallBundles; // 0x422 (0x1)
	unsigned char bDynamicInstallBundlesError; // 0x422 (0x1)
	unsigned char bDynamicInstallBundlesCancelled; // 0x422 (0x1)
	unsigned char bDynamicInstallBundlesComplete; // 0x422 (0x1)
	unsigned char unreflected_423[0x5]; // 0x423 (0x5) 
	double DynamicInstallBundlesUpdateStartTime; // 0x428 (0x8)
	double DynamicInstallBundlesUpdateTotalTime; // 0x430 (0x8)
	uint32_t DynamicInstallBundleRequestRefCount; // 0x438 (0x4)
	int DynamicInstallBundleRequestRetryCount; // 0x43c (0x4)
	unsigned char unreflected_440[0x4]; // 0x440 (0x4) 
	enum EVariantUnlockType VariantUnlockType; // 0x444 (0x1)
	unsigned char unreflected_445[0x3]; // 0x445 (0x3) 
	struct FRotator PreviewPawnRotationOffset; // 0x448 (0x18)
	struct TArray<class USoundLibrary*> CosmeticSoundLibraries; // 0x460 (0x10)
	struct FGameplayTagContainer DisallowedCosmeticTags; // 0x470 (0x20)
	struct FGameplayTagContainer MetaTags; // 0x490 (0x20)
	struct TArray<struct FGameplayTag> VariantChannelsToNeverSendToMCP; // 0x4b0 (0x10)
	struct TMap<struct FCosmeticVariantInfo*, struct TWeakObjectPtr<class UClass>> ReactivePreviewDrivers; // 0x4c0 (0x50)
	struct TArray<struct FAthenaCosmeticMaterialOverride> MaterialOverrides; // 0x510 (0x10)
	struct FGameplayTagContainer ObservedPlayerStats; // 0x520 (0x20)
	struct TArray<class UFortMontageItemDefinitionBase*> BuiltInEmotes; // 0x540 (0x10)
	struct TArray<class UFortCosmeticVariant*> ItemVariants; // 0x550 (0x10)
	struct TArray<class UFortCosmeticItemAdditionalData*> AdditionalDataFields; // 0x560 (0x10)
	struct FGameplayTag VariantChannelToUseForThumbnails; // 0x570 (0x4)
	bool bOverrideDefaultVariantPreviewTime; // 0x574 (0x1)
	unsigned char unreflected_575[0x3]; // 0x575 (0x3) 
	float DefaultVariantPreviewOverrideTime; // 0x578 (0x4)
	unsigned char unreflected_57c[0x4]; // 0x57c (0x4) 
	struct TArray<struct FFortCosmeticVariantPreview> ItemVariantPreviews; // 0x580 (0x10)
	class UFortVariantPreviewGenerator* ItemVariantPreviewGenerator; // 0x590 (0x8)
	struct FText DirectAquisitionStyleDisclaimerOverride; // 0x598 (0x18)
	struct TArray<struct FFortCosmeticAdaptiveStatPreview> ItemObservedStatPreviews; // 0x5b0 (0x10)
	struct FText UnlockRequirements; // 0x5c0 (0x18)
	struct FText ItemVariantUnlockRequirements; // 0x5d8 (0x18)
	struct TWeakObjectPtr<class UFortAccountItemDefinition> UnlockingItemDef; // 0x5f0 (0x28)
	struct TWeakObjectPtr<class UClass> ItemPreviewActorClass; // 0x618 (0x28)
	struct TWeakObjectPtr<class UFXSystemAsset> ItemPreviewParticleSystem; // 0x640 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> ItemPreviewMontageMale; // 0x668 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> ItemPreviewMontageFemale; // 0x690 (0x28)
	struct TWeakObjectPtr<class UAthenaCharacterItemDefinition> ItemPreviewHero; // 0x6b8 (0x28)
	struct TArray<struct FName> ConfiguredDynamicInstallBundles; // 0x6e0 (0x10)
	struct TArray<struct FName> PendingDynamicInstallBundles; // 0x6f0 (0x10)
	struct FGameplayTagContainer ExclusiveRequiresOutfitTags; // 0x700 (0x20)
	struct FText CustomExclusiveCallout; // 0x720 (0x18)
	struct FText ExclusiveDesciption; // 0x738 (0x18)
	struct TWeakObjectPtr<class UTexture2D> ExclusiveIcon; // 0x750 (0x28)
	int BaseShotGridId; // 0x778 (0x4)
	unsigned char unreflected_77c[0x4]; // 0x77c (0x4) 
	struct TArray<int> VariantShotGridIds; // 0x780 (0x10)
	struct TArray<int> ShotGridIds; // 0x790 (0x10)
	struct TArray<struct FText> ItemSearchTags; // 0x7a0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.UpdateLockedFloatSliderVariant (Underlying native function: UpdateLockedFloatSliderVariant 0x873ef90)
	void UpdateLockedFloatSliderVariant(class AFortPlayerController*& FortPC, struct FGameplayTag& ChannelTag); // (0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.IsOwnedByCampaignHero (Underlying native function: IsOwnedByCampaignHero 0x873e844)
	bool IsOwnedByCampaignHero(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.IsEnabledInSTW (Underlying native function: IsEnabledInSTW 0x2da7c4c)
	bool IsEnabledInSTW(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.HasVariants (Underlying native function: HasVariants 0x873e668)
	bool HasVariants(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.HasModifiableVariants (Underlying native function: HasModifiableVariants 0x873e598)
	bool HasModifiableVariants(class UFortItem*& InItem); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.HasChannelOfType (Underlying native function: HasChannelOfType 0x873e494)
	bool HasChannelOfType(class UClass*& Class); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetVariantUnlockType (Underlying native function: GetVariantUnlockType 0x873e47c)
	enum EVariantUnlockType GetVariantUnlockType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetVariantChannel (Underlying native function: GetVariantChannel 0x873dc34)
	class UFortCosmeticVariant* GetVariantChannel(struct FGameplayTag& InVariantChannelTag); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetPreviewPawnRotationOffset (Underlying native function: GetPreviewPawnRotationOffset 0x873dc0c)
	struct FRotator GetPreviewPawnRotationOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetOrGenerateItemVariantPreviews (Underlying native function: GetOrGenerateItemVariantPreviews 0x873d6cc)
	struct TArray<struct FFortCosmeticVariantPreview> GetOrGenerateItemVariantPreviews(class AFortPlayerController*& PlayerController); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetItemVariantPreviews (Underlying native function: GetItemVariantPreviews 0x873d550)
	struct TArray<struct FFortCosmeticVariantPreview> GetItemVariantPreviews(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetItemAdaptiveStatPreviews (Underlying native function: GetItemAdaptiveStatPreviews 0x873d534)
	struct TArray<struct FFortCosmeticAdaptiveStatPreview> GetItemAdaptiveStatPreviews(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetDefaultVariantChannels (Underlying native function: GetDefaultVariantChannels 0x873d3d0)
	void GetDefaultVariantChannels(struct TArray<struct FMcpVariantChannelInfo>& OutDefaultVariantData); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetDataOfType (Underlying native function: GetDataOfType 0x873d2e8)
	class UFortCosmeticItemAdditionalData* GetDataOfType(class UClass*& Class); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetAllPossibleNativeMeshComponentNames (Underlying native function: GetAllPossibleNativeMeshComponentNames 0x873d0bc)
	static struct TArray<struct FString> GetAllPossibleNativeMeshComponentNames(); // (Final | Native | Static | Public)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GetAdaptivePlayerStatsList (Underlying native function: GetAdaptivePlayerStatsList 0x873d0a0)
	struct FGameplayTagContainer GetAdaptivePlayerStatsList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.GatherVariantAssets (Underlying native function: GatherVariantAssets 0x873c7b4)
	void GatherVariantAssets(class AActor*& InActor, struct FFortAthenaLoadout& Loadout, struct TArray<struct FSoftObjectPath>& VariantAssetsNeeded, class AFortPlayerPawn*& InPlayerPawn); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.ApplyVariantsToComponent (Underlying native function: ApplyVariantsToComponent 0x873bf90)
	void ApplyVariantsToComponent(class UPrimitiveComponent*& InComponent, struct FFortAthenaLoadout& Loadout, struct FApplyVariantsAdditionalParams& Params); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.AthenaCosmeticItemDefinition.ApplyVariants (Underlying native function: ApplyVariants 0x873be0c)
	void ApplyVariants(class AActor*& InActor, struct FFortAthenaLoadout& Loadout, struct FApplyVariantsAdditionalParams& Params); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | Const)
};

