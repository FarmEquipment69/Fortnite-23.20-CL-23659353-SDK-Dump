// Class /Script/FortniteUI.FortPickerContext
// Size: 0x210
class UFortPickerContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnShowPicker; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnPickerConfirm; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnPickerCancel; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnPickerOptionMoved; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnPickerOptionChosen; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnPickerRefreshItems; // 0x80 (0x10)
	unsigned char unreflected_90[0x18]; // 0x90 (0x18) 
	struct TArray<struct FItemDefOptionData> CustomPickerMenuItems; // 0xa8 (0x10)
	struct TArray<struct FSquadQuickChatOptionData> SquadChatMenuItems; // 0xb8 (0x10)
	struct TMap<class UFortItemDefinition*, struct FTrackedTrapTimeAndCount*> TrackedTrapsMap; // 0xc8 (0x50)
	unsigned char unreflected_118[0x8]; // 0x118 (0x8) 
	class UFortPickerData* PickerData; // 0x120 (0x8)
	struct TArray<class UFortSchematicItem*> AccountTrapSchematics; // 0x128 (0x10)
	struct TArray<struct FFortPickerTemporaryWheel> AvailableWheels; // 0x138 (0x10)
	int CurrentWheelIndex; // 0x148 (0x4)
	unsigned char unreflected_14c[0xc]; // 0x14c (0xc) 
	struct TMap<class UObject*, int> ConsumableStackCount; // 0x158 (0x50)
	unsigned char unreflected_1a8[0x8]; // 0x1a8 (0x8) 
	struct TMap<struct FGameplayTag, struct FText> CategoryTitles; // 0x1b0 (0x50)
	struct TArray<struct FGameplayTag> CategoryTags; // 0x200 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortPickerContext.UseLeftThumbstick (Underlying native function: UseLeftThumbstick 0xa6435c0)
	bool UseLeftThumbstick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPickerContext.ShowRadialPickerMenu (Underlying native function: ShowRadialPickerMenu 0xa642e48)
	void ShowRadialPickerMenu(enum EFortPickerToDisplay& PickerType, int& WheelIndex, class UObject*& ContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.SetFortPickerData (Underlying native function: SetFortPickerData 0x2abfad4)
	void SetFortPickerData(class UFortPickerData*& Data); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.RestoreInputAxes (Underlying native function: RestoreInputAxes 0xa6419d4)
	void RestoreInputAxes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.PickerOptionAccepted (Underlying native function: PickerOptionAccepted 0xa641110)
	void PickerOptionAccepted(int& Option); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.PickerCanceled (Underlying native function: PickerCanceled 0xa6410fc)
	void PickerCanceled(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.LegacySwitchToAdjacentWheel (Underlying native function: LegacySwitchToAdjacentWheel 0xa640d94)
	void LegacySwitchToAdjacentWheel(int& SelectionDirection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.GetRadialPickerOptionItem (Underlying native function: GetRadialPickerOptionItem 0xa63e3e8)
	void GetRadialPickerOptionItem(int& Index, class UFortItem*& Item, bool& bOptionEnabled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPickerContext.GetRadialPickerOptionImageAndLabel (Underlying native function: GetRadialPickerOptionImageAndLabel 0xa63e12c)
	void GetRadialPickerOptionImageAndLabel(int& Index, struct FText& Label, struct FSlateBrush& Brush, struct TWeakObjectPtr<class UTexture2D>& Icon, bool& bOptionEnabled, bool& bIsLocked); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPickerContext.GetPickerWheelAdjacency (Underlying native function: GetPickerWheelAdjacency 0xa63dd68)
	void GetPickerWheelAdjacency(bool& bCanPageLeft, bool& bCanPageRight); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.GetNumPickerOptions (Underlying native function: GetNumPickerOptions 0xa63db04)
	int GetNumPickerOptions(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPickerContext.GetListPickerOption (Underlying native function: GetListPickerOption 0xa63d608)
	class UFortItem* GetListPickerOption(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPickerContext.GetCurrentWheelIndex (Underlying native function: GetCurrentWheelIndex 0xa63c184)
	int GetCurrentWheelIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPickerContext.GetCurrentPickerDisplayName (Underlying native function: GetCurrentPickerDisplayName 0xa63c014)
	struct FText GetCurrentPickerDisplayName(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.GetAdjacentPickerWheelInformation (Underlying native function: GetAdjacentPickerWheelInformation 0xa63abc0)
	void GetAdjacentPickerWheelInformation(int& Direction, struct FText& AdjacentTitle, bool& bCanPageThisDirection); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortPickerContext.DoesRadialCloseOnRelease (Underlying native function: DoesRadialCloseOnRelease 0xa639ad4)
	bool DoesRadialCloseOnRelease(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

