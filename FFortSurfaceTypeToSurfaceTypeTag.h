// ScriptStruct /Script/FortniteGame.FortSurfaceTypeToSurfaceTypeTag
// Size: 0xc
struct FFortSurfaceTypeToSurfaceTypeTag
{
	struct TEnumAsByte<EFortFootstepSurfaceType> FootSurfaceType; // 0x0 (0x1)
	struct TEnumAsByte<EPhysicalSurface> SurfaceType; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct FGameplayTag SurfaceTypeTag; // 0x4 (0x4)
	bool bAllowsSurfaceRetriggerOfEvents; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

