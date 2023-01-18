// Class /Script/PhysicsCore.PhysicsSettingsCore
// Size: 0xd8
class UPhysicsSettingsCore : public UDeveloperSettings
{
	float DefaultGravityZ; // 0x30 (0x4)
	float DefaultTerminalVelocity; // 0x34 (0x4)
	float DefaultFluidFriction; // 0x38 (0x4)
	int SimulateScratchMemorySize; // 0x3c (0x4)
	int RagdollAggregateThreshold; // 0x40 (0x4)
	float TriangleMeshTriangleMinAreaThreshold; // 0x44 (0x4)
	bool bEnableShapeSharing; // 0x48 (0x1)
	bool bEnablePCM; // 0x49 (0x1)
	bool bEnableStabilization; // 0x4a (0x1)
	bool bWarnMissingLocks; // 0x4b (0x1)
	bool bEnable2DPhysics; // 0x4c (0x1)
	bool bDefaultHasComplexCollision; // 0x4d (0x1)
	unsigned char unreflected_4e[0x2]; // 0x4e (0x2) 
	float BounceThresholdVelocity; // 0x50 (0x4)
	struct TEnumAsByte<EFrictionCombineMode> FrictionCombineMode; // 0x54 (0x1)
	struct TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode; // 0x55 (0x1)
	unsigned char unreflected_56[0x2]; // 0x56 (0x2) 
	float MaxAngularVelocity; // 0x58 (0x4)
	float MaxDepenetrationVelocity; // 0x5c (0x4)
	float ContactOffsetMultiplier; // 0x60 (0x4)
	float MinContactOffset; // 0x64 (0x4)
	float MaxContactOffset; // 0x68 (0x4)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x6c (0x1)
	struct TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity; // 0x6d (0x1)
	unsigned char unreflected_6e[0x2]; // 0x6e (0x2) 
	struct FChaosSolverConfiguration SolverOptions; // 0x70 (0x68)
};

