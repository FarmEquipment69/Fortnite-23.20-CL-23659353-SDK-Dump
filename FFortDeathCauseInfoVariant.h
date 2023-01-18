// ScriptStruct /Script/FortniteGame.FortDeathCauseInfoVariant
// Size: 0x58
struct FFortDeathCauseInfoVariant
{
	struct FString DisplayText; // 0x0 (0x10)
	struct FGameplayTag DeathCauseTag; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct FText> SelfInflictedMessages; // 0x18 (0x10)
	struct TArray<struct FText> SelfInflictedDBNOMessages; // 0x28 (0x10)
	struct TArray<struct FText> EliminatedMessages; // 0x38 (0x10)
	struct TArray<struct FText> EliminatedDBNOMessages; // 0x48 (0x10)
};

