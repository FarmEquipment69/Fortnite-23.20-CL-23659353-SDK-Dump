// Class /Script/FortniteAI.FortAIGoalProvider_EnvQuery
// Size: 0xd8
class UFortAIGoalProvider_EnvQuery : public UFortAIGoalProvider
{
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	class UEnvQuery* GoalQuery; // 0x50 (0x8)
	float AutomaticUpdatePeriodInSeconds; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FFortAIAssignmentIdentifier SpecificAssignmentContext; // 0x60 (0x30)
	struct TWeakObjectPtr<class UClass> AIPawnContext; // 0x90 (0x28)
	unsigned char padding_b8[0x20]; // 0xb8 (0x20)
};

