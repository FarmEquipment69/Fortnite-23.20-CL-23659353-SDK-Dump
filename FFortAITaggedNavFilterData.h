// ScriptStruct /Script/FortniteGame.FortAITaggedNavFilterData
// Size: 0x60
struct FFortAITaggedNavFilterData
{
	struct TArray<struct FFortAITaggedNavFilterOverrideEntry> OverrideTaggedNavFilters; // 0x0 (0x10)
	struct TMap<struct FGameplayTag, class UClass*> DefaultTaggedNavFilters; // 0x10 (0x50)
};

