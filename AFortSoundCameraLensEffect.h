// Class /Script/FortniteGame.FortSoundCameraLensEffect
// Size: 0x430
class AFortSoundCameraLensEffect : public AFortEmitterCameraLensEffectDirectional
{
	enum EFortSoundIndicatorTypes IndicatorType; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0x3]; // 0x3a9 (0x3) 
	int SnapToSections; // 0x3ac (0x4)
	float MaxAudibleDistanceOnSpawn; // 0x3b0 (0x4)
	unsigned char unreflected_3b4[0x4]; // 0x3b4 (0x4) 
	class AActor* InstigatingActor; // 0x3b8 (0x8)
	class UTexture* IconOverride; // 0x3c0 (0x8)
	struct FLinearColor TintOverride; // 0x3c8 (0x10)
	struct TMap<enum EFortSoundIndicatorTypes, struct FSoundIndicatorInitializationData> EmitterDataMap; // 0x3d8 (0x50)
	unsigned char padding_428[0x8]; // 0x428 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.SetType (Underlying native function: SetType 0x89baff0)
	void SetType(enum EFortSoundIndicatorTypes& NewType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.SetTintOverride (Underlying native function: SetTintOverride 0x89baf64)
	void SetTintOverride(struct FLinearColor& Color); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.SetStrengthCurve (Underlying native function: SetStrengthCurve 0x89bae24)
	void SetStrengthCurve(struct FRuntimeFloatCurve& Curve); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.SetInstigatingActor (Underlying native function: SetInstigatingActor 0x89baa88)
	void SetInstigatingActor(class AActor*& NewInstigator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.SetIconOverride (Underlying native function: SetIconOverride 0x89baa08)
	void SetIconOverride(class UTexture*& NewIcon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.SetIcon (Underlying native function: SetIcon 0x89ba988)
	void SetIcon(class UTexture*& NewIcon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.GetStrengthCurveForActiveType (Has no native function)
	struct FRuntimeFloatCurve GetStrengthCurveForActiveType(); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.GetDefaultTint (Has no native function)
	struct FLinearColor GetDefaultTint(); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortSoundCameraLensEffect.GetDefaultIcon (Has no native function)
	class UTexture* GetDefaultIcon(); // (Event | Public | BlueprintEvent)
};

