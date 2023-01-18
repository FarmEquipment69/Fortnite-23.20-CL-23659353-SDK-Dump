// ScriptStruct /Script/Engine.ParticleRandomSeedInfo
// Size: 0x18
struct FParticleRandomSeedInfo
{
	struct FName ParameterName; // 0x0 (0x4)
	unsigned char bGetSeedFromInstance; // 0x4 (0x1)
	unsigned char bInstanceSeedIsIndex; // 0x4 (0x1)
	unsigned char bResetSeedOnEmitterLooping; // 0x4 (0x1)
	unsigned char bRandomlySelectSeedArray; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<int> RandomSeeds; // 0x8 (0x10)
};

