// Class /Script/FortniteGame.FortVehicleManager
// Size: 0x3f0
class AFortVehicleManager : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	struct FMulticastInlineDelegate OnVehicleCountByTagChanged; // 0x298 (0x10)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	struct TArray<class AFortAthenaVehicle*> Vehicles; // 0x2b0 (0x10)
	unsigned char unreflected_2c0[0x20]; // 0x2c0 (0x20) 
	struct TMap<struct FGameplayTag, int> VehicleCountByTagMap; // 0x2e0 (0x50)
	unsigned char padding_330[0xc0]; // 0x330 (0xc0)

	/* Functions */

	// Function /Script/FortniteGame.FortVehicleManager.OnNavSystemLockReleased (Underlying native function: OnNavSystemLockReleased 0x26daa0c)
	void OnNavSystemLockReleased(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVehicleManager.GetVehicleManager (Underlying native function: GetVehicleManager 0x89e9e1c)
	static bool GetVehicleManager(class UObject*& WorldContextObject, class AFortVehicleManager*& VehicleManager); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleManager.GetVehicleCountByTag (Underlying native function: GetVehicleCountByTag 0x89e9cac)
	int GetVehicleCountByTag(struct FGameplayTag& VehicleTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

