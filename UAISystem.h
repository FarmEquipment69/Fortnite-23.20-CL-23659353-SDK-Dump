// Class /Script/AIModule.AISystem
// Size: 0x148
class UAISystem : public UAISystemBase
{
	struct FSoftClassPath PerceptionSystemClassName; // 0x58 (0x18)
	struct FSoftClassPath HotSpotManagerClassName; // 0x70 (0x18)
	struct FSoftClassPath EnvQueryManagerClassName; // 0x88 (0x18)
	float AcceptanceRadius; // 0xa0 (0x4)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0xa4 (0x4)
	float PathfollowingNavLinkAcceptanceRadius; // 0xa8 (0x4)
	bool bFinishMoveOnGoalOverlap; // 0xac (0x1)
	bool bAcceptPartialPaths; // 0xad (0x1)
	bool bAllowStrafing; // 0xae (0x1)
	bool bEnableBTAITasks; // 0xaf (0x1)
	bool bAllowControllersAsEQSQuerier; // 0xb0 (0x1)
	bool bEnableDebuggerPlugin; // 0xb1 (0x1)
	bool bForgetStaleActors; // 0xb2 (0x1)
	bool bAddBlackboardSelfKey; // 0xb3 (0x1)
	bool bClearBBEntryOnBTEQSFail; // 0xb4 (0x1)
	struct TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel; // 0xb5 (0x1)
	unsigned char unreflected_b6[0x2]; // 0xb6 (0x2) 
	class UBehaviorTreeManager* BehaviorTreeManager; // 0xb8 (0x8)
	class UEnvQueryManager* EnvironmentQueryManager; // 0xc0 (0x8)
	class UAIPerceptionSystem* PerceptionSystem; // 0xc8 (0x8)
	struct TArray<class UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xd0 (0x10)
	class UAIHotSpotManager* HotSpotManager; // 0xe0 (0x8)
	class UNavLocalGridManager* NavLocalGrids; // 0xe8 (0x8)
	unsigned char padding_f0[0x58]; // 0xf0 (0x58)

	/* Functions */

	// Function /Script/AIModule.AISystem.AILoggingVerbose (Underlying native function: AILoggingVerbose 0x6adf948)
	void AILoggingVerbose(); // (Exec | Native | Public)

	// Function /Script/AIModule.AISystem.AIIgnorePlayers (Underlying native function: AIIgnorePlayers 0x134bfb4)
	void AIIgnorePlayers(); // (Exec | Native | Public)
};

