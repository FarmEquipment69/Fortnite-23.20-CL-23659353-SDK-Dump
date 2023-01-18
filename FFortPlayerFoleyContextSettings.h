// ScriptStruct /Script/FortniteGame.FortPlayerFoleyContextSettings
// Size: 0x10
struct FFortPlayerFoleyContextSettings
{
	struct FGameplayTag EventName; // 0x0 (0x4)
	enum EFortFootstepPlayerRelation RelationToPlayer; // 0x4 (0x1)
	enum EFortFootstepStanceType Stance; // 0x5 (0x1)
	enum EFortFootstepSurface Surface; // 0x6 (0x1)
	unsigned char unreflected_7[0x1]; // 0x7 (0x1) 
	float VolumeMultiplier; // 0x8 (0x4)
	bool bUseSurfaceType; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

