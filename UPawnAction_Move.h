// Class /Script/AIModule.PawnAction_Move
// Size: 0xf0
class UPawnAction_Move : public UPawnAction
{
	class AActor* GoalActor; // 0x90 (0x8)
	struct FVector GoalLocation; // 0x98 (0x18)
	float AcceptableRadius; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	class UClass* FilterClass; // 0xb8 (0x8)
	unsigned char bAllowStrafe; // 0xc0 (0x1)
	unsigned char bFinishOnOverlap; // 0xc0 (0x1)
	unsigned char bUsePathfinding; // 0xc0 (0x1)
	unsigned char bAllowPartialPath; // 0xc0 (0x1)
	unsigned char bProjectGoalToNavigation; // 0xc0 (0x1)
	unsigned char bUpdatePathToGoal; // 0xc0 (0x1)
	unsigned char bAbortSubActionOnPathChange; // 0xc0 (0x1)
	unsigned char padding_c1[0x2f]; // 0xc1 (0x2f)
};

