// Class /Script/FortniteGame.FortCampaignJackalVehicle
// Size: 0x1b40
class AFortCampaignJackalVehicle : public AFortAthenaJackalVehicle
{
	bool bVehicleLeftAnalogStrafing; // 0x1b30 (0x1)
	unsigned char unreflected_1b31[0x3]; // 0x1b31 (0x3) 
	float VehicleLeftAnalogStrafingMultiplier; // 0x1b34 (0x4)
	float MinSpeedToWallRun; // 0x1b38 (0x4)
	float AggroRangeOverride; // 0x1b3c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortCampaignJackalVehicle.HandleOnPlayerDamaged (Underlying native function: HandleOnPlayerDamaged 0x8487b00)
	void HandleOnPlayerDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)
};

