// Class /Script/NavCorridor.NavCorridorTestingComponent
// Size: 0x6b0
class UNavCorridorTestingComponent : public UDebugDrawComponent
{
	struct FNavAgentProperties NavAgentProps; // 0x590 (0x30)
	class UClass* FilterClass; // 0x5c0 (0x8)
	bool bFindCorridorToGoal; // 0x5c8 (0x1)
	bool bFollowPathOnGoalCorridor; // 0x5c9 (0x1)
	unsigned char unreflected_5ca[0x2]; // 0x5ca (0x2) 
	float FollowLookAheadDistance; // 0x5cc (0x4)
	class AActor* GoalActor; // 0x5d0 (0x8)
	class ANavigationData* NavData; // 0x5d8 (0x8)
	struct FNavCorridorParams CorridorParams; // 0x5e0 (0x18)
	bool bUpdateParametersFromWidth; // 0x5f8 (0x1)
	unsigned char unreflected_5f9[0x3]; // 0x5f9 (0x3) 
	float PathOffset; // 0x5fc (0x4)
	float PathfindingTimeUs; // 0x600 (0x4)
	float CorridorTimeUs; // 0x604 (0x4)
	unsigned char padding_608[0xa8]; // 0x608 (0xa8)
};

