// Class /Script/FortniteGame.PlaylistUserOptionBase
// Size: 0x1d8
class UPlaylistUserOptionBase : public UDataAsset
{
	unsigned char unreflected_30[0x18]; // 0x30 (0x18) 
	struct TWeakObjectPtr<class UClass> OptionScope; // 0x48 (0x28)
	struct FString OptionKey; // 0x70 (0x10)
	struct FString OverridePrimaryAssetName; // 0x80 (0x10)
	struct FText OptionDisplayName; // 0x90 (0x18)
	struct FText OptionDescription; // 0xa8 (0x18)
	struct FGameplayTagContainer Tags; // 0xc0 (0x20)
	struct FGameplayTagQuery RequiredContextTagQuery; // 0xe0 (0x48)
	struct FScalableFloat SharedSettingOverride; // 0x128 (0x28)
	bool bTestRequiredContextAgainstGameState; // 0x150 (0x1)
	unsigned char unreflected_151[0x7]; // 0x151 (0x7) 
	class UMaterial* OptionMaterial; // 0x158 (0x8)
	bool bCanHaveNoOverride; // 0x160 (0x1)
	bool bDefaultOverrideValue; // 0x161 (0x1)
	unsigned char unreflected_162[0x6]; // 0x162 (0x6) 
	struct FText NoOverrideDisplayName; // 0x168 (0x18)
	struct FGameplayTagContainer GrantedContextTagsWhenNoOverride; // 0x180 (0x20)
	struct TEnumAsByte<UFortMatchmakingKnobsDataSource> MenuListType; // 0x1a0 (0x1)
	unsigned char unreflected_1a1[0x7]; // 0x1a1 (0x7) 
	struct FDataTableRowHandle DestructiveAction; // 0x1a8 (0x10)
	bool bCheckDestructiveAction; // 0x1b8 (0x1)
	enum ECreativeOptionDestructiveActionOperator DestructiveActionOperator; // 0x1b9 (0x1)
	unsigned char unreflected_1ba[0x6]; // 0x1ba (0x6) 
	class UPlaylistUserOptionBase* OverridenBy; // 0x1c0 (0x8)
	int WeightOffset; // 0x1c8 (0x4)
	unsigned char unreflected_1cc[0x4]; // 0x1cc (0x4) 
	class UClass* EditWidget; // 0x1d0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.PlaylistUserOptionBase.GetOptionValueNameFromValue (Underlying native function: GetOptionValueNameFromValue 0x899c148)
	struct FString GetOptionValueNameFromValue(struct FString& OptionValue, bool& bAllowNoOverride, class UPlaylistUserOptionsFilter*& Filter); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlaylistUserOptionBase.GetOptionKey (Underlying native function: GetOptionKey 0x899c038)
	struct FString GetOptionKey(bool& bWithScoping, class UPlaylistUserOptionsFilter*& Filter); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

