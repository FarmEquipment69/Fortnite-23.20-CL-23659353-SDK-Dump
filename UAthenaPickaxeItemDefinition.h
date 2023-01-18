// Class /Script/FortniteGame.AthenaPickaxeItemDefinition
// Size: 0x960
class UAthenaPickaxeItemDefinition : public UAthenaCosmeticItemDefinition
{
	unsigned char unreflected_7b0[0x8]; // 0x7b0 (0x8) 
	class UFortWeaponMeleeItemDefinition* WeaponDefinition; // 0x7b8 (0x8)
	struct FName MainMeshAttachmentSocketName; // 0x7c0 (0x4)
	struct FName OffhandMeshAttachmentSocketName; // 0x7c4 (0x4)
	unsigned char unreflected_7c8[0x8]; // 0x7c8 (0x8) 
	struct FTransform MainMeshRelativeTransform; // 0x7d0 (0x60)
	struct FTransform OffhandMeshRelativeTransform; // 0x830 (0x60)
	struct FVector PickaxeImpactFXPreviewOffset; // 0x890 (0x18)
	struct FVector PickaxeDualWieldPreviewOffset; // 0x8a8 (0x18)
	struct FRotator PickaxeDualWieldPreviewRotation; // 0x8c0 (0x18)
	struct TWeakObjectPtr<class UAnimMontage> PreviewIdleMontage; // 0x8d8 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> PreviewSwingMontage; // 0x900 (0x28)
	struct FFortUICameraFrameTargetBounds CameraFramingBounds; // 0x928 (0x20)
	struct FVector CameraFramingBoundsCenterOffset; // 0x948 (0x18)
};

