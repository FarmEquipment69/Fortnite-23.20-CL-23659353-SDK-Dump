// ScriptStruct /Script/NavCorridor.NavCorridorParams
// Size: 0x18
struct FNavCorridorParams
{
	float Width; // 0x0 (0x4)
	float ObstacleTaperAngle; // 0x4 (0x4)
	float SmallSectorThreshold; // 0x8 (0x4)
	float LargeSectorThreshold; // 0xc (0x4)
	float SimplifyEdgeThreshold; // 0x10 (0x4)
	bool bSimplifyFlipPortals; // 0x14 (0x1)
	bool bSimplifyConvexPortals; // 0x15 (0x1)
	bool bSimplifyConcavePortals; // 0x16 (0x1)
	unsigned char padding_17[0x1]; // 0x17 (0x1)
};

