// Class /Script/Hotfix.UpdateManager
// Size: 0x1f0
class UUpdateManager : public UObject
{
	unsigned char unreflected_28[0x60]; // 0x28 (0x60) 
	float HotfixCheckCompleteDelay; // 0x88 (0x4)
	float UpdateCheckCompleteDelay; // 0x8c (0x4)
	float HotfixAvailabilityCheckCompleteDelay; // 0x90 (0x4)
	float UpdateCheckAvailabilityCompleteDelay; // 0x94 (0x4)
	unsigned char unreflected_98[0x4]; // 0x98 (0x4) 
	int AppSuspendedUpdateCheckTimeSeconds; // 0x9c (0x4)
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	bool bPlatformEnvironmentDetected; // 0xa8 (0x1)
	bool bInitialUpdateFinished; // 0xa9 (0x1)
	bool bCheckHotfixAvailabilityOnly; // 0xaa (0x1)
	enum EUpdateState CurrentUpdateState; // 0xab (0x1)
	int WorstNumFilesPendingLoadViewed; // 0xac (0x4)
	unsigned char unreflected_b0[0x4]; // 0xb0 (0x4) 
	enum EHotfixResult LastHotfixResult; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x23]; // 0xb5 (0x23) 
	struct FDateTime* LastUpdateCheck[0x2]; // 0xd8 (0x8) (ARRAY) 
	enum EUpdateCompletionStatus LastCompletionResult[0x2]; // 0xe8 (0x1) (ARRAY) 
	unsigned char unreflected_ea[0x26]; // 0xea (0x26) 
	class UEnum* UpdateStateEnum; // 0x110 (0x8)
	class UEnum* UpdateCompletionEnum; // 0x118 (0x8)
	struct FUpdateContextDefinition UpdateContextDefinitionUnknown; // 0x120 (0x68)
	struct TArray<struct FUpdateContextDefinition> UpdateContextDefinitions; // 0x188 (0x10)
	unsigned char padding_198[0x58]; // 0x198 (0x58)
};

