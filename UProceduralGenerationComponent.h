// Class /Script/Procedural.ProceduralGenerationComponent
// Size: 0xd0
class UProceduralGenerationComponent : public UActorComponent
{
	class UProceduralGenerator* Generator; // 0xa0 (0x8)
	bool bShowDebugVisualization; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	struct FGuid ProceduralGenerationGuid; // 0xac (0x10)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	class AVolume* GenerationVolume; // 0xc0 (0x8)
	class UProceduralGenerationContext* GenerationContext; // 0xc8 (0x8)
};

