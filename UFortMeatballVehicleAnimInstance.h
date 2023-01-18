// Class /Script/FortniteGame.FortMeatballVehicleAnimInstance
// Size: 0x6e0
class UFortMeatballVehicleAnimInstance : public UFortVehicleAnimInstance
{
	class AFortMeatballVehicle* Meatball; // 0x5f0 (0x8)
	float MeatballSpeed; // 0x5f8 (0x4)
	float SteeringAngle; // 0x5fc (0x4)
	float BoostCharge; // 0x600 (0x4)
	unsigned char unreflected_604[0x4]; // 0x604 (0x4) 
	struct FVector SeatOffset; // 0x608 (0x18)
	struct FRotator SeatRotation; // 0x620 (0x18)
	struct FRotator CurrentDriveJiggle; // 0x638 (0x18)
	struct FRotator SteeringRotator; // 0x650 (0x18)
	struct FRotator SpeedGuageRotator; // 0x668 (0x18)
	struct FRotator BoostPercentRotator; // 0x680 (0x18)
	struct FRotator RandomJiggleRotatorMotorTop; // 0x698 (0x18)
	struct FRotator RandomJiggleRotatorMotorBase; // 0x6b0 (0x18)
	bool bIsMovingForward; // 0x6c8 (0x1)
	bool bIsDrivingFast; // 0x6c9 (0x1)
	bool bIsBraking; // 0x6ca (0x1)
	bool bIsBoosting; // 0x6cb (0x1)
	bool bIsBoostReady; // 0x6cc (0x1)
	bool bIsBoostStarting; // 0x6cd (0x1)
	bool bIsBoostEnding; // 0x6ce (0x1)
	bool bIsRocketReady; // 0x6cf (0x1)
	bool bIsRocketOnCoolDown; // 0x6d0 (0x1)
	bool bIsSteeringLeft; // 0x6d1 (0x1)
	bool bIsSteeringRight; // 0x6d2 (0x1)
	unsigned char padding_6d3[0xd]; // 0x6d3 (0xd)
};

