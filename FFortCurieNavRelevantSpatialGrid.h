// ScriptStruct /Script/FortniteGame.FortCurieNavRelevantSpatialGrid
// Size: 0x1c8
struct FFortCurieNavRelevantSpatialGrid : FFortSpatialGrid
{
	unsigned char unreflected_c0[0x8]; // 0xc0 (0x8) 
	struct TMap<struct FIntPoint*, class UFortCurieDangerousNavRelevantObject*> NavRelevantObjectMap; // 0xc8 (0x50)
	struct TArray<class UFortCurieDangerousNavRelevantObject*> NavRelevantPool; // 0x118 (0x10)
	unsigned char padding_128[0xa0]; // 0x128 (0xa0)
};

