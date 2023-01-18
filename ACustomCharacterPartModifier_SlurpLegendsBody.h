// Class /Script/FortniteGame.CustomCharacterPartModifier_SlurpLegendsBody
// Size: 0x4e0
class ACustomCharacterPartModifier_SlurpLegendsBody : public ACustomCharacterPartModifier
{
	class UParticleSystemComponent* TransformBurst; // 0x480 (0x8)
	class UNiagaraComponent* LoopingDrip; // 0x488 (0x8)
	float InterpolationRate; // 0x490 (0x4)
	float ShieldOverride; // 0x494 (0x4)
	bool bUseShieldOverride; // 0x498 (0x1)
	unsigned char unreflected_499[0x7]; // 0x499 (0x7) 
	struct TArray<struct FSlurpLegendSwapToVariantData> VariantData; // 0x4a0 (0x10)
	class AFortPlayerStateZone* AssociatedPS; // 0x4b0 (0x8)
	class UAnimInstance* AssociatedAnimInstance; // 0x4b8 (0x8)
	class UMaterialInstanceDynamic* BodyMID; // 0x4c0 (0x8)
	unsigned char padding_4c8[0x18]; // 0x4c8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPartModifier_SlurpLegendsBody.SetComponentPointers (Underlying native function: SetComponentPointers 0x882d7b4)
	void SetComponentPointers(class UParticleSystemComponent*& xFormBurst, class UNiagaraComponent*& DripLoop); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartModifier_SlurpLegendsBody.GetCurrentShieldPercentage (Underlying native function: GetCurrentShieldPercentage 0x29380f0)
	float GetCurrentShieldPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

