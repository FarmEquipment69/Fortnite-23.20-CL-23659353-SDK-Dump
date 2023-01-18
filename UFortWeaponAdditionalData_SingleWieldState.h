// Class /Script/FortniteGame.FortWeaponAdditionalData_SingleWieldState
// Size: 0x160
class UFortWeaponAdditionalData_SingleWieldState : public UFortWeaponAdditionalData
{
	struct FGameplayTag AssociatedTagVariant; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TWeakObjectPtr<class UClass> PrimaryFireAbilityInState; // 0x30 (0x28)
	struct TWeakObjectPtr<class UFortWeaponAnimSet> AnimSetInState; // 0x58 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> EquipMontageInState; // 0x80 (0x28)
	bool bHideOffhandMesh; // 0xa8 (0x1)
	bool bUseWeaponHandSocketOverride; // 0xa9 (0x1)
	unsigned char unreflected_aa[0x2]; // 0xaa (0x2) 
	struct FName WeaponHandSocketOverride; // 0xac (0x4)
	bool bUseSeparatePreviewOffsets; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	struct FVector ImpactFxPreviewOffset; // 0xb8 (0x18)
	struct FVector OffHandPreviewOffset; // 0xd0 (0x18)
	struct FRotator OffHandPreviewRotation; // 0xe8 (0x18)
	struct FRotator InitialPreviewRotation; // 0x100 (0x18)
	float FrontendPreviewScale; // 0x118 (0x4)
	unsigned char unreflected_11c[0x4]; // 0x11c (0x4) 
	struct FFortUICameraFrameTargetBounds CameraFramingBounds; // 0x120 (0x20)
	struct TEnumAsByte<EFortWeaponCoreAnimation> AnimationStyleToUse; // 0x140 (0x1)
	unsigned char unreflected_141[0x7]; // 0x141 (0x7) 
	class UClass* LiveAbility; // 0x148 (0x8)
	class UFortWeaponAnimSet* LiveAnimSet; // 0x150 (0x8)
	class UAnimMontage* LiveMontage; // 0x158 (0x8)
};

