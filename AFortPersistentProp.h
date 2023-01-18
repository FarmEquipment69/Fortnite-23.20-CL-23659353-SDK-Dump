// Class /Script/FortniteGame.FortPersistentProp
// Size: 0x2c8
class AFortPersistentProp : public AActor
{
	float BaseLifetime; // 0x288 (0x4)
	float RemainingLifeTime; // 0x28c (0x4)
	bool bApplyCosmeticVariants; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition> VariantItemDefinition; // 0x298 (0x28)
	unsigned char padding_2c0[0x8]; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPersistentProp.OnDetach (Has no native function)
	void OnDetach(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPersistentProp.GetFortPawnOwner (Underlying native function: GetFortPawnOwner 0x8245d64)
	class AFortPawn* GetFortPawnOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPersistentProp.DestroyProp (Has no native function)
	void DestroyProp(bool& bShouldInstantDestroy); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

