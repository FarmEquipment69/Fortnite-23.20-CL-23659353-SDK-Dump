// Class /Script/FortniteGame.MinigameObjectiveDefinition
// Size: 0x188
class UMinigameObjectiveDefinition : public UObject
{
	enum EFortQuestObjectiveStatEvent StatEvent; // 0x28 (0x1)
	enum EFortQuestObjectiveItemEvent ItemEvent; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	struct TWeakObjectPtr<class UFortItemDefinition> ItemDefinition; // 0x30 (0x28)
	struct FGameplayTagQuery TargetTagsQuery; // 0x58 (0x48)
	struct FGameplayTagQuery SourceTagsQuery; // 0xa0 (0x48)
	struct FGameplayTagQuery ContextTagsQuery; // 0xe8 (0x48)
	struct FText Description; // 0x130 (0x18)
	struct FText HudShortDescription; // 0x148 (0x18)
	struct TWeakObjectPtr<class UTexture2D> HudIcon; // 0x160 (0x28)
};

