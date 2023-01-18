// Class /Script/FortniteGame.PlaylistUserOptionsFilter
// Size: 0x108
class UPlaylistUserOptionsFilter : public UObject
{
	class UPlaylistUserOptionBase* KnobThatWeAreBeingApplied; // 0x28 (0x8)
	struct TArray<struct FString> ValuesToIgnore; // 0x30 (0x10)
	struct FString OverridenOptionKey; // 0x40 (0x10)
	struct FText OverridenOptionDisplayName; // 0x50 (0x18)
	struct FText OverridenOptionDescription; // 0x68 (0x18)
	struct FString OverridenDefaultValue; // 0x80 (0x10)
	struct FGameplayTagQuery OverridenRequiredContextTagQuery; // 0x90 (0x48)
	bool bOverrideRequiredContextTagQuery; // 0xd8 (0x1)
	bool bInvertIgnoredValues; // 0xd9 (0x1)
	unsigned char unreflected_da[0x6]; // 0xda (0x6) 
	struct FGameplayTagContainer Tags; // 0xe0 (0x20)
	struct TEnumAsByte<UFortMatchmakingKnobsDataSource> MenuListType; // 0x100 (0x1)
	unsigned char padding_101[0x7]; // 0x101 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.PlaylistUserOptionsFilter.IsValueFiltered (Underlying native function: IsValueFiltered 0x899cde4)
	bool IsValueFiltered(struct FString& Value); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

