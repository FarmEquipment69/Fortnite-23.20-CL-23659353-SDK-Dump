// Class /Script/FortniteGame.FortPhysicsObjectCollisionEffectsData
// Size: 0x78
class UFortPhysicsObjectCollisionEffectsData : public UDataAsset
{
	struct FGameplayCueTag ImpactEffectsCue; // 0x30 (0x4)
	float MinRetriggerTime; // 0x34 (0x4)
	float MinRetriggerDistance; // 0x38 (0x4)
	float MinWaterVelocityThreshold; // 0x3c (0x4)
	float MinMediumWaterVelocityThreshold; // 0x40 (0x4)
	float MinLargeWaterVelocityThreshold; // 0x44 (0x4)
	float MaxLargeWaterVelocityThreshold; // 0x48 (0x4)
	float MinImpulseMagnitude; // 0x4c (0x4)
	float MinMediumImpulseMagnitude; // 0x50 (0x4)
	float MinLargeImpulseMagnitude; // 0x54 (0x4)
	float MaxLargeImpulseMagnitude; // 0x58 (0x4)
	struct FGameplayCueTag WaterEntryCue; // 0x5c (0x4)
	struct FGameplayCueTag MovementEffectsCue; // 0x60 (0x4)
	float LinearVelocityThreshold; // 0x64 (0x4)
	float AngularVelocityThreshold; // 0x68 (0x4)
	float RollingCosThreshold; // 0x6c (0x4)
	float MovingBufferTime; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

