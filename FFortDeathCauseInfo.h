// ScriptStruct /Script/FortniteGame.FortDeathCauseInfo
// Size: 0x80
struct FFortDeathCauseInfo
{
	struct FString DisplayText; // 0x0 (0x10)
	struct FGameplayTag DeathCauseTag; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FText EliminatedByName; // 0x18 (0x18)
	struct TArray<struct FText> SelfInflictedMessages; // 0x30 (0x10)
	struct TArray<struct FText> SelfInflictedDBNOMessages; // 0x40 (0x10)
	struct TArray<struct FText> EliminatedMessages; // 0x50 (0x10)
	struct TArray<struct FText> EliminatedDBNOMessages; // 0x60 (0x10)
	struct TArray<struct FFortDeathCauseInfoVariant> DeathCauseInfoVariants; // 0x70 (0x10)
};

