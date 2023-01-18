// Class /Script/FortniteUI.FortResourceWidget
// Size: 0x2c8
class UFortResourceWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UFortLazyImage* LazyImageResourceIcon; // 0x298 (0x8)
	class UCommonNumericTextBlock* NumericTextResourceCount; // 0x2a0 (0x8)
	class UCommonNumericTextBlock* NumericTextResourceCost; // 0x2a8 (0x8)
	class UFortResourceItemDefinition* ItemDefinition; // 0x2b0 (0x8)
	struct TEnumAsByte<EFortResourceType> ResourceType; // 0x2b8 (0x1)
	bool bCanUseShorthandCount; // 0x2b9 (0x1)
	unsigned char padding_2ba[0xe]; // 0x2ba (0xe)

	/* Functions */

	// Function /Script/FortniteUI.FortResourceWidget.SetResourceCost (Underlying native function: SetResourceCost 0xa7c3c58)
	void SetResourceCost(int& ResourceCost); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResourceWidget.OnResourceCountUpdated (Has no native function)
	void OnResourceCountUpdated(int& CurrentCount, int& MaxCount, bool& bHasInfiniteResources); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortResourceWidget.OnResourceCostSet (Has no native function)
	void OnResourceCostSet(int& ResourceCount, int& ResourceCost, bool& bHasInfiniteResources); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortResourceWidget.OnIsActiveResourceChanged (Has no native function)
	void OnIsActiveResourceChanged(bool& bIsActiveResource); // (Event | Protected | BlueprintEvent)
};

