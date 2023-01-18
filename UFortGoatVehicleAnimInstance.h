// Class /Script/FortniteGame.FortGoatVehicleAnimInstance
// Size: 0x610
class UFortGoatVehicleAnimInstance : public UFortVehicleAnimInstance
{
	class AFortAthenaGoatVehicle* GolfCart; // 0x5f0 (0x8)
	float GolfCartSpeed; // 0x5f8 (0x4)
	bool bForwardSpeedIsNearlyZero; // 0x5fc (0x1)
	bool bForwardSpeedIsGreaterThanOne; // 0x5fd (0x1)
	bool bReverseSpeedIsGreaterThanOne; // 0x5fe (0x1)
	bool bSpeedIsGreaterThanFiveAndPlayerHitSpace; // 0x5ff (0x1)
	bool bIsBraking; // 0x600 (0x1)
	bool bIsEBraking; // 0x601 (0x1)
	bool bIsBoosting; // 0x602 (0x1)
	bool bIsPowerSliding; // 0x603 (0x1)
	bool bPlayerHitSpaceBar; // 0x604 (0x1)
	unsigned char padding_605[0xb]; // 0x605 (0xb)
};

