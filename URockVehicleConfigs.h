// Class /Script/RockVehicleRuntime.RockVehicleConfigs
// Size: 0xe98
class URockVehicleConfigs : public UFortPhysicsVehicleConfigs
{
	struct FRockVehicleAxleConfig FrontAxle; // 0x890 (0x34)
	struct FRockVehicleAxleConfig BackAxle; // 0x8c4 (0x34)
	struct FRockVehicleDriveConfig Drive; // 0x8f8 (0x510)
	struct FRockVehicleDemoConfig DemolitionConfiguration; // 0xe08 (0x28)
	struct FRockScalableFloat MaxLinearSpeed; // 0xe30 (0x30)
	struct FRockScalableFloat SupersonicSpeed; // 0xe60 (0x30)
	float MaxAngularSpeed; // 0xe90 (0x4)
	float SafeBuildingLandingDegrees; // 0xe94 (0x4)
};

