// Class /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector
// Size: 0x2c8
class ADynamicAthenaHUDDirector : public ADynamicUIDirectorBase
{
	class UDynamicUIScene* VehicleHUDScene; // 0x2b8 (0x8)
	class UDynamicUIScene* CreativeQuickbarScene; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleExitingVehicle (Underlying native function: HandleExitingVehicle 0x7421c80)
	void HandleExitingVehicle(); // (Final | Native | Private)

	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleEnteringVehicle (Underlying native function: HandleEnteringVehicle 0x7421c6c)
	void HandleEnteringVehicle(); // (Final | Native | Private)

	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleCreativeQuickbarEquippedChanged (Underlying native function: HandleCreativeQuickbarEquippedChanged 0x7421bec)
	void HandleCreativeQuickbarEquippedChanged(bool& bIsQuickbarEquipped); // (Final | Native | Private)
};

