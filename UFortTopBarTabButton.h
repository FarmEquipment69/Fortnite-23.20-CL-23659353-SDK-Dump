// Class /Script/FortniteUI.FortTopBarTabButton
// Size: 0x1470
class UFortTopBarTabButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x9]; // 0x1430 (0x9) 
	bool bUseAlternateLabelStyle; // 0x1439 (0x1)
	bool bAlwaysShowTextLabel; // 0x143a (0x1)
	unsigned char padding_143b[0x35]; // 0x143b (0x35)

	/* Functions */

	// Function /Script/FortniteUI.FortTopBarTabButton.SetTabLabelInfo_Implementation (Underlying native function: SetTabLabelInfo_Implementation 0xa7c3e7c)
	void SetTabLabelInfoImplementation(struct FFortTabButtonLabelInfo& TabLabelInfo); // (Final | 0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortTopBarTabButton.IsAlternateLabelStyleUsed (Underlying native function: IsAlternateLabelStyleUsed 0xa7c37b8)
	bool IsAlternateLabelStyleUsed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

