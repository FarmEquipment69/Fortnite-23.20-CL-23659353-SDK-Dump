// Class /Script/FortniteGame.FortGiftBoxItemDefinition
// Size: 0x5b0
class UFortGiftBoxItemDefinition : public UFortAccountItemDefinition
{
	enum ESubGame RestrictToSubgame; // 0x420 (0x1)
	enum EFortGiftWrapType GiftWrapType; // 0x421 (0x1)
	unsigned char unreflected_422[0x6]; // 0x422 (0x6) 
	struct FText ViolatorText; // 0x428 (0x18)
	struct FText DefaultHeaderText; // 0x440 (0x18)
	struct FText SubHeaderText; // 0x458 (0x18)
	struct FText DefaultBodyText; // 0x470 (0x18)
	struct TWeakObjectPtr<class UObject> ItemDisplayAsset; // 0x488 (0x28)
	int SortPriority; // 0x4b0 (0x4)
	bool bReuseExistingBoxIfPossible; // 0x4b4 (0x1)
	bool bOverrideBackgroundMessage; // 0x4b5 (0x1)
	unsigned char unreflected_4b6[0x2]; // 0x4b6 (0x2) 
	struct FText BackgroundMessageText; // 0x4b8 (0x18)
	bool bShowInFTUE; // 0x4d0 (0x1)
	unsigned char unreflected_4d1[0x7]; // 0x4d1 (0x7) 
	struct TWeakObjectPtr<class UClass> GiftBoxPreMessageWidgetRef; // 0x4d8 (0x28)
	struct TWeakObjectPtr<class UClass> GiftBoxHeaderSubWidgetRef; // 0x500 (0x28)
	struct TWeakObjectPtr<class UClass> CustomLeftsideContent; // 0x528 (0x28)
	struct FGameplayTag CustomLeftsideContentTag; // 0x550 (0x4)
	struct FGameplayTag VaultWorldOverrideTag; // 0x554 (0x4)
	bool bShowVaultWorldPedistals; // 0x558 (0x1)
	unsigned char unreflected_559[0x3]; // 0x559 (0x3) 
	struct FFortGiftBoxItemData DefaultItemData; // 0x55c (0x4)
	struct TMap<struct FString, struct FFortGiftBoxItemData> ItemOverrideData; // 0x560 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortGiftBoxItemDefinition.TryLoadPreMessageWidgetClass (Underlying native function: TryLoadPreMessageWidgetClass 0x8a6622c)
	bool TryLoadPreMessageWidgetClass(class UClass*& OutWidgetClass); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGiftBoxItemDefinition.TryLoadHeaderSubWidgetClass (Underlying native function: TryLoadHeaderSubWidgetClass 0x8a66194)
	bool TryLoadHeaderSubWidgetClass(class UClass*& OutWidgetClass); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGiftBoxItemDefinition.HasPreMessageWidget (Underlying native function: HasPreMessageWidget 0x8a64ec0)
	bool HasPreMessageWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItemDefinition.HasHeaderSubWidget (Underlying native function: HasHeaderSubWidget 0x8a64d34)
	bool HasHeaderSubWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

