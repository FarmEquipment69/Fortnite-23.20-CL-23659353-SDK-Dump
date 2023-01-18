// Class /Script/FortniteUI.FortRadialMenu
// Size: 0x340
class UFortRadialMenu : public UCommonUserWidget
{
	class UClass* EntryWidgetClass; // 0x290 (0x8)
	unsigned char unreflected_298[0x80]; // 0x298 (0x80) 
	float JoystickDeadZone; // 0x318 (0x4)
	float MouseDeadZoneRadiusPercentage; // 0x31c (0x4)
	float JoystickMaximumMagnitude; // 0x320 (0x4)
	struct FRadialBoxSettings RadialBoxSettings; // 0x324 (0x10)
	enum EFortRadialControllingStick ControllingStick; // 0x334 (0x1)
	bool bAllowEmptySelection; // 0x335 (0x1)
	bool bAllowFullMovement; // 0x336 (0x1)
	unsigned char unreflected_337[0x1]; // 0x337 (0x1) 
	class UDynamicEntryBox* EntryBoxContextRadial; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortRadialMenu.GetNumEntries (Underlying native function: GetNumEntries 0xa88d3e4)
	int GetNumEntries(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortRadialMenu.GetDegreeOffset (Underlying native function: GetDegreeOffset 0xa88d2f8)
	float GetDegreeOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortRadialMenu.GetDegreeIncrements (Underlying native function: GetDegreeIncrements 0x75bf154)
	float GetDegreeIncrements(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortRadialMenu.GetAngleForIndex (Underlying native function: GetAngleForIndex 0xa88d258)
	float GetAngleForIndex(int& Index); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

