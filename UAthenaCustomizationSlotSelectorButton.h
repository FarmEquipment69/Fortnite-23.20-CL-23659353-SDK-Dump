// Class /Script/FortniteUI.AthenaCustomizationSlotSelectorButton
// Size: 0x1500
class UAthenaCustomizationSlotSelectorButton : public UCommonButtonLegacy
{
	struct FText CategoryDisplayName; // 0x1430 (0x18)
	struct FText CategoryDescription; // 0x1448 (0x18)
	enum EAthenaCustomizationCategory CustomizationType; // 0x1460 (0x1)
	unsigned char unreflected_1461[0x3]; // 0x1461 (0x3) 
	int SubslotIndex; // 0x1464 (0x4)
	enum EFortBangType BangType; // 0x1468 (0x1)
	bool bAllowUnownedItems; // 0x1469 (0x1)
	bool bOneItemPerSlot; // 0x146a (0x1)
	unsigned char unreflected_146b[0x5]; // 0x146b (0x5) 
	class UMaterialInstance* OverrideSlotImage; // 0x1470 (0x8)
	class UFortCosmeticItemCard* ItemWidget; // 0x1478 (0x8)
	struct FGameplayTag RequiredSlotGameplayTag; // 0x1480 (0x4)
	unsigned char unreflected_1484[0x4]; // 0x1484 (0x4) 
	struct TWeakObjectPtr<class UTexture2D> DefaultEmptyTexture; // 0x1488 (0x28)
	float CardWidth; // 0x14b0 (0x4)
	unsigned char unreflected_14b4[0x2c]; // 0x14b4 (0x2c) 
	class UFortItem* LocalCampaignHeroPartItem; // 0x14e0 (0x8)
	class UImage* ImageFavorite; // 0x14e8 (0x8)
	class UImage* ImageClassIcon; // 0x14f0 (0x8)
	class UFortBangWrapper_NUI* BangWrapper; // 0x14f8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.SetCustomizationType (Underlying native function: SetCustomizationType 0xa48de9c)
	void SetCustomizationType(enum EAthenaCustomizationCategory& NewType, int& InSubslotIndex, struct FGameplayTag& RequiredSlotTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.SetCardDefaultImageAndWidth (Underlying native function: SetCardDefaultImageAndWidth 0xa48dd18)
	void SetCardDefaultImageAndWidth(struct TWeakObjectPtr<class UTexture2D>& InDefaultImage, float& InWidth); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.OnUpdateExclusiveWarning (Has no native function)
	void OnUpdateExclusiveWarning(bool& bShouldWarn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.OnCustomizationSlotActiveStateChanged (Has no native function)
	void OnCustomizationSlotActiveStateChanged(bool& bInAttachableCosmeticAvailable, bool& bInActive); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.OnCardImageAndWidthChanged (Has no native function)
	void OnCardImageAndWidthChanged(struct TWeakObjectPtr<class UTexture2D>& Image, float& Width); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.OnArchivedStatusUpdated (Has no native function)
	void OnArchivedStatusUpdated(bool& bArchived); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.IsSlotFilled (Underlying native function: IsSlotFilled 0x1211090)
	bool IsSlotFilled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.HandleDifferentHeroLoadoutActivated (Underlying native function: HandleDifferentHeroLoadoutActivated 0xa48c2b4)
	void HandleDifferentHeroLoadoutActivated(class UFortMcpProfileCampaign*& Profile); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.GetCustomizationSlotActiveState (Underlying native function: GetCustomizationSlotActiveState 0x2536680)
	void GetCustomizationSlotActiveState(bool& bOutAttachableCosmeticAvailable, bool& bOutActive); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationSlotSelectorButton.GetCampaignHeroPartItem (Underlying native function: GetCampaignHeroPartItem 0xa48b80c)
	class UFortItem* GetCampaignHeroPartItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

