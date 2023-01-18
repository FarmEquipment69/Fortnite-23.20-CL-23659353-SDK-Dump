// ScriptStruct /Script/AIModule.EnvQueryManagerConfig
// Size: 0x30
struct FEnvQueryManagerConfig
{
	float MaxAllowedTestingTime; // 0x0 (0x4)
	bool bTestQueriesUsingBreadth; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	int QueryCountWarningThreshold; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	double QueryCountWarningInterval; // 0x10 (0x8)
	double ExecutionTimeWarningSeconds; // 0x18 (0x8)
	double HandlingResultTimeWarningSeconds; // 0x20 (0x8)
	double GenerationTimeWarningSeconds; // 0x28 (0x8)
};

