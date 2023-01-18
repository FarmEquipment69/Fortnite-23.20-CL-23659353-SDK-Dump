// Class /Script/FortniteGame.FortAntelopeVehicleAnimInstance
// Size: 0x620
class UFortAntelopeVehicleAnimInstance : public UFortVehicleAnimInstance
{
	class AFortAthenaAntelopeVehicle* AntelopeVehicle; // 0x5f0 (0x8)
	float VehicleSpeed; // 0x5f8 (0x4)
	bool bForwardSpeedIsNearlyZero; // 0x5fc (0x1)
	bool bForwardSpeedIsGreaterThanOne; // 0x5fd (0x1)
	bool bReverseSpeedIsGreaterThanOne; // 0x5fe (0x1)
	bool bSpeedIsGreaterThanFiveAndPlayerHitSpace; // 0x5ff (0x1)
	bool bIsBraking; // 0x600 (0x1)
	bool bIsBoosting; // 0x601 (0x1)
	bool bPlayerHitSpaceBar; // 0x602 (0x1)
	unsigned char unreflected_603[0x1]; // 0x603 (0x1) 
	float ChargingValue; // 0x604 (0x4)
	float ChargingMax; // 0x608 (0x4)
	float ChargingMin; // 0x60c (0x4)
	float ChargingInterpSpeed; // 0x610 (0x4)
	unsigned char padding_614[0xc]; // 0x614 (0xc)
};

