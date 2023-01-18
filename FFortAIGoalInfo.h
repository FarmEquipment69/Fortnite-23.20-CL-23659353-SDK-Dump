// ScriptStruct /Script/FortniteAI.FortAIGoalInfo
// Size: 0x28
struct FFortAIGoalInfo
{
	struct TWeakObjectPtr<class AActor> Actor; // 0x0 (0x8)
	struct FVector Location; // 0x8 (0x18)
	bool bActorAlwaysPerceived; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

