// Class /Script/FortniteUI.SpatialFactionScreen
// Size: 0x468
class USpatialFactionScreen : public UAthenaSpatialScreen
{
	class USpatialFactionChoiceScreen* ScreenFactionChoice; // 0x438 (0x8)
	class USpatialFactionProgressScreen* ScreenFactionProgress; // 0x440 (0x8)
	unsigned char padding_448[0x20]; // 0x448 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.SpatialFactionScreen.SetAboutScreenVisited (Underlying native function: SetAboutScreenVisited 0xa7c39d8)
	void SetAboutScreenVisited(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.SpatialFactionScreen.OnFactionChoiceRequired (Has no native function)
	void OnFactionChoiceRequired(); // (Event | Protected | BlueprintEvent)
};

