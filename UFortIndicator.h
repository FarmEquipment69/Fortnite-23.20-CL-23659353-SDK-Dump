// Class /Script/FortniteGame.FortIndicator
// Size: 0x68
class UFortIndicator : public UObject
{
	struct FVector RelativeLocation; // 0x28 (0x18)
	float MaxDistance; // 0x40 (0x4)
	bool bMoveWithPawnState; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	struct FName AttachedSocketName; // 0x48 (0x4)
	unsigned char padding_4c[0x1c]; // 0x4c (0x1c)

	/* Functions */

	// Function /Script/FortniteGame.FortIndicator.OnParentActorEndPlay (Underlying native function: OnParentActorEndPlay 0x2a7b4cc)
	void OnParentActorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)
};

