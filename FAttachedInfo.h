// ScriptStruct /Script/FortniteGame.AttachedInfo
// Size: 0x128
struct FAttachedInfo
{
	struct FHitResult Hit; // 0x0 (0xe0)
	class AActor* AttachedToActor; // 0xe0 (0x8)
	struct FVector_NetQuantize10 AttachOffset; // 0xe8 (0x18)
	struct FVector_NetQuantizeNormal VelocityNormalized; // 0x100 (0x18)
	float NarrowPlacementAgainstVelocityThreshold; // 0x118 (0x4)
	float StickyOffsetFromPhysicsMesh; // 0x11c (0x4)
	float StickyOffsetFromBoneCenter; // 0x120 (0x4)
	unsigned char padding_124[0x4]; // 0x124 (0x4)
};

