// Class /Script/Engine.PhysicsHandleComponent
// Size: 0x4c0
class UPhysicsHandleComponent : public UActorComponent
{
	class UPrimitiveComponent* GrabbedComponent; // 0xa0 (0x8)
	unsigned char unreflected_a8[0x4]; // 0xa8 (0x4) 
	unsigned char bSoftAngularConstraint; // 0xac (0x1)
	unsigned char bSoftLinearConstraint; // 0xac (0x1)
	unsigned char bInterpolateTarget; // 0xac (0x1)
	unsigned char unreflected_ad[0x3]; // 0xad (0x3) 
	float LinearDamping; // 0xb0 (0x4)
	float LinearStiffness; // 0xb4 (0x4)
	float AngularDamping; // 0xb8 (0x4)
	float AngularStiffness; // 0xbc (0x4)
	unsigned char unreflected_c0[0xc0]; // 0xc0 (0xc0) 
	float InterpolationSpeed; // 0x180 (0x4)
	unsigned char padding_184[0x33c]; // 0x184 (0x33c)

	/* Functions */

	// Function /Script/Engine.PhysicsHandleComponent.SetTargetRotation (Underlying native function: SetTargetRotation 0x9efb7cc)
	void SetTargetRotation(struct FRotator& NewRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.SetTargetLocationAndRotation (Underlying native function: SetTargetLocationAndRotation 0x9efb698)
	void SetTargetLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.SetTargetLocation (Underlying native function: SetTargetLocation 0x9efb610)
	void SetTargetLocation(struct FVector& NewLocation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.SetLinearStiffness (Underlying native function: SetLinearStiffness 0x9efa998)
	void SetLinearStiffness(float& NewLinearStiffness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.SetLinearDamping (Underlying native function: SetLinearDamping 0x9efa550)
	void SetLinearDamping(float& NewLinearDamping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.SetInterpolationSpeed (Underlying native function: SetInterpolationSpeed 0x9efa3e8)
	void SetInterpolationSpeed(float& NewInterpolationSpeed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.SetAngularStiffness (Underlying native function: SetAngularStiffness 0x9ef8fc4)
	void SetAngularStiffness(float& NewAngularStiffness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.SetAngularDamping (Underlying native function: SetAngularDamping 0x9ef8b6c)
	void SetAngularDamping(float& NewAngularDamping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.ReleaseComponent (Underlying native function: ReleaseComponent 0x25f7420)
	void ReleaseComponent(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.GrabComponentAtLocationWithRotation (Underlying native function: GrabComponentAtLocationWithRotation 0x9ef67c0)
	void GrabComponentAtLocationWithRotation(class UPrimitiveComponent*& Component, struct FName& InBoneName, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.GrabComponentAtLocation (Underlying native function: GrabComponentAtLocation 0x9ef6698)
	void GrabComponentAtLocation(class UPrimitiveComponent*& Component, struct FName& InBoneName, struct FVector& GrabLocation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.GrabComponent (Underlying native function: GrabComponent 0x9ef6544)
	void GrabComponent(class UPrimitiveComponent*& Component, struct FName& InBoneName, struct FVector& GrabLocation, bool& bConstrainRotation); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsHandleComponent.GetTargetLocationAndRotation (Underlying native function: GetTargetLocationAndRotation 0x9ef626c)
	void GetTargetLocationAndRotation(struct FVector& TargetLocation, struct FRotator& TargetRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PhysicsHandleComponent.GetGrabbedComponent (Underlying native function: GetGrabbedComponent 0x2676038)
	class UPrimitiveComponent* GetGrabbedComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

