// Class /Script/FortniteGame.FortPhysicsMagneticForceComponent
// Size: 0xd0
class UFortPhysicsMagneticForceComponent : public UGameFrameworkComponent
{
	unsigned char unreflected_a0[0x20]; // 0xa0 (0x20) 
	struct TArray<struct FPhysicsMagneticForceData> ForcesToApply; // 0xc0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsMagneticForceComponent.EndMagneticForce (Underlying native function: EndMagneticForce 0x8d37e68)
	void EndMagneticForce(struct FPhysicsMagneticForceHandle& Handle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsMagneticForceComponent.EndAllMagneticForces (Underlying native function: EndAllMagneticForces 0x8d37dc8)
	void EndAllMagneticForces(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsMagneticForceComponent.BeginMagneticForce (Underlying native function: BeginMagneticForce 0x8d36340)
	void BeginMagneticForce(float& Magnitude, float& DistanceFallOffBias, float& DistanceFallOffExponent, bool& bShouldAffectOwner, bool& bAtLocation, struct FVector& Location, bool& bLocationIsRelative, class UTargetingPreset*& TargetingPreset, struct FPhysicsMagneticForceHandle& OutHandle); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

