// ScriptStruct /Script/FortniteGame.GliderTrailParticleDefinition
// Size: 0xa0
struct FGliderTrailParticleDefinition
{
	struct TWeakObjectPtr<class UNiagaraSystem> NiagaraSystem; // 0x0 (0x28)
	struct FName EffectSocket; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FTransform Offset; // 0x30 (0x60)
	unsigned char unreflected_90[0x1]; // 0x90 (0x1) 
	enum EGliderTrailActivationMode ActivationMode; // 0x91 (0x1)
	enum EGliderTrailAttachmentMode AttachmentMode; // 0x92 (0x1)
	unsigned char padding_93[0xd]; // 0x93 (0xd)
};

