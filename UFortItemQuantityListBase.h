// Class /Script/FortniteUI.FortItemQuantityListBase
// Size: 0x320
class UFortItemQuantityListBase : public UCommonUserWidget
{
	enum EFortItemInspectionMode CurrentInspectMode; // 0x290 (0x1)
	bool bListenToInventoryChanges; // 0x291 (0x1)
	unsigned char unreflected_292[0x6]; // 0x292 (0x6) 
	class UClass* ListEntryWidgetType; // 0x298 (0x8)
	unsigned char unreflected_2a0[0x50]; // 0x2a0 (0x50) 
	struct TArray<class UObject*> ItemObjectsToKeepAlive; // 0x2f0 (0x10)
	unsigned char unreflected_300[0x10]; // 0x300 (0x10) 
	struct TArray<class UFortItemDefinition*> FortItemDefinitions; // 0x310 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortItemQuantityListBase.SetItemToCompareDefinitionsAndQuantities (Underlying native function: SetItemToCompareDefinitionsAndQuantities 0xa84a0fc)
	void SetItemToCompareDefinitionsAndQuantities(struct TArray<struct FFortItemQuantityPair>& ItemToCompareQuantityPairs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemQuantityListBase.SetItemInstancesAndQuantities (Underlying native function: SetItemInstancesAndQuantities 0xa84a008)
	void SetItemInstancesAndQuantities(struct TArray<struct FFortItemInstanceQuantityPair>& ItemQuantityPairs, bool& ShouldResetWidgets); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemQuantityListBase.SetItemInspectMode (Underlying native function: SetItemInspectMode 0xa849e7c)
	void SetItemInspectMode(enum EFortItemInspectionMode& InspectMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemQuantityListBase.SetItemDefinitionsAndQuantities (Underlying native function: SetItemDefinitionsAndQuantities 0xa849c60)
	void SetItemDefinitionsAndQuantities(struct TArray<struct FFortItemQuantityPair>& ItemQuantityPairs, bool& ShouldResetWidgets); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemQuantityListBase.OnItemInspectModeChanged (Has no native function)
	void OnItemInspectModeChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemQuantityListBase.IsEmptyList (Underlying native function: IsEmptyList 0xa84842c)
	bool IsEmptyList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemQuantityListBase.GetItemDefinitions (Underlying native function: GetItemDefinitions 0xa8475a4)
	struct TArray<class UFortItemDefinition*> GetItemDefinitions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemQuantityListBase.AddListEntry (Has no native function)
	void AddListEntry(class UFortItemQuantityListEntryBase*& ListEntry); // (Event | Protected | BlueprintEvent)
};

