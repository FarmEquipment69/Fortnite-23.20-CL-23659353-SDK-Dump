// ScriptStruct /Script/Niagara.NiagaraRibbonUVSettings
// Size: 0x38
struct FNiagaraRibbonUVSettings
{
	enum ENiagaraRibbonUVDistributionMode DistributionMode; // 0x0 (0x4)
	enum ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x4 (0x4)
	enum ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x8 (0x4)
	float TilingLength; // 0xc (0x4)
	struct FVector2D Offset; // 0x10 (0x10)
	struct FVector2D Scale; // 0x20 (0x10)
	bool bEnablePerParticleUOverride; // 0x30 (0x1)
	bool bEnablePerParticleVRangeOverride; // 0x31 (0x1)
	unsigned char padding_32[0x6]; // 0x32 (0x6)
};

