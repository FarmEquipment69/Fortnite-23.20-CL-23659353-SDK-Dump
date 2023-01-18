// Class /Script/Procedural.ProceduralScatterGenerator
// Size: 0xd8
class UProceduralScatterGenerator : public UProceduralGenerator
{
	enum EProceduralScatterMethod ScatterMethod; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FProceduralScatterTileSettings TileSettings; // 0x3c (0x14)
	int RandomSeed; // 0x50 (0x4)
	int NumUniqueSourcePointPatterns; // 0x54 (0x4)
	struct FVector2D GridSize; // 0x58 (0x10)
	struct FVector2D GridJitter; // 0x68 (0x10)
	float GridRotation; // 0x78 (0x4)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FVector2D GridOffset; // 0x80 (0x10)
	struct TArray<struct FProceduralScatterSettingsElement> ScatterSettingsElements; // 0x90 (0x10)
	struct TArray<struct FName> BlockingActorTags; // 0xa0 (0x10)
	bool bAllScatterPointsBlocking; // 0xb0 (0x1)
	bool bLocalDistribution; // 0xb1 (0x1)
	unsigned char unreflected_b2[0x6]; // 0xb2 (0x6) 
	struct TArray<struct FName> BlockingScatterPointTags; // 0xb8 (0x10)
	struct FProceduralScatterDebugSettings ScatterDebugSettings; // 0xc8 (0xc)
	unsigned char padding_d4[0x4]; // 0xd4 (0x4)
};

