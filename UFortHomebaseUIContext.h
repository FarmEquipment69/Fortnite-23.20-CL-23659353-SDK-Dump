// Class /Script/FortniteUI.FortHomebaseUIContext
// Size: 0x150
class UFortHomebaseUIContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnShouldAutoSlotSurvivorSquadsChanged; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnSquadSlotChanged; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnSurvivorSquadsAutoSlotted; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnNodePurchased; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnSlottedPrimaryHeroChanged; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnDifferentHeroLoadoutViewed; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnDifferentHeroLoadoutSlotFocused; // 0x90 (0x10)
	struct TWeakObjectPtr<class UDataTable> SquadIconDataTableAsset; // 0xa0 (0x28)
	unsigned char unreflected_c8[0x38]; // 0xc8 (0x38) 
	struct TMap<class UFortGadgetItemDefinition*, class UFortWorldItem*> GadgetDefinitionToInstanceMap; // 0x100 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortHomebaseUIContext.SetShouldAutoSlotSurvivorSquads (Underlying native function: SetShouldAutoSlotSurvivorSquads 0xa91a9e8)
	void SetShouldAutoSlotSurvivorSquads(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseUIContext.SetCurrentlyViewedHeroLoadout (Underlying native function: SetCurrentlyViewedHeroLoadout 0xa91a5c4)
	void SetCurrentlyViewedHeroLoadout(class UFortCampaignHeroLoadoutItem*& Loadout); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseUIContext.SetCurrentlyFocusedHeroLoadoutSlotName (Underlying native function: SetCurrentlyFocusedHeroLoadoutSlotName 0xa91a51c)
	void SetCurrentlyFocusedHeroLoadoutSlotName(struct FName& SlotName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortHomebaseUIContext.OnSurvivorSquadsAutoSlotted__DelegateSignature (Has no native function)
	void OnSurvivorSquadsAutoSlottedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortHomebaseUIContext.OnSquadSlotChanged__DelegateSignature (Has no native function)
	void OnSquadSlotChangedDelegateSignature(struct FName& SquadName, int& SlotIndex); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortHomebaseUIContext.OnSlottedPrimaryHeroChanged__DelegateSignature (Has no native function)
	void OnSlottedPrimaryHeroChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortHomebaseUIContext.OnShouldAutoSlotSurvivorSquadsChanged__DelegateSignature (Has no native function)
	void OnShouldAutoSlotSurvivorSquadsChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortHomebaseUIContext.OnNodesPurchased__DelegateSignature (Has no native function)
	void OnNodesPurchasedDelegateSignature(struct FName& NodeId); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortHomebaseUIContext.OnDifferentHeroLoadoutViewed__DelegateSignature (Has no native function)
	void OnDifferentHeroLoadoutViewedDelegateSignature(class UFortCampaignHeroLoadoutItem*& PreviousLoadout, class UFortCampaignHeroLoadoutItem*& NewLoadout); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortHomebaseUIContext.OnDifferentHeroLoadoutSlotFocused__DelegateSignature (Has no native function)
	void OnDifferentHeroLoadoutSlotFocusedDelegateSignature(struct FName& SlotName); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortHomebaseUIContext.IsHeroLoadoutSlotUnlocked (Underlying native function: IsHeroLoadoutSlotUnlocked 0xa918af4)
	bool IsHeroLoadoutSlotUnlocked(struct FName& SlotName, class UFortCampaignHeroLoadoutItem*& Loadout); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.IsAnySquadSlotUnlocked (Underlying native function: IsAnySquadSlotUnlocked 0xa918a54)
	bool IsAnySquadSlotUnlocked(struct FName& SquadId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.HandleDifferentHeroLoadoutActivated (Underlying native function: HandleDifferentHeroLoadoutActivated 0xa9185e4)
	void HandleDifferentHeroLoadoutActivated(class UFortMcpProfileCampaign*& Profile); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetWorkerSetBonusEffectModifiers (Underlying native function: GetWorkerSetBonusEffectModifiers 0xa917eb0)
	void GetWorkerSetBonusEffectModifiers(struct FGameplayTag& SetBonusTag, struct TArray<struct FFortAttributeModifierDisplayData>& OutModifiers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetUnlockingQuestDefinitionForSquadSlot (Underlying native function: GetUnlockingQuestDefinitionForSquadSlot 0xa917da0)
	class UFortQuestItemDefinition* GetUnlockingQuestDefinitionForSquadSlot(struct FName& SquadName, int& SlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetUnlockingQuestDefinitionForHeroLoadoutSlot (Underlying native function: GetUnlockingQuestDefinitionForHeroLoadoutSlot 0xa917c4c)
	class UFortQuestItemDefinition* GetUnlockingQuestDefinitionForHeroLoadoutSlot(struct FName& SlotName, class UFortCampaignHeroLoadoutItem*& Loadout); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetUnlockedGadgets (Underlying native function: GetUnlockedGadgets 0xa917ba0)
	bool GetUnlockedGadgets(struct TArray<class UFortItem*>& UnlockedGadgets); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetSquadIcon (Underlying native function: GetSquadIcon 0xa917814)
	struct FFortMultiSizeBrush GetSquadIcon(struct FName& SquadId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetSlottedPrimaryHero (Underlying native function: GetSlottedPrimaryHero 0xa91775c)
	class UFortHero* GetSlottedPrimaryHero(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetShouldAutoSlotSurvivorSquads (Underlying native function: GetShouldAutoSlotSurvivorSquads 0xa917738)
	bool GetShouldAutoSlotSurvivorSquads(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetItemsInSquad (Underlying native function: GetItemsInSquad 0xa916f90)
	struct TArray<class UFortItem*> GetItemsInSquad(struct FName& SquadId, bool& bRemoveEmptySquadSlots); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetItemInSquadSlot (Underlying native function: GetItemInSquadSlot 0xa916ed0)
	class UFortItem* GetItemInSquadSlot(struct FName& SquadName, int& SlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetCurrentlyViewedHeroLoadout (Underlying native function: GetCurrentlyViewedHeroLoadout 0xa916568)
	class UFortCampaignHeroLoadoutItem* GetCurrentlyViewedHeroLoadout(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetCurrentlyFocusedHeroLoadoutSlotName (Underlying native function: GetCurrentlyFocusedHeroLoadoutSlotName 0xa1e3344)
	struct FName GetCurrentlyFocusedHeroLoadoutSlotName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.GetCollectionBookData (Underlying native function: GetCollectionBookData 0xa9162a4)
	class UFortCollectionBookData* GetCollectionBookData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHomebaseUIContext.AutoSlotAllSurvivorSquads (Underlying native function: AutoSlotAllSurvivorSquads 0xa915c10)
	void AutoSlotAllSurvivorSquads(); // (Final | Native | Public | BlueprintCallable)
};

