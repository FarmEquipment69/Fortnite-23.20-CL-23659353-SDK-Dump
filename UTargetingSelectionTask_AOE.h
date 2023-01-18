// Class /Script/TargetingSystem.TargetingSelectionTask_AOE
// Size: 0xd0
class UTargetingSelectionTask_AOE : public UTargetingTask
{
	enum ETargetingAOEShape ShapeType; // 0x28 (0x1)
	struct TEnumAsByte<ECollisionChannel> CollisionChannel; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	struct FCollisionProfileName CollisionProfileName; // 0x2c (0x4)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> CollisionObjectTypes; // 0x30 (0x10)
	struct FVector DefaultSourceOffset; // 0x40 (0x18)
	unsigned char bIgnoreSourceActor; // 0x58 (0x1)
	unsigned char bIgnoreInstigatorActor; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct FVector HalfExtent; // 0x60 (0x18)
	struct FScalableFloat Radius; // 0x78 (0x28)
	struct FScalableFloat HalfHeight; // 0xa0 (0x28)
	struct FName ComponentTag; // 0xc8 (0x4)
	unsigned char padding_cc[0x4]; // 0xcc (0x4)

	/* Functions */

	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset (Underlying native function: GetSourceOffset 0x7311aa0)
	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation (Underlying native function: GetSourceLocation 0x7311940)
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)
};

