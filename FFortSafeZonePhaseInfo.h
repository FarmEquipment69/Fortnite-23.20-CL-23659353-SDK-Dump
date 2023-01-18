// ScriptStruct /Script/FortniteGame.FortSafeZonePhaseInfo
// Size: 0x48
struct FFortSafeZonePhaseInfo
{
	struct FVector Center; // 0x0 (0x18)
	float Radius; // 0x18 (0x4)
	float WaitTime; // 0x1c (0x4)
	float ShrinkTime; // 0x20 (0x4)
	struct FFortSafeZoneDamageInfo* DamageInfo; // 0x24 (0x8)
	int PlayerCap; // 0x2c (0x4)
	float TimeBetweenStormCapDamage; // 0x30 (0x4)
	float StormCapDamagePerTick; // 0x34 (0x4)
	float StormCampingIncrementTimeAfterDelay; // 0x38 (0x4)
	float StormCampingInitialDelayTime; // 0x3c (0x4)
	int MegaStormGridCellThickness; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

