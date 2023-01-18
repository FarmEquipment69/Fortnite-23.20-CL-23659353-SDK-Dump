// ScriptStruct /Script/FortniteGame.ProjectileTrajectorySplineInfo
// Size: 0x80
struct FProjectileTrajectorySplineInfo
{
	class AActor* Instigator; // 0x0 (0x8)
	struct FVector InitialLocation; // 0x8 (0x18)
	struct FVector InitialVelocity; // 0x20 (0x18)
	float MaxSpeed; // 0x38 (0x4)
	float Gravity; // 0x3c (0x4)
	float Friction; // 0x40 (0x4)
	float Bounciness; // 0x44 (0x4)
	float TimeStep; // 0x48 (0x4)
	float TraceExtent; // 0x4c (0x4)
	struct TEnumAsByte<ECollisionChannel> TraceChannel; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	struct FName CollisionProfile; // 0x54 (0x4)
	int MaxBounces; // 0x58 (0x4)
	int MaxSteps; // 0x5c (0x4)
	float MaxDistanceBetweenSplinePoints; // 0x60 (0x4)
	float InitialDistance; // 0x64 (0x4)
	struct TArray<class AActor*> ExtraActorsToIgnore; // 0x68 (0x10)
	float LinearDamping; // 0x78 (0x4)
	bool bReturnPhysicalMaterial; // 0x7c (0x1)
	unsigned char padding_7d[0x3]; // 0x7d (0x3)
};

