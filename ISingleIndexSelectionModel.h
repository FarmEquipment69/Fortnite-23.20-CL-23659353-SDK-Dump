// Class /Script/FortniteGame.SingleIndexSelectionModel
// Size: 0x28
class ISingleIndexSelectionModel : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.SingleIndexSelectionModel.TryMoveDelta (Underlying native function: TryMoveDelta 0x80ae0c4)
	enum EIndexNavigationResult TryMoveDelta(int& InDelta); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.SetSelectedIndex (Underlying native function: SetSelectedIndex 0x80ae044)
	void SetSelectedIndex(int& Value); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.RemoveOnSelectedIndexChangedDelegate (Underlying native function: RemoveOnSelectedIndexChangedDelegate 0x80adbc4)
	void RemoveOnSelectedIndexChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.RemoveOnNumItemsChangedDelegate (Underlying native function: RemoveOnNumItemsChangedDelegate 0x80adb20)
	void RemoveOnNumItemsChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.RemoveOnNavigationChangedDelegate (Underlying native function: RemoveOnNavigationChangedDelegate 0x80ada7c)
	void RemoveOnNavigationChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.GetSelectedIndex (Underlying native function: GetSelectedIndex 0x80ad7c4)
	int GetSelectedIndex(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.GetNumItems (Underlying native function: GetNumItems 0x80938bc)
	int GetNumItems(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.CanMoveDelta (Underlying native function: CanMoveDelta 0x80ad734)
	enum EIndexNavigationResult CanMoveDelta(int& InDelta); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.AddOnSelectedIndexChangedDelegate (Underlying native function: AddOnSelectedIndexChangedDelegate 0x80ad580)
	void AddOnSelectedIndexChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.AddOnNumItemsChangedDelegate (Underlying native function: AddOnNumItemsChangedDelegate 0x80ad4dc)
	void AddOnNumItemsChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.AddOnNavigationChangedDelegate (Underlying native function: AddOnNavigationChangedDelegate 0x80ad438)
	void AddOnNavigationChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)
};

