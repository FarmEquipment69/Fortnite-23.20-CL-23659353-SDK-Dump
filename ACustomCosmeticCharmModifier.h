// Class /Script/FortniteGame.CustomCosmeticCharmModifier
// Size: 0x470
class ACustomCosmeticCharmModifier : public ACustomCosmeticModifierBase
{
	struct TEnumAsByte<EFortCustomCharmType> CharmType; // 0x460 (0x1)
	unsigned char unreflected_461[0x7]; // 0x461 (0x7) 
	class AFortPlayerCharm* MyCharmOwner; // 0x468 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CustomCosmeticCharmModifier.OnPawnAndCharmChanged (Has no native function)
	void OnPawnAndCharmChanged(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticCharmModifier.OnCharmVisibilityChanged (Has no native function)
	void OnCharmVisibilityChanged(bool& bVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticCharmModifier.GetSkeletalMeshForAssociatedPlayerPawnCharmType (Underlying native function: GetSkeletalMeshForAssociatedPlayerPawnCharmType 0x882ce88)
	class UMeshComponent* GetSkeletalMeshForAssociatedPlayerPawnCharmType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCosmeticCharmModifier.GetCharmOwner (Underlying native function: GetCharmOwner 0x2c0d3ec)
	class AFortPlayerCharm* GetCharmOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCosmeticCharmModifier.GetCharacterCharmType (Underlying native function: GetCharacterCharmType 0x882ce60)
	struct TEnumAsByte<EFortCustomCharmType> GetCharacterCharmType(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCosmeticCharmModifier.ForceResetParticleSystems (Underlying native function: ForceResetParticleSystems 0x882ce4c)
	void ForceResetParticleSystems(); // (Final | Native | Public | BlueprintCallable)
};

