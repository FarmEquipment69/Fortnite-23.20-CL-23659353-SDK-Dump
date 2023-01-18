// Class /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
// Size: 0x5f0
class ASpecialEventPlayerMannequin : public AFortPlayerMannequin
{
	unsigned char bDisableCollisionOnBeginPlay; // 0x5e8 (0x1)
	unsigned char bDisableComponentsTickOnServer; // 0x5e8 (0x1)
	unsigned char bRegisterWithSpecialEventMutatorOnClient; // 0x5e8 (0x1)
	unsigned char bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization; // 0x5e8 (0x1)
	unsigned char padding_5e9[0x7]; // 0x5e9 (0x7)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator (Underlying native function: RegisterWithSpecialEventMutator 0x76c6440)
	void RegisterWithSpecialEventMutator(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded (Underlying native function: HandleOnMutatorAdded 0x76c3794)
	void HandleOnMutatorAdded(class AFortGameplayMutator*& NewMutator); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents (Underlying native function: DestroyUnusedSkeletalMeshComponents 0x76c1028)
	void DestroyUnusedSkeletalMeshComponents(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

