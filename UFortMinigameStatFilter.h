// Class /Script/FortniteGame.FortMinigameStatFilter
// Size: 0x1a0
class UFortMinigameStatFilter : public UObject
{
	enum EFortQuestObjectiveStatEvent StatEvent; // 0x28 (0x1)
	enum EFortQuestObjectiveItemEvent ItemEvent; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	struct TWeakObjectPtr<class UFortItemDefinition> ItemDefinition; // 0x30 (0x28)
	struct FGameplayTagQuery TargetTagsQuery; // 0x58 (0x48)
	struct FGameplayTagQuery SourceTagsQuery; // 0xa0 (0x48)
	struct FGameplayTagQuery ContextTagsQuery; // 0xe8 (0x48)
	bool bAccumulates; // 0x130 (0x1)
	unsigned char unreflected_131[0x7]; // 0x131 (0x7) 
	struct FText Description; // 0x138 (0x18)
	struct FText HudShortDescription; // 0x150 (0x18)
	struct FString AnalyticsString; // 0x168 (0x10)
	struct TWeakObjectPtr<class UTexture2D> HudIcon; // 0x178 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameStatFilter.Matches (Underlying native function: Matches 0x8b0c18c)
	bool Matches(enum EFortQuestObjectiveStatEvent& InStatEvent, class UObject*& InTargetObject, class AController*& InPlayerController, struct FGameplayTagContainer& InTargetTags, struct FGameplayTagContainer& InSourceTags, struct FGameplayTagContainer& InContextTags); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMinigameStatFilter.FormatStat (Underlying native function: FormatStat 0x8b084b0)
	struct FText FormatStat(int& InCount); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMinigameStatFilter.Compare (Underlying native function: Compare 0x8b078a8)
	int Compare(int& FirstScore, int& SecondScore); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameStatFilter.Accumulate (Underlying native function: Accumulate 0x8b05b4c)
	int Accumulate(int& A, int& B); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)
};

