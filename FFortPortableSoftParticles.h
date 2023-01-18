// ScriptStruct /Script/FortniteGame.FortPortableSoftParticles
// Size: 0x58
struct FFortPortableSoftParticles
{
	enum EFXType FXType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class UNiagaraSystem> NiagaraVersion; // 0x8 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> CascadeVersion; // 0x30 (0x28)
};

