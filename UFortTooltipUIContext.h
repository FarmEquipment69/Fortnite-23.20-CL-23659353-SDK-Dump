// Class /Script/FortniteUI.FortTooltipUIContext
// Size: 0x30
class UFortTooltipUIContext : public UBlueprintContextBase
{

	/* Functions */

	// Function /Script/FortniteUI.FortTooltipUIContext.HasTooltipStats (Underlying native function: HasTooltipStats 0xa664df0)
	bool HasTooltipStats(class UObject*& Object); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetUpgradeStats (Underlying native function: GetUpgradeStats 0xa6640f8)
	struct TArray<struct FFortDisplayAttribute> GetUpgradeStats(class UObject*& Object, class UFortTooltipContext*& TooltipContext, int& UpgradeLevelDelta, bool& bUseSummaryTooltip); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetUIDataForTag (Underlying native function: GetUIDataForTag 0xa663ff4)
	bool GetUIDataForTag(struct FGameplayTag& tag, struct FFortTagUIData& OutData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetTooltipStats (Underlying native function: GetTooltipStats 0xa663b78)
	struct TArray<struct FFortDisplayAttribute> GetTooltipStats(class UObject*& Object, class UFortTooltipContext*& TooltipContext, bool& bSummaryStats); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetTooltipStat (Underlying native function: GetTooltipStat 0xa6632d4)
	bool GetTooltipStat(class UObject*& Object, class UFortTooltipContext*& TooltipContext, struct FGameplayTag& Token, struct FFortDisplayAttribute& OutDisplayAttribute, bool& bUseSummaryTooltip); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetTooltipLoadingWrapper (Underlying native function: GetTooltipLoadingWrapper 0xa66320c)
	class UFortTooltipLoadingWrapper* GetTooltipLoadingWrapper(class UObject*& Object, bool& bSummaryDescription); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetTooltipAttributes (Underlying native function: GetTooltipAttributes 0xa66310c)
	struct TArray<struct FGameplayAttribute> GetTooltipAttributes(class UObject*& Object); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetDisplayNameAndMultiBrushForTag (Underlying native function: GetDisplayNameAndMultiBrushForTag 0xa6609f4)
	bool GetDisplayNameAndMultiBrushForTag(struct FGameplayTag& tag, struct FText& OutDisplayName, struct FFortMultiSizeBrush& OutBrush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetDescription (Underlying native function: GetDescription 0xa66080c)
	bool GetDescription(class UObject*& Object, class UFortTooltipContext*& TooltipContext, struct TArray<struct FText>& OutDescription, bool& bSummaryDescription); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetComparisonStats (Underlying native function: GetComparisonStats 0xa660610)
	struct TArray<struct FFortDisplayAttribute> GetComparisonStats(class UObject*& Object, class UObject*& ComparisonObject, class UFortTooltipContext*& TooltipContext, bool& bUseSummaryTooltip); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortTooltipUIContext.GetCombinedDescription (Underlying native function: GetCombinedDescription 0xa660448)
	bool GetCombinedDescription(class UObject*& Object, class UFortTooltipContext*& TooltipContext, struct FText& OutDescription, bool& bSummaryDescription); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)
};

