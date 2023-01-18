// Class /Script/FortniteGame.FortWeaponTraceIgnoreActorsComponent
// Size: 0xd0
class UFortWeaponTraceIgnoreActorsComponent : public UActorComponent
{
	struct TArray<class AActor*> AdditionalIgnoreActors; // 0xa0 (0x10)
	struct TArray<class UClass*> DefaultAdditionalIgnoreActorClasses; // 0xb0 (0x10)
	struct TArray<class UClass*> AdditionalIgnoreActorClasses; // 0xc0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponTraceIgnoreActorsComponent.ResetAdditionalIgnoreActors (Underlying native function: ResetAdditionalIgnoreActors 0x8524b80)
	void ResetAdditionalIgnoreActors(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponTraceIgnoreActorsComponent.ResetAdditionalIgnoreActorClasses (Underlying native function: ResetAdditionalIgnoreActorClasses 0x8524b00)
	void ResetAdditionalIgnoreActorClasses(bool& bUseDefaults); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponTraceIgnoreActorsComponent.RemoveIgnoreActors (Underlying native function: RemoveIgnoreActors 0x8524a64)
	void RemoveIgnoreActors(struct TArray<class AActor*>& InActors); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponTraceIgnoreActorsComponent.RemoveIgnoreActorClasses (Underlying native function: RemoveIgnoreActorClasses 0x85249c4)
	void RemoveIgnoreActorClasses(struct TArray<class UClass*>& InActorClasses); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponTraceIgnoreActorsComponent.BP_GetAdditionalIgnoreActors (Has no native function)
	void BPGetAdditionalIgnoreActors(struct TArray<class AActor*>& OutAdditionalActors, struct TArray<class UClass*>& OutAdditionalActorClasses, class AFortPawn*& OwningPawn, class AFortWeapon*& Weapon); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortWeaponTraceIgnoreActorsComponent.AddIgnoreActors (Underlying native function: AddIgnoreActors 0x8522960)
	void AddIgnoreActors(struct TArray<class AActor*>& InActors); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponTraceIgnoreActorsComponent.AddIgnoreActorClasses (Underlying native function: AddIgnoreActorClasses 0x85228c0)
	void AddIgnoreActorClasses(struct TArray<class UClass*>& InActorClasses); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

