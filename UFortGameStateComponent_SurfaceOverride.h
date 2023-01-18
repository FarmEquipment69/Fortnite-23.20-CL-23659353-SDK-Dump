// Class /Script/FortniteGame.FortGameStateComponent_SurfaceOverride
// Size: 0xa8
class UFortGameStateComponent_SurfaceOverride : public UFortGameStateComponent
{
	struct TEnumAsByte<EPhysicalSurface> SpecialSurfaceType; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_SurfaceOverride.IsLocationInSpecialSurface (Underlying native function: IsLocationInSpecialSurface 0x809be70)
	bool IsLocationInSpecialSurface(struct FVector& Location, float& Padding); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateComponent_SurfaceOverride.GetSpecialSurfaceType (Underlying native function: GetSpecialSurfaceType 0x72ab810)
	struct TEnumAsByte<EPhysicalSurface> GetSpecialSurfaceType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

