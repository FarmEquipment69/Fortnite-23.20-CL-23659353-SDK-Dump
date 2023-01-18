// Class /Script/ChaosSolverEngine.ChaosSolverActor
// Size: 0x380
class AChaosSolverActor : public AActor
{
	struct FChaosSolverConfiguration Properties; // 0x288 (0x68)
	float TimeStepMultiplier; // 0x2f0 (0x4)
	int CollisionIterations; // 0x2f4 (0x4)
	int PushOutIterations; // 0x2f8 (0x4)
	int PushOutPairIterations; // 0x2fc (0x4)
	float ClusterConnectionFactor; // 0x300 (0x4)
	enum EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x304 (0x1)
	bool DoGenerateCollisionData; // 0x305 (0x1)
	unsigned char unreflected_306[0x2]; // 0x306 (0x2) 
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x308 (0x10)
	bool DoGenerateBreakingData; // 0x318 (0x1)
	unsigned char unreflected_319[0x3]; // 0x319 (0x3) 
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x31c (0x10)
	bool DoGenerateTrailingData; // 0x32c (0x1)
	unsigned char unreflected_32d[0x3]; // 0x32d (0x3) 
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x330 (0x10)
	float MassScale; // 0x340 (0x4)
	bool bHasFloor; // 0x344 (0x1)
	unsigned char unreflected_345[0x3]; // 0x345 (0x3) 
	float FloorHeight; // 0x348 (0x4)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x34c (0x3)
	unsigned char unreflected_34f[0x1]; // 0x34f (0x1) 
	class UBillboardComponent* SpriteComponent; // 0x350 (0x8)
	unsigned char unreflected_358[0x18]; // 0x358 (0x18) 
	class UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x370 (0x8)
	unsigned char padding_378[0x8]; // 0x378 (0x8)

	/* Functions */

	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive (Underlying native function: SetSolverActive 0x7a9e818)
	void SetSolverActive(bool& bActive); // (Native | Public | BlueprintCallable)

	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver (Underlying native function: SetAsCurrentWorldSolver 0x99a1184)
	void SetAsCurrentWorldSolver(); // (Final | Native | Public | BlueprintCallable)
};

