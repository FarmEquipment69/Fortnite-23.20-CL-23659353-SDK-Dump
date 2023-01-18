// ScriptStruct /Script/FortniteGame.ParticleVariant
// Size: 0x60
struct FParticleVariant
{
	struct TWeakObjectPtr<class UFXSystemAsset> ParticleSystemToAlter; // 0x0 (0x28)
	struct FName ComponentToOverride; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TWeakObjectPtr<class UFXSystemAsset> OverrideParticleSystem; // 0x30 (0x28)
	bool bResetParameterOverridesOnSwap; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)
};

