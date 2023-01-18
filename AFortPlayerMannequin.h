// Class /Script/FortniteGame.FortPlayerMannequin
// Size: 0x5e8
class AFortPlayerMannequin : public ASkeletalMeshActor
{
	unsigned char unreflected_308[0x30]; // 0x308 (0x30) 
	class UFortHeroType* CurrentFortHeroType; // 0x338 (0x8)
	class UAthenaCharacterItemDefinition* AthenaCharacter; // 0x340 (0x8)
	class UAthenaBackpackItemDefinition* AthenaBackBling; // 0x348 (0x8)
	unsigned char unreflected_350[0x10]; // 0x350 (0x10) 
	struct TMap<struct FName, class UAudioComponent*> EmoteAudioCompsMap; // 0x360 (0x50)
	class UCustomCharacterPart* CharacterParts[0x8]; // 0x3b0 (0x8) (ARRAY) 
	struct FLightingChannels MannequinLightingChannels; // 0x3f0 (0x1)
	unsigned char unreflected_3f1[0x3]; // 0x3f1 (0x3) 
	float MannequinBoundsScale; // 0x3f4 (0x4)
	bool bIsMannequinVisible; // 0x3f8 (0x1)
	bool bMannequinCastsHiddenShadow; // 0x3f9 (0x1)
	unsigned char LoadsPending; // 0x3fa (0x1)
	unsigned char unreflected_3fb[0x5]; // 0x3fb (0x5) 
	class UCustomCharacterPart* CharacterPartList[0x7]; // 0x400 (0x8) (ARRAY) 
	struct TArray<struct FMcpVariantChannelInfo> OverrideVariants; // 0x438 (0x10)
	class UCustomColorSwatch* CharacterPartColorSwatches[0x8]; // 0x448 (0x8) (ARRAY) 
	class UCustomColorSwatch* ColorSwatchesForCharacterParts[0x7]; // 0x488 (0x8) (ARRAY) 
	class UCustomColorComponent* AccessoryColorSwatchHandler[0x7]; // 0x4c0 (0x8) (ARRAY) 
	class UCustomColorSwatch* ColorSwatches[0x2]; // 0x4f8 (0x8) (ARRAY) 
	class USkeletalMesh* WeaponSkeletalMesh; // 0x508 (0x8)
	struct FName WeaponAttachSocket; // 0x510 (0x4)
	unsigned char unreflected_514[0x44]; // 0x514 (0x44) 
	struct TArray<struct FMorphValuePair*> MorphTargets; // 0x558 (0x10)
	bool bInitialized; // 0x568 (0x1)
	bool bLimitTick; // 0x569 (0x1)
	bool bAutoRegisterWithBudgetAllocator; // 0x56a (0x1)
	unsigned char unreflected_56b[0x5]; // 0x56b (0x5) 
	class UFortCustomizationAssetLoader* CustomizationAssetLoader; // 0x570 (0x8)
	unsigned char unreflected_578[0x30]; // 0x578 (0x30) 
	class ACustomCharacterPartModifier* PartModifiers[0x8]; // 0x5a8 (0x8) (ARRAY) 

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerMannequin.UpdateMorphTargets (Underlying native function: UpdateMorphTargets 0x4866d04)
	void UpdateMorphTargets(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerMannequin.ToggleGenderBP (Underlying native function: ToggleGenderBP 0x8847374)
	void ToggleGenderBP(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetWeaponSkeletalMesh (Underlying native function: SetWeaponSkeletalMesh 0x88465fc)
	bool SetWeaponSkeletalMesh(class USkeletalMesh*& SkeletalMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetSkeletalMesh (Underlying native function: SetSkeletalMesh 0x8846310)
	void SetSkeletalMesh(class USkeletalMesh*& SkeletalMesh); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetPart (Underlying native function: SetPart 0x884624c)
	bool SetPart(struct TEnumAsByte<EFortCustomPartType>& Part, class UCustomCharacterPart*& PartAsset); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetMannequinLightingChannels (Underlying native function: SetMannequinLightingChannels 0x8846118)
	void SetMannequinLightingChannels(bool& bChannel0, bool& bChannel1, bool& bChannel2); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetHeroType (Underlying native function: SetHeroType 0x8845954)
	void SetHeroType(class UFortHeroType*& NewHeroType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetAthenaCharacterDefAndVariants (Underlying native function: SetAthenaCharacterDefAndVariants 0x8845874)
	void SetAthenaCharacterDefAndVariants(class UAthenaCharacterItemDefinition*& NewAthenaCharacter, struct TArray<struct FMcpVariantChannelInfo>& InOverrideVariants); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetAthenaBackpackDefAndVariants (Underlying native function: SetAthenaBackpackDefAndVariants 0x8845774)
	void SetAthenaBackpackDefAndVariants(class UAthenaBackpackItemDefinition*& NewAthenaBackpack, struct TArray<struct FMcpVariantChannelInfo>& InOverrideVariants); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetAthenaBackpackAndCharacterDefAndVariants (Underlying native function: SetAthenaBackpackAndCharacterDefAndVariants 0x88455ac)
	void SetAthenaBackpackAndCharacterDefAndVariants(class UAthenaBackpackItemDefinition*& NewAthenaBackpack, struct TArray<struct FMcpVariantChannelInfo>& InBackpackOverrideVariants, class UAthenaCharacterItemDefinition*& NewAthenaCharacter, struct TArray<struct FMcpVariantChannelInfo>& InCharacterOverrideVariants); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.SetAllowEmoteAudioComponents (Underlying native function: SetAllowEmoteAudioComponents 0x7fb8dc8)
	void SetAllowEmoteAudioComponents(bool& InAllowEmoteAudioComponents); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.ResetAthenaCharacterDefAndVariants (Underlying native function: ResetAthenaCharacterDefAndVariants 0x88453c4)
	void ResetAthenaCharacterDefAndVariants(class UAthenaCharacterItemDefinition*& NewAthenaCharacter, struct TArray<struct FMcpVariantChannelInfo>& InOverrideVariants); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.RemovePart (Underlying native function: RemovePart 0x8845334)
	bool RemovePart(struct TEnumAsByte<EFortCustomPartType>& Part); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.OnVariantChanged (Has no native function)
	void OnVariantChanged(struct FGameplayTag& VariantChannel, struct FGameplayTag& OldVariantTag, struct FGameplayTag& NewVariantTag); // (0x00000002 | BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerMannequin.OnPartChanged (Has no native function)
	void OnPartChanged(class UCustomCharacterPart*& OldPart, class UCustomCharacterPart*& NewPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerMannequin.HandleReInitializeComplete (Has no native function)
	void HandleReInitializeComplete(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerMannequin.GetWeaponSkeletalMeshComponent (Underlying native function: GetWeaponSkeletalMeshComponent 0x8843a78)
	class USkeletalMeshComponent* GetWeaponSkeletalMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerMannequin.GetPartSkeletalMeshComponent (Underlying native function: GetPartSkeletalMeshComponent 0x8843598)
	class USkeletalMeshComponent* GetPartSkeletalMeshComponent(struct TEnumAsByte<EFortCustomPartType>& Part); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerMannequin.GetGender (Underlying native function: GetGender 0x8843404)
	struct TEnumAsByte<EFortCustomGender> GetGender(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerMannequin.GetEmoteAudioComponent (Underlying native function: GetEmoteAudioComponent 0x88432e0)
	class UAudioComponent* GetEmoteAudioComponent(struct FName& InSoundId); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerMannequin.GetCustomCharacterParts (Underlying native function: GetCustomCharacterParts 0x884322c)
	struct TArray<class UCustomCharacterPart*> GetCustomCharacterParts(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.GetAthenaCharacterItemDefinition (Underlying native function: GetAthenaCharacterItemDefinition 0x8843214)
	class UAthenaCharacterItemDefinition* GetAthenaCharacterItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerMannequin.GetAllPartSkeletalMeshComponents (Underlying native function: GetAllPartSkeletalMeshComponents 0x8843174)
	void GetAllPartSkeletalMeshComponents(struct TArray<class USkeletalMeshComponent*>& SkeletalMeshComponents); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.GatherMetaTags (Underlying native function: GatherMetaTags 0x8842d34)
	struct FGameplayTagContainer GatherMetaTags(class UAthenaCosmeticItemDefinition*& CosmeticItem); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerMannequin.CyclePartBP (Underlying native function: CyclePartBP 0x8842c70)
	bool CyclePartBP(struct TEnumAsByte<EFortCustomPartType>& Part, bool& bNextPart); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.CreateCosmeticPetInstance (Underlying native function: CreateCosmeticPetInstance 0x8842b7c)
	class AFortPlayerPet* CreateCosmeticPetInstance(class AFortPlayerPawn*& InPawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.ClearExistingCosmeticPetInstance (Underlying native function: ClearExistingCosmeticPetInstance 0x8842b68)
	void ClearExistingCosmeticPetInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMannequin.ChoosePartsForHeroType (Underlying native function: ChoosePartsForHeroType 0x8842604)
	void ChoosePartsForHeroType(class UFortHeroType*& HeroType, struct TArray<struct FMcpVariantChannelInfo>& InOverrideVariants, bool& bClearOldParts); // (Final | Native | Private)
};

