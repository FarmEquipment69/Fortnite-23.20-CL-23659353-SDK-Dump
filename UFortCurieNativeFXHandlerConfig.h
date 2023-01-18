// Class /Script/FortniteGame.FortCurieNativeFXHandlerConfig
// Size: 0x168
class UFortCurieNativeFXHandlerConfig : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FName ConfigName; // 0x38 (0x4)
	struct FGameplayTag ConfigTag; // 0x3c (0x4)
	unsigned char bUseGlow; // 0x40 (0x1)
	unsigned char bNeedsSignificanceTracking; // 0x40 (0x1)
	unsigned char bNeedsAmbientAudio; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	int GlowPriority; // 0x44 (0x4)
	float GlowMaterialIdx; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FRuntimeFloatCurve GlowFadeInCurve; // 0x50 (0x88)
	struct FRuntimeFloatCurve GlowFadeOutCurve; // 0xd8 (0x88)
	class USoundBase* AmbientSound; // 0x160 (0x8)
};

