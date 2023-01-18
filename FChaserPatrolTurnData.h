// ScriptStruct /Script/FortniteGame.ChaserPatrolTurnData
// Size: 0x40
struct FChaserPatrolTurnData
{
	bool bPatrolTurning; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector PatrolTurnStartDirection; // 0x8 (0x18)
	struct FVector PatrolTurnEndDirection; // 0x20 (0x18)
	float PatrolMoveSpeed; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

