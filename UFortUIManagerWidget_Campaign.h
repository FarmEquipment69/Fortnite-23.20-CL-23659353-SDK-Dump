// Class /Script/FortniteUI.FortUIManagerWidget_Campaign
// Size: 0x3d0
class UFortUIManagerWidget_Campaign : public UFortUIManagerWidget_NUI
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	class UFortUINavigationManager* NavigationManager; // 0x3b8 (0x8)
	class UTalkingHead* TalkingHead; // 0x3c0 (0x8)
	unsigned char padding_3c8[0x8]; // 0x3c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortUIManagerWidget_Campaign.GetUINavigationManager (Underlying native function: GetUINavigationManager 0xa939270)
	static class UFortUINavigationManager* GetUINavigationManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIManagerWidget_Campaign.GetNavigationManager (Underlying native function: GetNavigationManager 0x845d9e4)
	class UFortUINavigationManager* GetNavigationManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIManagerWidget_Campaign.ForceInvalidUIStateUntilNextCinematic (Underlying native function: ForceInvalidUIStateUntilNextCinematic 0xa93916c)
	void ForceInvalidUIStateUntilNextCinematic(); // (Final | Native | Public | BlueprintCallable)
};

