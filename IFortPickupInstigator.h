// Class /Script/FortniteGame.FortPickupInstigator
// Size: 0x28
class IFortPickupInstigator : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortPickupInstigator.SetTrackedIndex (Underlying native function: SetTrackedIndex 0x80a6520)
	void SetTrackedIndex(int& TrackedIndex, int& ItemIndex); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupInstigator.GetTrackedItemCount (Underlying native function: GetTrackedItemCount 0x80a5e0c)
	int GetTrackedItemCount(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetTrackedIndices (Underlying native function: GetTrackedIndices 0x80a5d98)
	struct TArray<int> GetTrackedIndices(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetTrackedIndex (Underlying native function: GetTrackedIndex 0x80a5d08)
	int GetTrackedIndex(int& ItemIndex); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetPickupEventHandler (Underlying native function: GetPickupEventHandler 0x80a5cd8)
	struct TScriptInterface<class IFortPickupEventHandler> GetPickupEventHandler(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetItemTemplateData (Underlying native function: GetItemTemplateData 0x80a5bb0)
	bool GetItemTemplateData(struct FCreativeItemTemplateData& TemplateData, int& ItemIndex); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetInstigatorData (Underlying native function: GetInstigatorData 0x80a5abc)
	bool GetInstigatorData(struct FPickupInstigatorData& InstigatorData, int& ItemIndex); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

