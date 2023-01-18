// Class /Script/FortniteGame.CustomItemWrapModifier
// Size: 0x480
class ACustomItemWrapModifier : public ACustomCosmeticModifierBase
{
	struct TWeakObjectPtr<class AActor> GenericActorPtr; // 0x460 (0x8)
	struct TWeakObjectPtr<class AActor> VehiclePtr; // 0x468 (0x8)
	struct TWeakObjectPtr<class AFortWeapon> WeaponPtr; // 0x470 (0x8)
	struct TWeakObjectPtr<class UMeshComponent> MeshPtr; // 0x478 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CustomItemWrapModifier.OnSetWrapTarget (Underlying native function: OnSetWrapTarget 0x2b0fa94)
	void OnSetWrapTarget(); // (BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomItemWrapModifier.NotifyAudioComponentVehicleTriggered (Has no native function)
	void NotifyAudioComponentVehicleTriggered(class UAudioComponent*& AudioComponent, int& Priority); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomItemWrapModifier.NotifyAudioComponentAdded (Has no native function)
	void NotifyAudioComponentAdded(class UAudioComponent*& AudioComponent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomItemWrapModifier.GetWrappedMeshComponents (Underlying native function: GetWrappedMeshComponents 0x1b4f448)
	struct TArray<class UMeshComponent*> GetWrappedMeshComponents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomItemWrapModifier.GetWrappedMeshComponent (Underlying native function: GetWrappedMeshComponent 0x882cf44)
	class UMeshComponent* GetWrappedMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomItemWrapModifier.GetWeapon (Underlying native function: GetWeapon 0x882cf20)
	class AFortWeapon* GetWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomItemWrapModifier.GetVehicle (Underlying native function: GetVehicle 0x882cefc)
	class AActor* GetVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

