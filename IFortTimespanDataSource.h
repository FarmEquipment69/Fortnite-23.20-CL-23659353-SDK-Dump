// Class /Script/FortniteUI.FortTimespanDataSource
// Size: 0x28
class IFortTimespanDataSource : public IInterface
{

	/* Functions */

	// Function /Script/FortniteUI.FortTimespanDataSource.RemoveOnChangeDelegate (Underlying native function: RemoveOnChangeDelegate 0xa45294c)
	void RemoveOnChangeDelegate(struct FDelegate& InDelegate); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTimespanDataSource.GetValue (Underlying native function: GetValue 0xa452920)
	struct FTimespan* GetValue(); // (Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTimespanDataSource.AddOnChangeDelegate (Underlying native function: AddOnChangeDelegate 0xa45287c)
	void AddOnChangeDelegate(struct FDelegate& InDelegate); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

