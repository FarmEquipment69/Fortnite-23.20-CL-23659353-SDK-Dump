// Class /Script/FortniteGame.FortAthenaSKMotorVehicle
// Size: 0x1a40
class AFortAthenaSKMotorVehicle : public AFortAthenaSKVehicle
{
	float AntiGravityScalerWhenEmpty; // 0x19c8 (0x4)
	float SpringCompressionRefireTime; // 0x19cc (0x4)
	float MovementAmountParam; // 0x19d0 (0x4)
	float CurrentMaxSpringCompression; // 0x19d4 (0x4)
	float SparksLeftParam; // 0x19d8 (0x4)
	float SparksRightParam; // 0x19dc (0x4)
	float LeftSlowDustParam; // 0x19e0 (0x4)
	float RightSlowDustParam; // 0x19e4 (0x4)
	float LeftFastDustParam; // 0x19e8 (0x4)
	float RightFastDustParam; // 0x19ec (0x4)
	float FastDustParam; // 0x19f0 (0x4)
	float CoastingMovementParam; // 0x19f4 (0x4)
	float SkiddingAmountParam; // 0x19f8 (0x4)
	float InAirParam; // 0x19fc (0x4)
	float ScrapingAmountParam; // 0x1a00 (0x4)
	float AudioWindParam; // 0x1a04 (0x4)
	unsigned char padding_1a08[0x38]; // 0x1a08 (0x38)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaSKMotorVehicle.IsStandingInPlace (Underlying native function: IsStandingInPlace 0x82e3d6c)
	bool IsStandingInPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKMotorVehicle.HasTraction (Underlying native function: HasTraction 0x82e3a0c)
	bool HasTraction(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaSKMotorVehicle.GetStandingInPlaceSteeringAngle (Underlying native function: GetStandingInPlaceSteeringAngle 0x82e3880)
	float GetStandingInPlaceSteeringAngle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

