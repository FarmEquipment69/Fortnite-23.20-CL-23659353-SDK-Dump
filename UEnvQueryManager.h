// Class /Script/AIModule.EnvQueryManager
// Size: 0x158
class UEnvQueryManager : public UAISubsystem
{
	unsigned char unreflected_38[0x70]; // 0x38 (0x70) 
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xa8 (0x10)
	struct TArray<class UEnvQueryContext*> LocalContexts; // 0xb8 (0x10)
	struct TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8 (0x10)
	unsigned char unreflected_d8[0x54]; // 0xd8 (0x54) 
	float MaxAllowedTestingTime; // 0x12c (0x4)
	bool bTestQueriesUsingBreadth; // 0x130 (0x1)
	unsigned char unreflected_131[0x3]; // 0x131 (0x3) 
	int QueryCountWarningThreshold; // 0x134 (0x4)
	double QueryCountWarningInterval; // 0x138 (0x8)
	double ExecutionTimeWarningSeconds; // 0x140 (0x8)
	double HandlingResultTimeWarningSeconds; // 0x148 (0x8)
	double GenerationTimeWarningSeconds; // 0x150 (0x8)

	/* Functions */

	// Function /Script/AIModule.EnvQueryManager.RunEQSQuery (Underlying native function: RunEQSQuery 0xa1baff8)
	static class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject*& WorldContextObject, class UEnvQuery*& QueryTemplate, class UObject*& Querier, struct TEnumAsByte<EEnvQueryRunMode>& RunMode, class UClass*& WrapperClass); // (Final | Native | Static | Public | BlueprintCallable)
};

