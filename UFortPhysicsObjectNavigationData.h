// Class /Script/FortniteGame.FortPhysicsObjectNavigationData
// Size: 0xf8
class UFortPhysicsObjectNavigationData : public UDataAsset
{
	struct FScalableFloat LowSpeedSquareThreshold; // 0x30 (0x28)
	struct FScalableFloat LowSpeedSquareDistanceThreshold; // 0x58 (0x28)
	struct FScalableFloat LowSpeedRotationThreshold; // 0x80 (0x28)
	struct FScalableFloat LowSpeedScaleThreshold; // 0xa8 (0x28)
	class UClass* AreaClass; // 0xd0 (0x8)
	struct FVector FailsafeExtent; // 0xd8 (0x18)
	unsigned char bIncludeAgentHeight; // 0xf0 (0x1)
	unsigned char padding_f1[0x7]; // 0xf1 (0x7)
};

