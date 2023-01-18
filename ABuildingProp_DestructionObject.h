// Class /Script/FortniteGame.BuildingProp_DestructionObject
// Size: 0xf40
class ABuildingProp_DestructionObject : public ABuildingProp
{
	struct FMulticastInlineDelegate OnBuildingAttributeSetHealthChangedDelegate; // 0xee8 (0x10)
	struct TArray<struct FText> ObjectiveNameTexts; // 0xef8 (0x10)
	struct FText ObjectiveTextTemplate; // 0xf08 (0x18)
	struct FText ObjectiveText; // 0xf20 (0x18)
	unsigned char padding_f38[0x8]; // 0xf38 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_DestructionObject.OnBuildingAttributeSetHealthChanged (Underlying native function: OnBuildingAttributeSetHealthChanged 0x860b840)
	void OnBuildingAttributeSetHealthChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingProp_DestructionObject.GetObjectiveNameText (Underlying native function: GetObjectiveNameText 0x86092a8)
	struct FText GetObjectiveNameText(int& ObjectiveNameIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

