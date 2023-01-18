// ScriptStruct /Script/FortniteGame.MegaStormCircle
// Size: 0x70
struct FMegaStormCircle
{
	struct FBuildingSupportCellIndex GridCenter; // 0x0 (0xc)
	int NumCellsFromCenter; // 0xc (0x4)
	int CurrentQuadrant; // 0x10 (0x4)
	struct FBuildingSupportCellIndex GridAt; // 0x14 (0xc)
	int RadiusInGridCells; // 0x20 (0x4)
	int XAdvanceAccumulation; // 0x24 (0x4)
	int YAdvanceAccumulation; // 0x28 (0x4)
	int GridRadiusSquaredX4; // 0x2c (0x4)
	int NumPlots; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FVector WorldCenter; // 0x38 (0x18)
	float WorldRadius; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct TArray<struct TWeakObjectPtr<class ABuildingSMActor>> ActorsInMegaStorm; // 0x58 (0x10)
	enum EMegaStormState MegaStormState; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

