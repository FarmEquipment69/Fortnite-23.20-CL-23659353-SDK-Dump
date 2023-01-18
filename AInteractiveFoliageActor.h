// Class /Script/Foliage.InteractiveFoliageActor
// Size: 0x328
class AInteractiveFoliageActor : public AStaticMeshActor
{
	class UCapsuleComponent* CapsuleComponent; // 0x298 (0x8)
	struct FVector TouchingActorEntryPosition; // 0x2a0 (0x18)
	struct FVector FoliageVelocity; // 0x2b8 (0x18)
	struct FVector FoliageForce; // 0x2d0 (0x18)
	struct FVector FoliagePosition; // 0x2e8 (0x18)
	float FoliageDamageImpulseScale; // 0x300 (0x4)
	float FoliageTouchImpulseScale; // 0x304 (0x4)
	float FoliageStiffness; // 0x308 (0x4)
	float FoliageStiffnessQuadratic; // 0x30c (0x4)
	float FoliageDamping; // 0x310 (0x4)
	float MaxDamageImpulse; // 0x314 (0x4)
	float MaxTouchImpulse; // 0x318 (0x4)
	float MaxForce; // 0x31c (0x4)
	float Mass; // 0x320 (0x4)
	unsigned char padding_324[0x4]; // 0x324 (0x4)

	/* Functions */

	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched (Underlying native function: CapsuleTouched 0x99297d4)
	void CapsuleTouched(class UPrimitiveComponent*& OverlappedComp, class AActor*& Other, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& OverlapInfo); // (Final | Native | Protected | HasOutParms)
};

