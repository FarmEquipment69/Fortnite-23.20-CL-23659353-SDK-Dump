// ScriptStruct /Script/Chaos.ChaosSolverConfiguration
// Size: 0x68
struct FChaosSolverConfiguration
{
	int PositionIterations; // 0x0 (0x4)
	int VelocityIterations; // 0x4 (0x4)
	int ProjectionIterations; // 0x8 (0x4)
	float CollisionMarginFraction; // 0xc (0x4)
	float CollisionMarginMax; // 0x10 (0x4)
	float CollisionCullDistance; // 0x14 (0x4)
	float CollisionMaxPushOutVelocity; // 0x18 (0x4)
	float ClusterConnectionFactor; // 0x1c (0x4)
	enum EClusterUnionMethod ClusterUnionConnectionType; // 0x20 (0x1)
	bool bGenerateCollisionData; // 0x21 (0x1)
	unsigned char unreflected_22[0x2]; // 0x22 (0x2) 
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x24 (0x10)
	bool bGenerateBreakData; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x38 (0x10)
	bool bGenerateTrailingData; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x4c (0x10)
	int Iterations; // 0x5c (0x4)
	int PushOutIterations; // 0x60 (0x4)
	bool bGenerateContactGraph; // 0x64 (0x1)
	unsigned char padding_65[0x3]; // 0x65 (0x3)
};

