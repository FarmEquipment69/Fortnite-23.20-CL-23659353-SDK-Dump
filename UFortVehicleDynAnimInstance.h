// Class /Script/FortniteGame.FortVehicleDynAnimInstance
// Size: 0x380
class UFortVehicleDynAnimInstance : public UAnimInstance
{
	class AFortAthenaSKVehicle* Vehicle; // 0x348 (0x8)
	class AFortAthenaAntelopeVehicle* Quad; // 0x350 (0x8)
	struct FRotator CurrentDriveJiggle; // 0x358 (0x18)
	float Speed; // 0x370 (0x4)
	float SpeedABS; // 0x374 (0x4)
	bool bIsBoosting; // 0x378 (0x1)
	unsigned char padding_379[0x7]; // 0x379 (0x7)
};

