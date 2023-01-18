// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
// Size: 0x2d8
class AVaultWeaponPlacementHelper_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UStaticMeshComponent* CUBE; // 0x290 (0x8)
	class UParticleSystemComponent* PSNoPlayerSparkle; // 0x298 (0x8)
	class UParticleSystemComponent* PSNoPlayerSwirl02; // 0x2a0 (0x8)
	class UParticleSystemComponent* PSNoPlayerSwirl01; // 0x2a8 (0x8)
	class UStaticMeshComponent* CharacterPlacement; // 0x2b0 (0x8)
	class USceneComponent* Root; // 0x2b8 (0x8)
	class UStaticMesh* Mesh; // 0x2c0 (0x8)
	struct FMulticastInlineDelegate NewEventDispatcher0; // 0x2c8 (0x10)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance (Has no native function)
	void GetFrontendAnimInstance(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged (Has no native function)
	void OnFrontEndCameraChanged(enum EFrontEndCamera& NewCamera, enum EFrontEndCamera& OldCamera, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize (Has no native function)
	void Initialize(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents (Has no native function)
	void InitializeContextEvents(struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UFortFrontEndContext*& CallFuncGetContextReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez (Has no native function)
	void ItemRez(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper (Has no native function)
	void ExecuteUbergraphVaultWeaponPlacementHelper(int& EntryPoint); // (Final | 0x00008000)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature (Has no native function)
	void NewEventDispatcher0DelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

