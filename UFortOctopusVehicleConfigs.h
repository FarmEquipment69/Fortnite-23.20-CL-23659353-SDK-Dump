// Class /Script/FortniteGame.FortOctopusVehicleConfigs
// Size: 0x8e0
class UFortOctopusVehicleConfigs : public UFortPhysicsVehicleConfigs
{
	float MinBuildingDamage; // 0x890 (0x4)
	float MaxBuildingDamage; // 0x894 (0x4)
	float MinBuildingDamageSpeedKmh; // 0x898 (0x4)
	float MaxBuildingDamageSpeedKmh; // 0x89c (0x4)
	float MinBuildingDamageWhileBoosting; // 0x8a0 (0x4)
	float MaxBuildingDamageWhileBoosting; // 0x8a4 (0x4)
	float MinBuildingDamageSpeedWhileBoostingKmh; // 0x8a8 (0x4)
	float MaxBuildingDamageSpeedWhileBoostingKmh; // 0x8ac (0x4)
	struct FName TowhookMuzzleSocketName; // 0x8b0 (0x4)
	float TowhookNetUpdateTime; // 0x8b4 (0x4)
	float WaterTraction; // 0x8b8 (0x4)
	float BoostBounceRechargeFalloff; // 0x8bc (0x4)
	float MinSpeedToLaunchPlayersKmh; // 0x8c0 (0x4)
	float MinYankLaunchForce; // 0x8c4 (0x4)
	float MaxYankLaunchForce; // 0x8c8 (0x4)
	float MinYankLaunchVelocityKmh; // 0x8cc (0x4)
	float MaxYankLaunchVelocityKmh; // 0x8d0 (0x4)
	int MaxSignificanceBudgetForFX; // 0x8d4 (0x4)
	int MaxSignificanceBudgetForAudio; // 0x8d8 (0x4)
	unsigned char bDisableFXWhenInsignificant; // 0x8dc (0x1)
	unsigned char bDisableAudioTickWhenInsignificant; // 0x8dc (0x1)
	unsigned char bGlassIsPenetrable; // 0x8dc (0x1)
	unsigned char padding_8dd[0x3]; // 0x8dd (0x3)
};

