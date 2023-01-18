// Class /Script/SaveTheWorldUI.FortAlterationOption
// Size: 0x1480
class UFortAlterationOption : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	struct FAlterationOption AlterationOption; // 0x1438 (0x38)
	unsigned char padding_1470[0x10]; // 0x1470 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortAlterationOption.Setup (Underlying native function: Setup 0x759af80)
	void Setup(struct FAlterationOption& InAlterationOption, enum EFortAlterationOptionType& InAlterationOptionType); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.OnSetup (Has no native function)
	void OnSetup(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetRequiredIngredients (Underlying native function: GetRequiredIngredients 0x7597610)
	struct TArray<struct FFortItemQuantityPair> GetRequiredIngredients(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetNextPipCount (Underlying native function: GetNextPipCount 0x759718c)
	float GetNextPipCount(float& MaxPipCount); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetCurrentPipCount (Underlying native function: GetCurrentPipCount 0x7596500)
	float GetCurrentPipCount(float& MaxPipCount); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationOptionType (Underlying native function: GetAlterationOptionType 0x7596374)
	enum EFortAlterationOptionType GetAlterationOptionType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationDefinition (Underlying native function: GetAlterationDefinition 0x75961fc)
	class UFortAlterationItemDefinition* GetAlterationDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

