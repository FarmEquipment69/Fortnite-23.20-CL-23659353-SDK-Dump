// ScriptStruct /Script/EntityFortnite.EntityFortniteStormPhase
// Size: 0x50
struct FEntityFortniteStormPhase
{
	float WaitTime; // 0x0 (0x4)
	float ShrinkTime; // 0x4 (0x4)
	float EndRadius; // 0x8 (0x4)
	float EndRadiusPercentage; // 0xc (0x4)
	int DamageIndex; // 0x10 (0x4)
	bool bMoves; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float MinMovementDistance; // 0x18 (0x4)
	float MaxMovementDistance; // 0x1c (0x4)
	float MinMovementDistancePercentage; // 0x20 (0x4)
	float MaxMovementDistancePercentage; // 0x24 (0x4)
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FVector4 EndLocation; // 0x30 (0x20)
};

