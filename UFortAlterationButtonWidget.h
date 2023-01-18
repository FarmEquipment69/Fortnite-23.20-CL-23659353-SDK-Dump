// Class /Script/FortniteUI.FortAlterationButtonWidget
// Size: 0x1440
class UFortAlterationButtonWidget : public UCommonButtonLegacy
{
	class UFortAlterationInfo* AlterationInfo; // 0x1430 (0x8)
	unsigned char padding_1438[0x8]; // 0x1438 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAlterationButtonWidget.Setup (Underlying native function: Setup 0xa91af54)
	void Setup(class UFortAlterationInfo*& InAlterationInfo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAlterationButtonWidget.OnSetup (Has no native function)
	void OnSetup(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationButtonWidget.GetAlterationInfo (Underlying native function: GetAlterationInfo 0xa915ec8)
	class UFortAlterationInfo* GetAlterationInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

