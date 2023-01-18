// ScriptStruct /Script/Procedural.ProceduralScatterTargetSurface
// Size: 0x48
struct FProceduralScatterTargetSurface
{
	bool bAllowLandscape; // 0x0 (0x1)
	bool bAllowBSP; // 0x1 (0x1)
	bool bAllowStaticMesh; // 0x2 (0x1)
	bool bAllowTranslucent; // 0x3 (0x1)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FName> AllowedActorTags; // 0x8 (0x10)
	struct TArray<struct FName> DisallowedActorTags; // 0x18 (0x10)
	struct TArray<struct FName> AllowedComponentTags; // 0x28 (0x10)
	struct TArray<struct FName> DisallowedComponentTags; // 0x38 (0x10)
};

