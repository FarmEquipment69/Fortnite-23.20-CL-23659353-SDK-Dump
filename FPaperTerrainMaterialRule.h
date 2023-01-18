// ScriptStruct /Script/Paper2D.PaperTerrainMaterialRule
// Size: 0x38
struct FPaperTerrainMaterialRule
{
	class UPaperSprite* StartCap; // 0x0 (0x8)
	struct TArray<class UPaperSprite*> Body; // 0x8 (0x10)
	class UPaperSprite* EndCap; // 0x18 (0x8)
	float MinimumAngle; // 0x20 (0x4)
	float MaximumAngle; // 0x24 (0x4)
	bool bEnableCollision; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float CollisionOffset; // 0x2c (0x4)
	int DrawOrder; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

