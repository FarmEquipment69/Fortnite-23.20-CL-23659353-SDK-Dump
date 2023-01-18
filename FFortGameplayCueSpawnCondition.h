// ScriptStruct /Script/FortniteGame.FortGameplayCueSpawnCondition
// Size: 0x38
struct FFortGameplayCueSpawnCondition
{
	enum EFortGameplayCueSourceCondition SourceCondition; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> AllowedSurfaces; // 0x8 (0x10)
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> DisallowedSurfaces; // 0x18 (0x10)
	float ChanceToPlay; // 0x28 (0x4)
	enum EParticleSignificanceLevel Significance; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	int RequiredDetailMode; // 0x30 (0x4)
	unsigned char bRequireVisible; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};

