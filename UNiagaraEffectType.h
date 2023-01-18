// Class /Script/Niagara.NiagaraEffectType
// Size: 0xa0
class UNiagaraEffectType : public UObject
{
	bool bAllowCullingForLocalPlayers; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	enum ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x2c (0x4)
	enum ENiagaraCullReaction CullReaction; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UNiagaraSignificanceHandler* SignificanceHandler; // 0x38 (0x8)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x40 (0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x50 (0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x60 (0x10)
	unsigned char unreflected_70[0x8]; // 0x70 (0x8) 
	class UNiagaraBaselineController* PerformanceBaselineController; // 0x78 (0x8)
	struct FNiagaraPerfBaselineStats PerfBaselineStats; // 0x80 (0x10)
	struct FGuid PerfBaselineVersion; // 0x90 (0x10)
};

