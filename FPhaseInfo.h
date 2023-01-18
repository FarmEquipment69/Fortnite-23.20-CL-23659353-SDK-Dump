// ScriptStruct /Script/SpecialEventGameplayRuntime.PhaseInfo
// Size: 0x58
struct FPhaseInfo
{
	class UClass* PhaseActorClass; // 0x0 (0x8)
	struct FGameplayTag PhaseTag; // 0x8 (0x4)
	float SequenceTime; // 0xc (0x4)
	bool bSetRelevancyMode; // 0x10 (0x1)
	enum ESpecialRelevancyMode RelevancyMode; // 0x11 (0x1)
	unsigned char unreflected_12[0x2]; // 0x12 (0x2) 
	int NumOfSquadsInRelevancyGroup; // 0x14 (0x4)
	struct FGameplayTagContainer RequireLevelsFromPhaseTags; // 0x18 (0x20)
	bool bStartNextPhaseOnPhaseFinished; // 0x38 (0x1)
	bool bGarbageCollectAtPhaseStartOnServer; // 0x39 (0x1)
	bool bGarbageCollectAtPhaseStartOnClient; // 0x3a (0x1)
	unsigned char unreflected_3b[0x5]; // 0x3b (0x5) 
	struct TArray<struct FPhaseLevelEntry> Levels; // 0x40 (0x10)
	class ASpecialEventPhase* PhaseActor; // 0x50 (0x8)
};

