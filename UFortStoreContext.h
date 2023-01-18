// Class /Script/FortniteUI.FortStoreContext
// Size: 0x128
class UFortStoreContext : public UBlueprintContextBase
{
	unsigned char unreflected_30[0x28]; // 0x30 (0x28) 
	struct FMulticastInlineDelegate OnStoreStateChange; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnStoreSkipOpenChanged; // 0x68 (0x10)
	struct TArray<struct FCardPackOffer> Offers; // 0x78 (0x10)
	struct TArray<struct FCard> CardList; // 0x88 (0x10)
	int CardIndex; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	struct FOpenedCardPack OpenedCardPack; // 0xa0 (0x10)
	enum EFortRarity LastCardRarity; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	struct TArray<struct FCard> PurchasedItemList; // 0xb8 (0x10)
	struct TArray<class UFortCardPackItem*> PurchasedCardPacks; // 0xc8 (0x10)
	unsigned char padding_d8[0x50]; // 0xd8 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortStoreContext.SetSkipOpening (Underlying native function: SetSkipOpening 0xa668b6c)
	void SetSkipOpening(bool& bSkipOpen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.MakeChoice (Underlying native function: MakeChoice 0xa66566c)
	bool MakeChoice(int& ChoiceIdx, class UFortAccountItemDefinition*& ChoiceItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.IsWaitingForMcp (Underlying native function: IsWaitingForMcp 0xa665654)
	bool IsWaitingForMcp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.IsOpeningDirectPack (Underlying native function: IsOpeningDirectPack 0xa6653fc)
	bool IsOpeningDirectPack(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.IsItemMissingFromCollectionBook (Underlying native function: IsItemMissingFromCollectionBook 0xa6651f8)
	bool IsItemMissingFromCollectionBook(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.GetStoreState (Underlying native function: GetStoreState 0x2470eac)
	enum EFortStoreState GetStoreState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.GetSkipOpening (Underlying native function: GetSkipOpening 0xa6625e0)
	bool GetSkipOpening(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.GetPackOpeningLimit (Underlying native function: GetPackOpeningLimit 0xa661f60)
	int GetPackOpeningLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.GetOwnedSurvivorCount (Underlying native function: GetOwnedSurvivorCount 0xa661b48)
	int GetOwnedSurvivorCount(class UFortItem*& SurvivorItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.GetOwnedItemCount (Underlying native function: GetOwnedItemCount 0xa661aa0)
	int GetOwnedItemCount(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.GetNumUnopenedCardPacksRemaining (Underlying native function: GetNumUnopenedCardPacksRemaining 0xa6619b8)
	int GetNumUnopenedCardPacksRemaining(class UFortCardPackItemDefinition*& PackType, bool& bCountChoicePacks); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.GetChoiceCards (Underlying native function: GetChoiceCards 0xa660264)
	struct TArray<struct FCard> GetChoiceCards(int& CardIdx); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.GetCard (Underlying native function: GetCard 0xa660158)
	bool GetCard(int& CardIdx, struct FCard& ResultOut); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.FireInteractionAnalyticsEvent (Underlying native function: FireInteractionAnalyticsEvent 0xa65f774)
	void FireInteractionAnalyticsEvent(struct FString& Interaction, struct FString& Details); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreContext.ExitSummary (Underlying native function: ExitSummary 0xa65f60c)
	bool ExitSummary(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.ExitCurrencyStore (Underlying native function: ExitCurrencyStore 0xa65f5c8)
	bool ExitCurrencyStore(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.EnterCurrencyStore (Underlying native function: EnterCurrencyStore 0xa65f5a4)
	bool EnterCurrencyStore(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.DoesItemSlotExistInCollectionBook (Underlying native function: DoesItemSlotExistInCollectionBook 0xa65f3cc)
	bool DoesItemSlotExistInCollectionBook(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreContext.ChoiceResultComplete (Underlying native function: ChoiceResultComplete 0xa65f134)
	bool ChoiceResultComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.CardPackOpeningComplete (Underlying native function: CardPackOpeningComplete 0xa65f08c)
	bool CardPackOpeningComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.CardPackDestroyComplete (Underlying native function: CardPackDestroyComplete 0xa65f068)
	bool CardPackDestroyComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.CardFrontRevealComplete (Underlying native function: CardFrontRevealComplete 0xa65f030)
	bool CardFrontRevealComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.CardFlipComplete (Underlying native function: CardFlipComplete 0xa65ef98)
	bool CardFlipComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.CardExitComplete (Underlying native function: CardExitComplete 0xa65ef60)
	bool CardExitComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.CardEntryComplete (Underlying native function: CardEntryComplete 0xa65ef28)
	bool CardEntryComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.CardBackRevealComplete (Underlying native function: CardBackRevealComplete 0xa65eef0)
	bool CardBackRevealComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreContext.CardAddedToSummaryComplete (Underlying native function: CardAddedToSummaryComplete 0xa65eecc)
	bool CardAddedToSummaryComplete(); // (Final | Native | Public | BlueprintCallable)
};

