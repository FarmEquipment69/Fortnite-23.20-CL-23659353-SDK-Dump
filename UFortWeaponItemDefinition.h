// Class /Script/FortniteGame.FortWeaponItemDefinition
// Size: 0xd60
class UFortWeaponItemDefinition : public UFortWorldItemDefinition
{
	unsigned char unreflected_8f0[0x10]; // 0x8f0 (0x10) 
	struct TArray<class USoundLibrary*> WeaponSoundLibraries; // 0x900 (0x10)
	struct TArray<class USoundLibrary*> WeaponOwnerSoundLibraries; // 0x910 (0x10)
	struct TWeakObjectPtr<class UClass> WeaponActorClass; // 0x920 (0x28)
	struct TWeakObjectPtr<class USkeletalMesh> WeaponMeshOverride; // 0x948 (0x28)
	struct TWeakObjectPtr<class UAthenaItemWrapDefinition> IntrinsicOverrideWrap; // 0x970 (0x28)
	struct FFortCosmeticOverlayMaterialData OverlayMaterialData; // 0x998 (0x50)
	struct FDataTableRowHandle WeaponStatHandle; // 0x9e8 (0x10)
	struct FScalableFloat WeaponRechargeAmmoRate; // 0x9f8 (0x28)
	struct FScalableFloat WeaponRechargeAmmoQuantity; // 0xa20 (0x28)
	struct TWeakObjectPtr<class UFortAbilitySet> AbilitySet; // 0xa48 (0x28)
	struct FName AlterationSlotsLoadoutRow; // 0xa70 (0x4)
	struct FName BaselineAlterationSlotsLoadoutRow; // 0xa74 (0x4)
	struct TWeakObjectPtr<class UFortAlterationItemDefinition> BaseAlteration; // 0xa78 (0x28)
	struct TWeakObjectPtr<class UFortAlterationItemDefinition> BaseCosmeticAlteration; // 0xaa0 (0x28)
	struct TArray<struct FFortWeaponModSlot> WeaponModSlots; // 0xac8 (0x10)
	struct TWeakObjectPtr<class UClass> PrimaryFireAbility; // 0xad8 (0x28)
	struct TWeakObjectPtr<class UClass> SecondaryFireAbility; // 0xb00 (0x28)
	struct TWeakObjectPtr<class UClass> ReloadAbility; // 0xb28 (0x28)
	struct TWeakObjectPtr<class UClass> OnHitAbility; // 0xb50 (0x28)
	struct TArray<struct TWeakObjectPtr<class UClass>> EquippedAbilities; // 0xb78 (0x10)
	struct TWeakObjectPtr<class UFortAbilitySet> EquippedAbilitySet; // 0xb88 (0x28)
	struct TArray<class UCustomCharacterPart*> EquippedCharacterParts; // 0xbb0 (0x10)
	struct TWeakObjectPtr<class UFortWorldItemDefinition> AmmoData; // 0xbc0 (0x28)
	struct TArray<class UFortWeaponAdditionalData*> AdditionalDataFields; // 0xbe8 (0x10)
	float LowAmmoPercentage; // 0xbf8 (0x4)
	struct TEnumAsByte<EFortWeaponTriggerType> TriggerType; // 0xbfc (0x1)
	struct TEnumAsByte<EFortWeaponTriggerType> SecondaryTriggerType; // 0xbfd (0x1)
	enum EFortDisplayTier DisplayTier; // 0xbfe (0x1)
	unsigned char bRechargeAmmoToClip; // 0xbff (0x1)
	unsigned char bUsesPhantomReserveAmmo; // 0xbff (0x1)
	unsigned char bUsesCustomAmmoType; // 0xbff (0x1)
	unsigned char bShouldMagazineSizeDisplayInfinity; // 0xbff (0x1)
	unsigned char bAllowSecondaryFireToInterruptPrimary; // 0xbff (0x1)
	unsigned char bAllowTargetingDuringReload; // 0xbff (0x1)
	unsigned char bTargetingPreventsReload; // 0xbff (0x1)
	unsigned char bCanFireWhileInstigatorTethered; // 0xbff (0x1)
	unsigned char bCanFireWhileNotTargetedInVehicle; // 0xc00 (0x1)
	unsigned char bAlwaysChargeUpToMin; // 0xc00 (0x1)
	unsigned char bNoFireOnReleaseBeforeMinChargeTime; // 0xc00 (0x1)
	unsigned char bEndAbilityOnChargeEnd; // 0xc00 (0x1)
	unsigned char bUpdateLastFireTimeOnDischarge; // 0xc00 (0x1)
	unsigned char bReticleCornerOutsideSpreadRadius; // 0xc00 (0x1)
	unsigned char bValidForLastEquipped; // 0xc00 (0x1)
	unsigned char bRequestClientPreload; // 0xc00 (0x1)
	unsigned char bEnableWeaponMeshOverrideUpdates; // 0xc01 (0x1)
	unsigned char unreflected_c02[0x2]; // 0xc02 (0x2) 
	float HitNotifyDuration; // 0xc04 (0x4)
	struct TWeakObjectPtr<class UTexture2D> ReticleImage; // 0xc08 (0x28)
	struct TArray<float> ReticleCornerAngles; // 0xc30 (0x10)
	struct TWeakObjectPtr<class UTexture2D> ReticleCenterImage; // 0xc40 (0x28)
	struct TWeakObjectPtr<class UTexture2D> ReticleCenterPerfectAimImage; // 0xc68 (0x28)
	struct FVector2D ReticleCenterImageOffset; // 0xc90 (0x10)
	struct TWeakObjectPtr<class UTexture2D> ReticleInvalidTargetImage; // 0xca0 (0x28)
	struct FGameplayTagContainer AnalyticTags; // 0xcc8 (0x20)
	struct FGameplayTagContainer PlayerGrantedGameplayTags; // 0xce8 (0x20)
	struct TArray<struct FName> ActualAnalyticFNames; // 0xd08 (0x10)
	struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition> RequiredWeaponParent; // 0xd18 (0x28)
	struct FFortCreativeTagsHelper CreativeTagsHelper; // 0xd40 (0x10)
	class UFortWeaponAdditionalData* AdditionalData; // 0xd50 (0x8)
	unsigned char padding_d58[0x8]; // 0xd58 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponItemDefinition.UsesPhantomReserveAmmo (Underlying native function: UsesPhantomReserveAmmo 0x9012804)
	bool UsesPhantomReserveAmmo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.TargetingPreventsReload (Underlying native function: TargetingPreventsReload 0x90127a4)
	bool TargetingPreventsReload(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.ShouldUpdateLastFireTimeOnDischarge (Underlying native function: ShouldUpdateLastFireTimeOnDischarge 0x9012624)
	bool ShouldUpdateLastFireTimeOnDischarge(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.ShouldEndAbilityOnChargeEnd (Underlying native function: ShouldEndAbilityOnChargeEnd 0x9012598)
	bool ShouldEndAbilityOnChargeEnd(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.ShouldAllowTargetingDuringReload (Underlying native function: ShouldAllowTargetingDuringReload 0x901257c)
	bool ShouldAllowTargetingDuringReload(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.NoFireOnReleaseBeforeMinChargeTime (Underlying native function: NoFireOnReleaseBeforeMinChargeTime 0x900f200)
	bool NoFireOnReleaseBeforeMinChargeTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.InitializeAlterationsBasedOnLootLevel (Underlying native function: InitializeAlterationsBasedOnLootLevel 0x900ea04)
	static void InitializeAlterationsBasedOnLootLevel(struct FFortItemEntry& ItemEntry); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.HasUniqueAmmo (Underlying native function: HasUniqueAmmo 0x900e9cc)
	bool HasUniqueAmmo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.HasAmmo (Underlying native function: HasAmmo 0x900e99c)
	bool HasAmmo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetWeaponStatHandle (Underlying native function: GetWeaponStatHandle 0x900e0b4)
	struct FDataTableRowHandle GetWeaponStatHandle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetWeaponRechargeAmmoRate (Underlying native function: GetWeaponRechargeAmmoRate 0x900e018)
	float GetWeaponRechargeAmmoRate(int& InLevel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetWeaponRechargeAmmoQuantity (Underlying native function: GetWeaponRechargeAmmoQuantity 0x900df7c)
	float GetWeaponRechargeAmmoQuantity(int& InLevel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetWeaponMeshOverride (Underlying native function: GetWeaponMeshOverride 0x900df48)
	class USkeletalMesh* GetWeaponMeshOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetWeaponActorClass (Underlying native function: GetWeaponActorClass 0x900dedc)
	class UClass* GetWeaponActorClass(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetUsesCustomAmmoType (Underlying native function: GetUsesCustomAmmoType 0x900ddf4)
	bool GetUsesCustomAmmoType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetTriggerType (Underlying native function: GetTriggerType 0x900dddc)
	struct TEnumAsByte<EFortWeaponTriggerType> GetTriggerType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetShortDisplayName (Underlying native function: GetShortDisplayName 0x70c569c)
	struct FText GetShortDisplayName(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetSecondaryTriggerType (Underlying native function: GetSecondaryTriggerType 0x900db70)
	struct TEnumAsByte<EFortWeaponTriggerType> GetSecondaryTriggerType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetSecondaryFireAbility (Underlying native function: GetSecondaryFireAbility 0x900db38)
	class UClass* GetSecondaryFireAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetReticleCornerAngles (Underlying native function: GetReticleCornerAngles 0x900db1c)
	struct TArray<float> GetReticleCornerAngles(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetReticleCenterImageOffset (Underlying native function: GetReticleCenterImageOffset 0x900db00)
	struct FVector2D GetReticleCenterImageOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetReloadAbility (Underlying native function: GetReloadAbility 0x900dac8)
	class UClass* GetReloadAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetPrimaryFireAbility (Underlying native function: GetPrimaryFireAbility 0x900da58)
	class UClass* GetPrimaryFireAbility(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetOnHitAbility (Underlying native function: GetOnHitAbility 0x900d9dc)
	class UClass* GetOnHitAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetLowAmmoPercentage (Underlying native function: GetLowAmmoPercentage 0x900d9ac)
	float GetLowAmmoPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetHitNotifyDuration (Underlying native function: GetHitNotifyDuration 0x900d994)
	float GetHitNotifyDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetEquippedAbilities (Underlying native function: GetEquippedAbilities 0x900d744)
	struct TArray<class UClass*> GetEquippedAbilities(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetDisplayTierAsText (Underlying native function: GetDisplayTierAsText 0x900d698)
	static struct FText GetDisplayTierAsText(enum EFortDisplayTier& DisplayTier); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetDisplayTier (Underlying native function: GetDisplayTier 0x900d680)
	enum EFortDisplayTier GetDisplayTier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetDegradedPercentage (Underlying native function: GetDegradedPercentage 0x900d5cc)
	float GetDegradedPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetBaseCosmeticAlteration (Underlying native function: GetBaseCosmeticAlteration 0x900d494)
	class UFortAlterationItemDefinition* GetBaseCosmeticAlteration(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetBaseAlteration (Underlying native function: GetBaseAlteration 0x900d464)
	class UFortAlterationItemDefinition* GetBaseAlteration(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.GetAnalyticTags (Underlying native function: GetAnalyticTags 0x900d410)
	struct TArray<struct FName> GetAnalyticTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.AlwaysChargeUpToMin (Underlying native function: AlwaysChargeUpToMin 0x900cdbc)
	bool AlwaysChargeUpToMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponItemDefinition.AllowSecondaryFireToInterruptPrimary (Underlying native function: AllowSecondaryFireToInterruptPrimary 0x900cda0)
	bool AllowSecondaryFireToInterruptPrimary(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

