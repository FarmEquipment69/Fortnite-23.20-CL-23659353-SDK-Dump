// Class /Script/Engine.PoseableMeshComponent
// Size: 0xa50
class UPoseableMeshComponent : public USkinnedMeshComponent
{
	unsigned char unreflected_a50[0xa50]; 

	/* Functions */

	// Function /Script/Engine.PoseableMeshComponent.SetBoneTransformByName (Underlying native function: SetBoneTransformByName 0x9cf8a40)
	void SetBoneTransformByName(struct FName& BoneName, struct FTransform& InTransform, struct TEnumAsByte<EBoneSpaces>& BoneSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.SetBoneScaleByName (Underlying native function: SetBoneScaleByName 0x9cf8938)
	void SetBoneScaleByName(struct FName& BoneName, struct FVector& InScale3D, struct TEnumAsByte<EBoneSpaces>& BoneSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.SetBoneRotationByName (Underlying native function: SetBoneRotationByName 0x9cf8830)
	void SetBoneRotationByName(struct FName& BoneName, struct FRotator& InRotation, struct TEnumAsByte<EBoneSpaces>& BoneSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.SetBoneLocationByName (Underlying native function: SetBoneLocationByName 0x9cf8728)
	void SetBoneLocationByName(struct FName& BoneName, struct FVector& InLocation, struct TEnumAsByte<EBoneSpaces>& BoneSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.ResetBoneTransformByName (Underlying native function: ResetBoneTransformByName 0x9cf8040)
	void ResetBoneTransformByName(struct FName& BoneName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.GetBoneTransformByName (Underlying native function: GetBoneTransformByName 0x9cf6e6c)
	struct FTransform GetBoneTransformByName(struct FName& BoneName, struct TEnumAsByte<EBoneSpaces>& BoneSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.GetBoneScaleByName (Underlying native function: GetBoneScaleByName 0x9cf6d64)
	struct FVector GetBoneScaleByName(struct FName& BoneName, struct TEnumAsByte<EBoneSpaces>& BoneSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.GetBoneRotationByName (Underlying native function: GetBoneRotationByName 0x9cf6c58)
	struct FRotator GetBoneRotationByName(struct FName& BoneName, struct TEnumAsByte<EBoneSpaces>& BoneSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.GetBoneLocationByName (Underlying native function: GetBoneLocationByName 0x9cf6b54)
	struct FVector GetBoneLocationByName(struct FName& BoneName, struct TEnumAsByte<EBoneSpaces>& BoneSpace); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PoseableMeshComponent.CopyPoseFromSkeletalComponent (Underlying native function: CopyPoseFromSkeletalComponent 0x9cf6ac0)
	void CopyPoseFromSkeletalComponent(class USkeletalMeshComponent*& InComponentToCopy); // (Final | Native | Public | BlueprintCallable)
};

