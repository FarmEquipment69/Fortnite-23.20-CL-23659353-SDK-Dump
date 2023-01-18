// Class /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase
// Size: 0x4f8
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy
{
	class UFortItem* ItemToOptin; // 0x4e0 (0x8)
	unsigned char padding_4e8[0x10]; // 0x4e8 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.SetupItem (Underlying native function: SetupItem 0x759b080)
	void SetupItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.RequestClose (Underlying native function: RequestClose 0x7599c60)
	void RequestClose(bool& bCancelled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.OnSetupItem (Has no native function)
	void OnSetupItem(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.OnItemConversionComplete (Has no native function)
	void OnItemConversionComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.ConvertItemAlterations (Underlying native function: ConvertItemAlterations 0x7595854)
	void ConvertItemAlterations(); // (Final | Native | Protected | BlueprintCallable)
};

