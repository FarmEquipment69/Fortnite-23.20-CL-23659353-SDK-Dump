// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// Size: 0x28
class IFortAthenaLivingWorldPointProviderInterface : public IInterface
{

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation (Underlying native function: GetPointProviderLocation 0x7238f0c)
	struct FVector GetPointProviderLocation(); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags (Underlying native function: GetFiltersTags 0x7238b20)
	void GetFiltersTags(struct FGameplayTagContainer& FilterTags); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.EnablePointProvider (Underlying native function: EnablePointProvider 0x7238a20)
	void EnablePointProvider(); // (Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface.DisablePointProvider (Underlying native function: DisablePointProvider 0x7238980)
	void DisablePointProvider(); // (Native | Public | BlueprintCallable)
};

