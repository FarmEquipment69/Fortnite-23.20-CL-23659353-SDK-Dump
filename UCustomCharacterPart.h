// Class /Script/FortniteGame.CustomCharacterPart
// Size: 0x2e0
class UCustomCharacterPart : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct TEnumAsByte<EFortCustomGender> GenderPermitted; // 0x40 (0x1)
	struct TEnumAsByte<EFortCustomBodyType> BodyTypesPermitted; // 0x41 (0x1)
	struct TEnumAsByte<EFortCustomPartType> CharacterPartType; // 0x42 (0x1)
	unsigned char unreflected_43[0x5]; // 0x43 (0x5) 
	struct FGameplayTagContainer BoneSetsToHide; // 0x48 (0x20)
	bool bShouldHideBonesForThisPart; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FGameplayTagContainer GameplayTags; // 0x70 (0x20)
	struct FGameplayTagContainer DisallowedCosmeticTags; // 0x90 (0x20)
	bool bGameplayRelevantCosmeticPart; // 0xb0 (0x1)
	bool bContributesToPartBudget; // 0xb1 (0x1)
	bool bAttachToSocket; // 0xb2 (0x1)
	bool bIgnorePart; // 0xb3 (0x1)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct TWeakObjectPtr<class UClass> PartModifierBlueprint; // 0xb8 (0x28)
	class UCustomCharacterPartData* AdditionalData; // 0xe0 (0x8)
	struct TWeakObjectPtr<class UFortMontageLookupTable> DefaultMontageLookupTable; // 0xe8 (0x28)
	struct TWeakObjectPtr<class UFortMontageLookupTable> OverrideMontageLookupTable; // 0x110 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> FrontendAnimMontageIdleOverride; // 0x138 (0x28)
	struct TWeakObjectPtr<class UFortPlayerSkydiveAnimSet> SkydiveAnimSet; // 0x160 (0x28)
	float FrontEndBackPreviewRotationOffset; // 0x188 (0x4)
	unsigned char unreflected_18c[0x4]; // 0x18c (0x4) 
	struct TWeakObjectPtr<class USkeletalMesh> SkeletalMesh; // 0x190 (0x28)
	struct TArray<struct TWeakObjectPtr<class USkeletalMesh>> MasterSkeletalMeshes; // 0x1b8 (0x10)
	bool bSinglePieceMesh; // 0x1c8 (0x1)
	bool bSupportsColorSwatches; // 0x1c9 (0x1)
	bool bAllowStaticRenderPath; // 0x1ca (0x1)
	unsigned char unreflected_1cb[0x5]; // 0x1cb (0x5) 
	struct TArray<struct FCustomPartMaterialOverrideData> MaterialOverrides; // 0x1d0 (0x10)
	struct TArray<struct FCustomPartTextureParameter> TextureParameters; // 0x1e0 (0x10)
	struct TArray<struct FCustomPartScalarParameter> ScalarParameters; // 0x1f0 (0x10)
	struct TArray<struct FCustomPartVectorParameter> VectorParameters; // 0x200 (0x10)
	struct FFortCosmeticOverlayMaterialData OverlayMaterialData; // 0x210 (0x50)
	struct TArray<class USoundLibrary*> SoundLibraries; // 0x260 (0x10)
	int MaterialOverrideFlags; // 0x270 (0x4)
	int IgnoredMaterialOverrideFlags; // 0x274 (0x4)
	struct TWeakObjectPtr<class UParticleSystem> IdleEffect; // 0x278 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> IdleEffectNiagara; // 0x2a0 (0x28)
	struct FName IdleFXSocketName; // 0x2c8 (0x4)
	bool bUseIdleFXNativeCustomAttachmentParams; // 0x2cc (0x1)
	unsigned char unreflected_2cd[0x3]; // 0x2cd (0x3) 
	struct FCharacterPartAttachmentParams IdleFXNativeCustomAttachmentParams; // 0x2d0 (0xc)
	bool bAutoActivate; // 0x2dc (0x1)
	unsigned char padding_2dd[0x3]; // 0x2dd (0x3)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPart.ShouldAutoActivate (Underlying native function: ShouldAutoActivate 0x8815d30)
	bool ShouldAutoActivate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPart.GetSkeletalMesh (Underlying native function: GetSkeletalMesh 0x8815460)
	class USkeletalMesh* GetSkeletalMesh(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPart.GetPartType (Underlying native function: GetPartType 0x8815064)
	struct TEnumAsByte<EFortCustomPartType> GetPartType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPart.GetMaterialOverridesByIndex (Underlying native function: GetMaterialOverridesByIndex 0x8815310)
	struct TMap<int, class UMaterialInterface*> GetMaterialOverridesByIndex(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPart.GetIdleFXSocketName (Underlying native function: GetIdleFXSocketName 0x276de64)
	struct FName GetIdleFXSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPart.GetEffectNiagara (Underlying native function: GetEffectNiagara 0x88151d8)
	struct TWeakObjectPtr<class UNiagaraSystem> GetEffectNiagara(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPart.GetEffectCascade (Underlying native function: GetEffectCascade 0x88150a0)
	struct TWeakObjectPtr<class UParticleSystem> GetEffectCascade(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPart.GetCharacterPartType (Underlying native function: GetCharacterPartType 0x8815064)
	struct TEnumAsByte<EFortCustomPartType> GetCharacterPartType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

