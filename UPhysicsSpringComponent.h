// Class /Script/Engine.PhysicsSpringComponent
// Size: 0x2d0
class UPhysicsSpringComponent : public USceneComponent
{
	float SpringStiffness; // 0x2a0 (0x4)
	float SpringDamping; // 0x2a4 (0x4)
	float SpringLengthAtRest; // 0x2a8 (0x4)
	float SpringRadius; // 0x2ac (0x4)
	struct TEnumAsByte<ECollisionChannel> SpringChannel; // 0x2b0 (0x1)
	bool bIgnoreSelf; // 0x2b1 (0x1)
	unsigned char unreflected_2b2[0x2]; // 0x2b2 (0x2) 
	float SpringCompression; // 0x2b4 (0x4)
	unsigned char padding_2b8[0x18]; // 0x2b8 (0x18)

	/* Functions */

	// Function /Script/Engine.PhysicsSpringComponent.GetSpringRestingPoint (Underlying native function: GetSpringRestingPoint 0x9c13400)
	struct FVector GetSpringRestingPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PhysicsSpringComponent.GetSpringDirection (Underlying native function: GetSpringDirection 0x9c133cc)
	struct FVector GetSpringDirection(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PhysicsSpringComponent.GetSpringCurrentEndPoint (Underlying native function: GetSpringCurrentEndPoint 0x9c13394)
	struct FVector GetSpringCurrentEndPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PhysicsSpringComponent.GetNormalizedCompressionScalar (Underlying native function: GetNormalizedCompressionScalar 0x9c12f00)
	float GetNormalizedCompressionScalar(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

