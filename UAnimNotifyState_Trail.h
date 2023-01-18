// Class /Script/Engine.AnimNotifyState_Trail
// Size: 0x50
class UAnimNotifyState_Trail : public UAnimNotifyState
{
	class UParticleSystem* PSTemplate; // 0x30 (0x8)
	struct FName FirstSocketName; // 0x38 (0x4)
	struct FName SecondSocketName; // 0x3c (0x4)
	struct TEnumAsByte<ETrailWidthMode> WidthScaleMode; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	struct FName WidthScaleCurve; // 0x44 (0x4)
	unsigned char bRecycleSpawnedSystems; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)

	/* Functions */

	// Function /Script/Engine.AnimNotifyState_Trail.OverridePSTemplate (Has no native function)
	class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation); // (Event | Public | BlueprintEvent | Const)
};

