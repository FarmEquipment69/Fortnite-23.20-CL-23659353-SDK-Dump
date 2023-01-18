// Class /Script/FortniteGame.FortPhysicsConstantForceComponent
// Size: 0xd0
class UFortPhysicsConstantForceComponent : public UGameFrameworkComponent
{
	unsigned char unreflected_a0[0x20]; // 0xa0 (0x20) 
	struct TArray<struct FPhysicsConstantForceData> ForcesToApply; // 0xc0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsConstantForceComponent.ModifyConstantForce (Underlying native function: ModifyConstantForce 0x8d39670)
	void ModifyConstantForce(struct FPhysicsConstantForceHandle& Handle, struct FVector& Force, bool& bForceIsRelative, bool& bAtLocation, struct FVector& Location, bool& bLocationIsRelative, bool& bVelocityChange); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsConstantForceComponent.EndConstantForce (Underlying native function: EndConstantForce 0x8d37ddc)
	void EndConstantForce(struct FPhysicsConstantForceHandle& Handle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsConstantForceComponent.EndAllConstantForces (Underlying native function: EndAllConstantForces 0x8d37d74)
	void EndAllConstantForces(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsConstantForceComponent.BeginConstantForce (Underlying native function: BeginConstantForce 0x8d360e4)
	void BeginConstantForce(struct FVector& Force, bool& bForceIsRelative, bool& bAtLocation, struct FVector& Location, bool& bLocationIsRelative, bool& bVelocityChange, struct FPhysicsConstantForceHandle& OutHandle); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

