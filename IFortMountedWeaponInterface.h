// Class /Script/FortniteGame.FortMountedWeaponInterface
// Size: 0x28
class IFortMountedWeaponInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortMountedWeaponInterface.GetWeaponComponentCached (Underlying native function: GetWeaponComponentCached 0x903ff34)
	class UFortVehicleSeatWeaponComponent* GetWeaponComponentCached(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMountedWeaponInterface.BP_GetHostVehicle (Underlying native function: BP_GetHostVehicle 0x903eb34)
	struct TScriptInterface<class IFortVehicleInterface> BPGetHostVehicle(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMountedWeaponInterface.AddToIgnoreActors (Underlying native function: AddToIgnoreActors 0x903e670)
	void AddToIgnoreActors(class AActor*& Actor); // (Native | Public | BlueprintCallable)
};

