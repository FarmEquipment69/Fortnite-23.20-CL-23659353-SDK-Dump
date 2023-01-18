// Class /Script/FortniteGame.FortPickupInteractOverrideComponent
// Size: 0xc0
class UFortPickupInteractOverrideComponent : public UGameFrameworkComponent
{
	int Priority; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class UClass* ContextOverrideWidget; // 0xa8 (0x8)
	class UClass* SecondContextOverrideWidget; // 0xb0 (0x8)
	bool bContextOverrideWidgetApplied; // 0xb8 (0x1)
	unsigned char padding_b9[0x7]; // 0xb9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPickupInteractOverrideComponent.GetPriority (Underlying native function: GetPriority 0x2dce28c)
	int GetPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

