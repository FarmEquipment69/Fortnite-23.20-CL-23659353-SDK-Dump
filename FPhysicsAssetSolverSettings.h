// ScriptStruct /Script/Engine.PhysicsAssetSolverSettings
// Size: 0x1c
struct FPhysicsAssetSolverSettings
{
	int PositionIterations; // 0x0 (0x4)
	int VelocityIterations; // 0x4 (0x4)
	int ProjectionIterations; // 0x8 (0x4)
	float CullDistance; // 0xc (0x4)
	float MaxDepenetrationVelocity; // 0x10 (0x4)
	float FixedTimeStep; // 0x14 (0x4)
	bool bUseLinearJointSolver; // 0x18 (0x1)
	unsigned char padding_19[0x3]; // 0x19 (0x3)
};

