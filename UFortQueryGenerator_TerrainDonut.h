// Class /Script/FortniteAI.FortQueryGenerator_TerrainDonut
// Size: 0x140
class UFortQueryGenerator_TerrainDonut : public UEnvQueryGenerator
{
	class UClass* Center; // 0x50 (0x8)
	struct FAIDataProviderFloatValue Radius; // 0x58 (0x38)
	struct FAIDataProviderFloatValue RadiusWidth; // 0x90 (0x38)
	struct FAIDataProviderFloatValue SpacingArc; // 0xc8 (0x38)
	struct FAIDataProviderIntValue NumRings; // 0x100 (0x38)
	unsigned char bFilterAllowTerrain; // 0x138 (0x1)
	unsigned char bFilterAllowBuildings; // 0x138 (0x1)
	unsigned char padding_139[0x7]; // 0x139 (0x7)
};

