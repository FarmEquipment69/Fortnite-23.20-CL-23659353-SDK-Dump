// ScriptStruct /Script/Procedural.ProceduralPointCloudPoint
// Size: 0xb0
struct FProceduralPointCloudPoint
{
	struct FTransform Transform; // 0x0 (0x60)
	struct FVector SurfaceNormal; // 0x60 (0x18)
	class UObject* SurfaceObject; // 0x78 (0x8)
	class UObject* Object; // 0x80 (0x8)
	int ObjectVariation; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct TArray<struct FName> Tags; // 0x90 (0x10)
	float CollisionRadius; // 0xa0 (0x4)
	float SourcePointGeneratorIndex; // 0xa4 (0x4)
	unsigned char padding_a8[0x8]; // 0xa8 (0x8)
};

