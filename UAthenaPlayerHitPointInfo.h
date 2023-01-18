// Class /Script/FortniteUI.AthenaPlayerHitPointInfo
// Size: 0x2d8
class UAthenaPlayerHitPointInfo : public UFortHUDElementWidget
{
	bool bUseLargeFormat; // 0x2d0 (0x1)
	unsigned char padding_2d1[0x7]; // 0x2d1 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaPlayerHitPointInfo.HandleTetherChanged (Underlying native function: HandleTetherChanged 0xa4afe40)
	void HandleTetherChanged(bool& bTethered); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaPlayerHitPointInfo.HandleExitVehicle (Has no native function)
	void HandleExitVehicle(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerHitPointInfo.HandleEnterVehicle (Has no native function)
	void HandleEnterVehicle(); // (Event | Protected | BlueprintEvent)
};

