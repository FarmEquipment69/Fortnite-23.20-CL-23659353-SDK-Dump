// Class /Script/FortniteGame.FortTreadVehicleConfigs
// Size: 0x960
class UFortTreadVehicleConfigs : public UFortPhysicsVehicleConfigs
{
	float TopSpeedKmh; // 0x890 (0x4)
	float TopReverseSpeedKmh; // 0x894 (0x4)
	float BoostTopSpeedScale; // 0x898 (0x4)
	float BoostTurnScale; // 0x89c (0x4)
	float RampUpTime; // 0x8a0 (0x4)
	float RampDownTime; // 0x8a4 (0x4)
	float TrackFrictionCoefficient; // 0x8a8 (0x4)
	float TrackStiffness; // 0x8ac (0x4)
	float TrackLateralStiffness; // 0x8b0 (0x4)
	float DisabledTreadPowerScale; // 0x8b4 (0x4)
	float DisabledTreadTopSpeedScale; // 0x8b8 (0x4)
	float DisabledTreadFloorFriction; // 0x8bc (0x4)
	struct FRollerSetups RollerSetups; // 0x8c0 (0x70)
	float PowerSpread; // 0x930 (0x4)
	float TurnPower; // 0x934 (0x4)
	float ForwardBias; // 0x938 (0x4)
	float ReverseThreshold; // 0x93c (0x4)
	bool bCanAlwaysSwitchFromReverseToForward; // 0x940 (0x1)
	unsigned char unreflected_941[0x3]; // 0x941 (0x3) 
	float SuspensionPadding; // 0x944 (0x4)
	float DisabledTreadSuspensionScale; // 0x948 (0x4)
	float RollerDamping; // 0x94c (0x4)
	float TractionScaleInWater; // 0x950 (0x4)
	float CompressionEventVelocity; // 0x954 (0x4)
	float CompressionEventFrequency; // 0x958 (0x4)
	unsigned char padding_95c[0x4]; // 0x95c (0x4)
};

