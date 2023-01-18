// Class /Script/Engine.PhysicalAnimationComponent
// Size: 0xe0
class UPhysicalAnimationComponent : public UActorComponent
{
	float StrengthMultiplyer; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class USkeletalMeshComponent* SkeletalMeshComponent; // 0xa8 (0x8)
	unsigned char padding_b0[0x30]; // 0xb0 (0x30)

	/* Functions */

	// Function /Script/Engine.PhysicalAnimationComponent.SetStrengthMultiplyer (Underlying native function: SetStrengthMultiplyer 0x9efb58c)
	void SetStrengthMultiplyer(float& InStrengthMultiplyer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicalAnimationComponent.SetSkeletalMeshComponent (Underlying native function: SetSkeletalMeshComponent 0x9efb3a4)
	void SetSkeletalMeshComponent(class USkeletalMeshComponent*& InSkeletalMeshComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicalAnimationComponent.GetBodyTargetTransform (Underlying native function: GetBodyTargetTransform 0x9ef4928)
	struct FTransform GetBodyTargetTransform(struct FName& BodyName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettingsBelow (Underlying native function: ApplyPhysicalAnimationSettingsBelow 0x9ef101c)
	void ApplyPhysicalAnimationSettingsBelow(struct FName& BodyName, struct FPhysicalAnimationData& PhysicalAnimationData, bool& bIncludeSelf); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettings (Underlying native function: ApplyPhysicalAnimationSettings 0x9ef0f38)
	void ApplyPhysicalAnimationSettings(struct FName& BodyName, struct FPhysicalAnimationData& PhysicalAnimationData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationProfileBelow (Underlying native function: ApplyPhysicalAnimationProfileBelow 0x9ef0dec)
	void ApplyPhysicalAnimationProfileBelow(struct FName& BodyName, struct FName& ProfileName, bool& bIncludeSelf, bool& bClearNotFound); // (Final | Native | Public | BlueprintCallable)
};

