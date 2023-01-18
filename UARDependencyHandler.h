// Class /Script/AugmentedReality.ARDependencyHandler
// Size: 0x28
class UARDependencyHandler : public UObject
{

	/* Functions */

	// Function /Script/AugmentedReality.ARDependencyHandler.StartARSessionLatent (Underlying native function: StartARSessionLatent 0x97bfba4)
	void StartARSessionLatent(class UObject*& WorldContextObject, class UARSessionConfig*& SessionConfig, struct FLatentActionInfo& LatentInfo); // (Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARDependencyHandler.RequestARSessionPermission (Underlying native function: RequestARSessionPermission 0x97bd90c)
	void RequestARSessionPermission(class UObject*& WorldContextObject, class UARSessionConfig*& SessionConfig, struct FLatentActionInfo& LatentInfo, enum EARServicePermissionRequestResult& OutPermissionResult); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARDependencyHandler.InstallARService (Underlying native function: InstallARService 0x97bcbdc)
	void InstallARService(class UObject*& WorldContextObject, struct FLatentActionInfo& LatentInfo, enum EARServiceInstallRequestResult& OutInstallResult); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARDependencyHandler.GetARDependencyHandler (Underlying native function: GetARDependencyHandler 0x97ba35c)
	static class UARDependencyHandler* GetARDependencyHandler(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARDependencyHandler.CheckARServiceAvailability (Underlying native function: CheckARServiceAvailability 0x97b977c)
	void CheckARServiceAvailability(class UObject*& WorldContextObject, struct FLatentActionInfo& LatentInfo, enum EARServiceAvailability& OutAvailability); // (Native | Public | HasOutParms | BlueprintCallable)
};

