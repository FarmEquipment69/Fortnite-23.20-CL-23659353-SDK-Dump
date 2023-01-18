// Class /Script/FortniteAI.FortBTTask_GameMoveTo
// Size: 0x120
class UFortBTTask_GameMoveTo : public UBTTask_MoveTo
{
	struct FBlackboardKeySelector FocalPointWhileMoving; // 0xb0 (0x28)
	struct TEnumAsByte<EPathObstacleAction> PathObstacleAction; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x7]; // 0xd9 (0x7) 
	class UClass* PushBumpedPawnClass; // 0xe0 (0x8)
	struct FGameplayTag NavFilterTag; // 0xe8 (0x4)
	unsigned char bDetectUnexpectedPathBlockingObstacles; // 0xec (0x1)
	unsigned char bEnableSlowdownAtGoal; // 0xec (0x1)
	unsigned char bStopAtGoal; // 0xec (0x1)
	unsigned char bFinishMoveOnOverlap; // 0xec (0x1)
	unsigned char unreflected_ed[0x3]; // 0xed (0x3) 
	struct FBlackboardKeySelector AcceptableRadiusKey; // 0xf0 (0x28)
	unsigned char bDeimosFlavor; // 0x118 (0x1)
	unsigned char padding_119[0x7]; // 0x119 (0x7)
};

