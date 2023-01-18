// Class /Script/CaretakerRuntime.FortBTTask_CaretakerMoveTo
// Size: 0xe0
class UFortBTTask_CaretakerMoveTo : public UBTTask_MoveTo
{
	struct FBlackboardKeySelector FocalPointWhileMoving; // 0xb0 (0x28)
	struct TEnumAsByte<EPathObstacleAction> PathObstacleAction; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x3]; // 0xd9 (0x3) 
	unsigned char bEnableSlowdownAtGoal; // 0xdc (0x1)
	unsigned char bMoveDirectlyTowards; // 0xdc (0x1)
	unsigned char bStopAtGoal; // 0xdc (0x1)
	unsigned char bFinishMoveOnOverlap; // 0xdc (0x1)
	unsigned char padding_dd[0x3]; // 0xdd (0x3)
};

