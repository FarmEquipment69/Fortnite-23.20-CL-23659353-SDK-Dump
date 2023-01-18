// Class /Script/FortniteUI.FortAlterationWidget
// Size: 0x2a0
class UFortAlterationWidget : public UCommonUserWidget
{
	float MaxPipCount; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UFortAlterationInfo* AlterationInfo; // 0x298 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAlterationWidget.Setup (Underlying native function: Setup 0xa91aff8)
	void Setup(class UFortAlterationInfo*& InAlterationInfo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAlterationWidget.OnSetup (Has no native function)
	void OnSetup(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAlterationWidget.GetAlterationInfo (Underlying native function: GetAlterationInfo 0x9b313c8)
	class UFortAlterationInfo* GetAlterationInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

