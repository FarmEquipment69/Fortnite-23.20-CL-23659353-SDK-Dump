// Class /Script/AttachableWheelsRuntime.AttachableWheel
// Size: 0x308
class AAttachableWheel : public AActor
{
	class UStaticMeshComponent* WheelMeshComponent; // 0x288 (0x8)
	struct FRotator WheelOrientation; // 0x290 (0x18)
	float WheelDistance; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	class UPhysicsConstraintComponent* AxleConstraint; // 0x2b0 (0x8)
	struct FAttachableWheelAttachData AttachData; // 0x2b8 (0x50)

	/* Functions */

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData (Underlying native function: OnRep_AttachData 0x7fbf8c4)
	void OnRepAttachData(struct FAttachableWheelAttachData& AttachDataPrev); // (Final | Native | Protected | HasOutParms)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged (Underlying native function: OnPhysicsStateChanged 0x7fbf800)
	void OnPhysicsStateChanged(class UPrimitiveComponent*& PrimitiveComponent, enum EComponentPhysicsStateChange& StateChange); // (Final | Native | Protected)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnDetached (Has no native function)
	void OnDetached(class UPrimitiveComponent*& DetachedComponent); // (Event | Public | BlueprintEvent)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnAttached (Has no native function)
	void OnAttached(class UPrimitiveComponent*& AttachedComponent); // (Event | Public | BlueprintEvent)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData (Underlying native function: GetWorldSpaceAttachData 0x7fbf5d0)
	bool GetWorldSpaceAttachData(struct FAttachableWheelAttachData& OutAttachData, class UPrimitiveComponent*& PrimitiveComponent); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent (Underlying native function: GetAttachedComponent 0x7fbf28c)
	class UPrimitiveComponent* GetAttachedComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DrawDebug (Underlying native function: DrawDebug 0x26daa0c)
	void DrawDebug(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DetachFrom (Underlying native function: DetachFrom 0x7fbf198)
	bool DetachFrom(class UPrimitiveComponent*& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.Detach (Underlying native function: Detach 0x7fbf0f4)
	void Detach(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachTo (Underlying native function: AttachTo 0x7fbefcc)
	bool AttachTo(class UPrimitiveComponent*& InComponent, struct FVector& WorldLocation, struct FVector& AxleDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachInPlace (Underlying native function: AttachInPlace 0x7fbef3c)
	bool AttachInPlace(class UPrimitiveComponent*& InComponent); // (Final | Native | Public | BlueprintCallable)
};

