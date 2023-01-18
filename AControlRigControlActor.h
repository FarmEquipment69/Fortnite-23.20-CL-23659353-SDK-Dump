// Class /Script/ControlRig.ControlRigControlActor
// Size: 0x338
class AControlRigControlActor : public AActor
{
	class AActor* ActorToTrack; // 0x288 (0x8)
	class UClass* ControlRigClass; // 0x290 (0x8)
	bool bRefreshOnTick; // 0x298 (0x1)
	bool bIsSelectable; // 0x299 (0x1)
	unsigned char unreflected_29a[0x6]; // 0x29a (0x6) 
	class UMaterialInterface* MaterialOverride; // 0x2a0 (0x8)
	struct FString ColorParameter; // 0x2a8 (0x10)
	bool bCastShadows; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x7]; // 0x2b9 (0x7) 
	class USceneComponent* ActorRootComponent; // 0x2c0 (0x8)
	struct TWeakObjectPtr<class UControlRig> ControlRig; // 0x2c8 (0x28)
	struct TArray<struct FName> ControlNames; // 0x2f0 (0x10)
	struct TArray<struct FTransform> ShapeTransforms; // 0x300 (0x10)
	struct TArray<class UStaticMeshComponent*> Components; // 0x310 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> Materials; // 0x320 (0x10)
	struct FName ColorParameterName; // 0x330 (0x4)
	unsigned char padding_334[0x4]; // 0x334 (0x4)

	/* Functions */

	// Function /Script/ControlRig.ControlRigControlActor.ResetControlActor (Underlying native function: ResetControlActor 0x7a9d860)
	void ResetControlActor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigControlActor.Refresh (Underlying native function: Refresh 0x7a9d81c)
	void Refresh(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigControlActor.Clear (Underlying native function: Clear 0x7a9bde0)
	void Clear(); // (Final | Native | Public | BlueprintCallable)
};

