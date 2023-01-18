// Class /Script/Engine.WorldComposition
// Size: 0x68
class UWorldComposition : public UObject
{
	unsigned char unreflected_28[0x20]; // 0x28 (0x20) 
	struct TArray<class ULevelStreaming*> TilesStreaming; // 0x48 (0x10)
	double TilesStreamingTimeThreshold; // 0x58 (0x8)
	bool bLoadAllTilesDuringCinematic; // 0x60 (0x1)
	bool bRebaseOriginIn3DSpace; // 0x61 (0x1)
	unsigned char unreflected_62[0x2]; // 0x62 (0x2) 
	float RebaseOriginDistance; // 0x64 (0x4)
};

