// Class /Script/Procedural.ProceduralScatterContentVariation
// Size: 0xe8
class UProceduralScatterContentVariation : public UObject
{
	float Weight; // 0x28 (0x4)
	enum EProceduralScatterContentPivotMode PivotMode; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct FVector AdditionalPivotOffset; // 0x30 (0x18)
	float FootprintBoundingBoxRatio; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FName> SetActorTags; // 0x50 (0x10)
	unsigned char padding_60[0x88]; // 0x60 (0x88)
};

