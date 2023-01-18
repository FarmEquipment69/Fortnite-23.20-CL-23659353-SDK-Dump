// ScriptStruct /Script/FortniteGame.FortGameplayCueParticleInfo
// Size: 0xb0
struct FFortGameplayCueParticleInfo
{
	struct FFortGameplayCueSpawnCondition Condition; // 0x0 (0x38)
	struct FFortGameplayCueAttachInfo Attachment; // 0x38 (0x58)
	enum EFXType FXType; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	class UNiagaraSystem* NiagaraSystem; // 0x98 (0x8)
	class UParticleSystem* ParticleSystem; // 0xa0 (0x8)
	unsigned char bCastShadow; // 0xa8 (0x1)
	unsigned char bOverrideCondition; // 0xa8 (0x1)
	unsigned char bOverrideAttachment; // 0xa8 (0x1)
	unsigned char padding_a9[0x7]; // 0xa9 (0x7)
};

