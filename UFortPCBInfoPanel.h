// Class /Script/FortniteUI.FortPCBInfoPanel
// Size: 0x2b8
class UFortPCBInfoPanel : public UUserWidget
{
	bool bDisplayPCBData; // 0x268 (0x1)
	unsigned char unreflected_269[0x7]; // 0x269 (0x7) 
	struct FText PCBHeader; // 0x270 (0x18)
	struct FText PCBDescription; // 0x288 (0x18)
	unsigned char padding_2a0[0x18]; // 0x2a0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortPCBInfoPanel.UpdateCMSData (Underlying native function: UpdateCMSData 0x71a6cc4)
	void UpdateCMSData(bool& bHasBenefitsActive); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortPCBInfoPanel.ShouldDisplayPCBData (Underlying native function: ShouldDisplayPCBData 0xa79ac4c)
	bool ShouldDisplayPCBData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPCBInfoPanel.GetPCBHeader (Underlying native function: GetPCBHeader 0x28b2e9c)
	struct FText GetPCBHeader(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPCBInfoPanel.GetPCBDescription (Underlying native function: GetPCBDescription 0x28b2f10)
	struct FText GetPCBDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPCBInfoPanel.CmsDataRead (Has no native function)
	void CmsDataRead(); // (Event | Public | BlueprintEvent)
};

