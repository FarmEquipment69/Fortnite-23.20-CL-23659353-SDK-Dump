// Class /Script/FortniteGame.CustomCharacterPartModifier
// Size: 0x480
class ACustomCharacterPartModifier : public ACustomCosmeticModifierBase
{
	struct FName ChildComponentTag; // 0x460 (0x4)
	bool bAutoApplyVariants; // 0x464 (0x1)
	unsigned char unreflected_465[0x3]; // 0x465 (0x3) 
	class UFXSystemComponent* IdleVFX; // 0x468 (0x8)
	struct TEnumAsByte<EFortCustomPartType> PartType; // 0x470 (0x1)
	unsigned char padding_471[0xf]; // 0x471 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPartModifier.UsesIdleVFXNativeCustomAttachment (Underlying native function: UsesIdleVFXNativeCustomAttachment 0x882ed98)
	bool UsesIdleVFXNativeCustomAttachment(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.SetChildParticleComponentsVisible (Underlying native function: SetChildParticleComponentsVisible 0x882d720)
	void SetChildParticleComponentsVisible(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.SetChildMeshComponentsHidden (Underlying native function: SetChildMeshComponentsHidden 0x882d6a0)
	void SetChildMeshComponentsHidden(bool& bHideChildComponents); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.SetCharacterActiveVariant (Underlying native function: SetCharacterActiveVariant 0x882d5c8)
	void SetCharacterActiveVariant(struct FGameplayTag& ChannelTag, struct FGameplayTag& VariantTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.OnPawnAndPartChanged (Has no native function)
	void OnPawnAndPartChanged(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.GetSkeletalMeshForAssociatedPlayerPawnPartType (Underlying native function: GetSkeletalMeshForAssociatedPlayerPawnPartType 0x2c98b90)
	class UMeshComponent* GetSkeletalMeshForAssociatedPlayerPawnPartType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.GetIdleVFXComponent (Underlying native function: GetIdleVFXComponent 0x2c0d3ec)
	class UFXSystemComponent* GetIdleVFXComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.GetIdleFXSocketName (Underlying native function: GetIdleFXSocketName 0x29226e4)
	struct FName GetIdleFXSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.GetCharacterPartType (Underlying native function: GetCharacterPartType 0x882ce60)
	struct TEnumAsByte<EFortCustomPartType> GetCharacterPartType(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.ForceResetParticleSystems (Underlying native function: ForceResetParticleSystems 0x882ce38)
	void ForceResetParticleSystems(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartModifier.ApplyVariantsToTrackedComponents (Underlying native function: ApplyVariantsToTrackedComponents 0x882ccd8)
	void ApplyVariantsToTrackedComponents(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

