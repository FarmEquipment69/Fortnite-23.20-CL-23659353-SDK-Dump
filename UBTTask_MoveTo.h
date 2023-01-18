// Class /Script/AIModule.BTTask_MoveTo
// Size: 0xb0
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
	float AcceptableRadius; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	class UClass* FilterClass; // 0xa0 (0x8)
	float ObservedBlackboardValueTolerance; // 0xa8 (0x4)
	unsigned char bObserveBlackboardValue; // 0xac (0x1)
	unsigned char bAllowStrafe; // 0xac (0x1)
	unsigned char bAllowPartialPath; // 0xac (0x1)
	unsigned char bTrackMovingGoal; // 0xac (0x1)
	unsigned char bProjectGoalLocation; // 0xac (0x1)
	unsigned char bReachTestIncludesAgentRadius; // 0xac (0x1)
	unsigned char bReachTestIncludesGoalRadius; // 0xac (0x1)
	unsigned char bStopOnOverlap; // 0xac (0x1)
	unsigned char bStopOnOverlapNeedsUpdate; // 0xad (0x1)
	unsigned char padding_ae[0x2]; // 0xae (0x2)
};

