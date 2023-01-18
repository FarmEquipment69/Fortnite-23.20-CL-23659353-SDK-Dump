// Class /Script/CraftingRuntime.CraftingObjectComponent
// Size: 0x528
class UCraftingObjectComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate CraftingObjectStateChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnFormulaCraftableChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnCraftingSuccess; // 0xc0 (0x10)
	struct FCraftingObjectRepStateData* CraftingObjectRepStateData; // 0xd0 (0x8)
	struct FName CraftingFormulaRow; // 0xd8 (0x4)
	int NumToCraft; // 0xdc (0x4)
	struct TWeakObjectPtr<class AFortPlayerController> CraftingInstigator; // 0xe0 (0x8)
	struct TArray<struct FFortItemEntry> AllOfTheIngredientItems; // 0xe8 (0x10)
	struct TArray<int> NonConsumedIngredientItemIndices; // 0xf8 (0x10)
	struct FString LastIngredientStringForAnalytics; // 0x108 (0x10)
	struct FString LastFormulaStringForAnalytics; // 0x118 (0x10)
	struct FString LastResultsStringForAnalytics; // 0x128 (0x10)
	struct TArray<struct FItemAndCount> CraftingResults; // 0x138 (0x10)
	struct FGameplayAbilitySpecHandle WhileCraftingAbilitySpecHandle; // 0x148 (0x4)
	struct FGameplayAbilitySpecHandle OwnerCraftingAbilitySpecHandle; // 0x14c (0x4)
	struct FGameplayTag CraftingObjectTag; // 0x150 (0x4)
	unsigned char unreflected_154[0x4]; // 0x154 (0x4) 
	struct FGameplayTagContainer CraftingObjectTags; // 0x158 (0x20)
	struct FScalableFloat CraftingTimeLength; // 0x178 (0x28)
	struct FScalableFloat ReadyTimeLength; // 0x1a0 (0x28)
	struct FScalableFloat OverCraftingTimeLength; // 0x1c8 (0x28)
	struct FScalableFloat ResettingTimeLength; // 0x1f0 (0x28)
	struct FName OverCraftingLootTierKey; // 0x218 (0x4)
	unsigned char bTakeItemsAtCraftingStart; // 0x21c (0x1)
	unsigned char bGiveIngredientsToCraftingObject; // 0x21c (0x1)
	unsigned char bGiveIngredientsToInstigator; // 0x21c (0x1)
	unsigned char unreflected_21d[0x3]; // 0x21d (0x3) 
	struct FVector IngredientSpawnOffset; // 0x220 (0x18)
	unsigned char bGiveToCraftingObject; // 0x238 (0x1)
	unsigned char bGiveResultToInstigator; // 0x238 (0x1)
	unsigned char unreflected_239[0x7]; // 0x239 (0x7) 
	struct TWeakObjectPtr<class UClass> OwnerCraftingAbility; // 0x240 (0x28)
	struct FGameplayTagContainer CraftingFailedTags; // 0x268 (0x20)
	class AFortPickup* PendingPickupCraftingItem; // 0x288 (0x8)
	struct FName PendingPickupCraftingFormula; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	struct FFortItemEntry PendingPickupCraftingItemEntry; // 0x298 (0x1a0)
	int PendingPickupHeldCount; // 0x438 (0x4)
	unsigned char unreflected_43c[0xe4]; // 0x43c (0xe4) 
	bool FreeCraftingEnabled; // 0x520 (0x1)
	unsigned char padding_521[0x7]; // 0x521 (0x7)

	/* Functions */

	// Function /Script/CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData (Underlying native function: OnRep_CraftingObjectRepStateData 0x72faabc)
	void OnRepCraftingObjectRepStateData(); // (Final | Native | Private)

	// Function /Script/CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp (Underlying native function: HandlePickupCraftingItemPickedUp 0x72fa4f8)
	void HandlePickupCraftingItemPickedUp(class AFortPickup*& PickUp, class AFortPawn*& InteractingPawn, class UFortWorldItemDefinition*& WorldItemDefinition, struct FVector& PickupLocation); // (Final | Native | Private | HasDefaults)

	// DelegateFunction /Script/CraftingRuntime.CraftingObjectComponent.CraftingObjectStateChanged__DelegateSignature (Has no native function)
	void CraftingObjectStateChangedDelegateSignature(enum ECraftingObjectState& CraftingState, float& CraftingStateStartTime, float& CraftingStateDuration); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature (Has no native function)
	void CraftingObjectOnFormulaCraftableChangedDelegateSignature(struct FName& FormulaRowName, bool& bIsCraftable); // (MulticastDelegate | Public | Delegate | HasOutParms)
};

