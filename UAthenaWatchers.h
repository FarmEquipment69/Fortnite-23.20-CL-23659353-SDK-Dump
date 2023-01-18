// Class /Script/FortniteUI.AthenaWatchers
// Size: 0x2e0
class UAthenaWatchers : public UFortHUDElementWidget
{
	class UTextBlock* TextWatchers; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x8]; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaWatchers.SpectatorsEnded (Has no native function)
	void SpectatorsEnded(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaWatchers.SpectatorsBegan (Has no native function)
	void SpectatorsBegan(bool& bBigGroup); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaWatchers.SpectatorsAdded (Has no native function)
	void SpectatorsAdded(bool& bBigGroup); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaWatchers.SpectatorRemoved (Has no native function)
	void SpectatorRemoved(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaWatchers.SpectatorCountChanged_BP (Has no native function)
	void SpectatorCountChangedBP(int& NewCount); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaWatchers.HandleSpectatorCountChanged (Underlying native function: HandleSpectatorCountChanged 0xa4e1f7c)
	void HandleSpectatorCountChanged(int& NewSpectatorCount); // (Final | Native | Protected)
};

