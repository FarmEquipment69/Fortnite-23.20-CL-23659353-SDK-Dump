// ScriptStruct /Script/Engine.PredictProjectilePathParams
// Size: 0x78
struct FPredictProjectilePathParams
{
	struct FVector StartLocation; // 0x0 (0x18)
	struct FVector LaunchVelocity; // 0x18 (0x18)
	bool bTraceWithCollision; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float ProjectileRadius; // 0x34 (0x4)
	float MaxSimTime; // 0x38 (0x4)
	bool bTraceWithChannel; // 0x3c (0x1)
	struct TEnumAsByte<ECollisionChannel> TraceChannel; // 0x3d (0x1)
	unsigned char unreflected_3e[0x2]; // 0x3e (0x2) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> ObjectTypes; // 0x40 (0x10)
	struct TArray<class AActor*> ActorsToIgnore; // 0x50 (0x10)
	float SimFrequency; // 0x60 (0x4)
	float OverrideGravityZ; // 0x64 (0x4)
	struct TEnumAsByte<EDrawDebugTrace> DrawDebugType; // 0x68 (0x1)
	unsigned char unreflected_69[0x3]; // 0x69 (0x3) 
	float DrawDebugTime; // 0x6c (0x4)
	bool bTraceComplex; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

