// ScriptStruct /Script/FortniteGame.StormShieldMoveData
// Size: 0x40
struct FStormShieldMoveData
{
	float MoveRate; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector TargetLocation; // 0x8 (0x18)
	struct FVector StartingLocation; // 0x20 (0x18)
	float SafeAreaStartLocationChangeTime; // 0x38 (0x4)
	float SafeAreaFinishLocationChangeTime; // 0x3c (0x4)
};

