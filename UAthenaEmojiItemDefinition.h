// Class /Script/FortniteGame.AthenaEmojiItemDefinition
// Size: 0xae8
class UAthenaEmojiItemDefinition : public UAthenaDanceItemDefinition
{
	struct FGameplayTag EmojiGameplayCueTag; // 0xa08 (0x4)
	unsigned char unreflected_a0c[0x4]; // 0xa0c (0x4) 
	struct TWeakObjectPtr<class UAnimMontage> PreviewAnimation; // 0xa10 (0x28)
	struct TWeakObjectPtr<class UTexture2D> SpriteSheet; // 0xa38 (0x28)
	struct FIntPoint* SheetDimensions; // 0xa60 (0x8)
	int FrameIndex; // 0xa68 (0x4)
	int FrameCount; // 0xa6c (0x4)
	class UMaterialInterface* BaseMaterial; // 0xa70 (0x8)
	struct FVector IconSize; // 0xa78 (0x18)
	struct FLinearColor InitialColor; // 0xa90 (0x10)
	struct FVector InitialLocation; // 0xaa0 (0x18)
	struct FVector InitialVelocity; // 0xab8 (0x18)
	float LifetimeIntroSeconds; // 0xad0 (0x4)
	float LifetimeMidSeconds; // 0xad4 (0x4)
	float LifetimeOutroSeconds; // 0xad8 (0x4)
	unsigned char unreflected_adc[0x4]; // 0xadc (0x4) 
	class UMaterialInstance* GeneratedMaterial; // 0xae0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.AthenaEmojiItemDefinition.ConfigureParticleSystem (Underlying native function: ConfigureParticleSystem 0x875f4d4)
	void ConfigureParticleSystem(class UParticleSystemComponent*& ParticleSystem, struct TWeakObjectPtr<class UTexture2D>& OverrideImage); // (Final | Native | Public | BlueprintCallable | Const)
};

