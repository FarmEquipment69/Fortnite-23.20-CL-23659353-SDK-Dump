// Class /Script/FortniteGame.BuildingTurretComponent_MOBA
// Size: 0xf8
class UBuildingTurretComponent_MOBA : public UBuildingTurretComponent
{
	struct FMOBATurretPrioritySetting TargetingPriority; // 0xe8 (0xc)
	unsigned char padding_f4[0x4]; // 0xf4 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTurretComponent_MOBA.OnAllyHarmed (Underlying native function: OnAllyHarmed 0x862d168)
	void OnAllyHarmed(class AActor*& InAllyActor, class AActor*& InHarmingActor); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

