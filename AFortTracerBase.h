// Class /Script/FortniteGame.FortTracerBase
// Size: 0x368
class AFortTracerBase : public AFortClientOnlyActor
{
	class UMovementComp_Tracer* TracerMovementComponent; // 0x290 (0x8)
	class UStaticMeshComponent* TracerMesh; // 0x298 (0x8)
	class UBulletWhipTrackerComponentBase* BulletWhipTrackerComponent; // 0x2a0 (0x8)
	struct FCurveTableRowHandle Speed; // 0x2a8 (0x10)
	float SpeedScaleMinRange; // 0x2b8 (0x4)
	float SpeedScaleMaxRange; // 0x2bc (0x4)
	float SpeedScaleMinMultiplier; // 0x2c0 (0x4)
	float SpeedScaleMaxMultiplier; // 0x2c4 (0x4)
	struct FVector MeshScaleMult; // 0x2c8 (0x18)
	float MeshScaleTime; // 0x2e0 (0x4)
	unsigned char unreflected_2e4[0x4]; // 0x2e4 (0x4) 
	class UClass* BulletWhipTrackerComponentClass; // 0x2e8 (0x8)
	unsigned char bScaleOnDeath; // 0x2f0 (0x1)
	unsigned char bScaleSpeed; // 0x2f0 (0x1)
	unsigned char bScaledUp; // 0x2f0 (0x1)
	unsigned char bDead; // 0x2f0 (0x1)
	unsigned char bOwnedByPool; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x67]; // 0x2f1 (0x67) 
	float currentScale; // 0x358 (0x4)
	unsigned char padding_35c[0xc]; // 0x35c (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortTracerBase.Init (Underlying native function: Init 0x906825c)
	void Init(struct FVector& Start, struct FVector& End); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

