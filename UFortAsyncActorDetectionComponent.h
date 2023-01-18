// Class /Script/FortniteGame.FortAsyncActorDetectionComponent
// Size: 0x1c0
class UFortAsyncActorDetectionComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate OnDetectActor; // 0xa0 (0x10)
	struct TEnumAsByte<ECollisionChannel> CollisionChannel; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	struct TArray<> ClassesToConsider; // 0xb8 (0x10)
	struct TArray<class AActor*> RecentlyDetectedActors; // 0xc8 (0x10)
	struct FScalableFloat MinimumSpeedToTrigger; // 0xd8 (0x28)
	float TraceLength; // 0x100 (0x4)
	unsigned char padding_104[0xbc]; // 0x104 (0xbc)
};

