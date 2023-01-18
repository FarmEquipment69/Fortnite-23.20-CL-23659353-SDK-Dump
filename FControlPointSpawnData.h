// ScriptStruct /Script/FortniteGame.ControlPointSpawnData
// Size: 0x238
struct FControlPointSpawnData : FFortPieSliceSpawnData
{
	struct FScalableFloat SpawnDelayTime; // 0xa0 (0x28)
	struct FScalableFloat SafeZonePhaseWhenToSpawn; // 0xc8 (0x28)
	struct FScalableFloat SafeZonePhaseWhereToSpawn; // 0xf0 (0x28)
	struct FScalableFloat EnableDelayTime; // 0x118 (0x28)
	struct FScalableFloat EnableInSafeZonePhase; // 0x140 (0x28)
	struct FScalableFloat DisableDelayTime; // 0x168 (0x28)
	struct FScalableFloat DisableInSafeZonePhase; // 0x190 (0x28)
	struct FScalableFloat PointsEarnedPerSecond; // 0x1b8 (0x28)
	struct FScalableFloat BonusPointsEarnedPerSecond; // 0x1e0 (0x28)
	struct FScalableFloat bIgnoreForOrderMessaging; // 0x208 (0x28)
	int IconMaterialIndex; // 0x230 (0x4)
	bool bAlwaysInPlay; // 0x234 (0x1)
	unsigned char padding_235[0x3]; // 0x235 (0x3)
};

