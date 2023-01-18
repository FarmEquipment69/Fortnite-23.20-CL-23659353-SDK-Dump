// Class /Script/FortniteGame.FortPlayerCharm
// Size: 0x2b8
class AFortPlayerCharm : public AActor
{
	class UAthenaCharmItemDefinition* CharmItemDef; // 0x288 (0x8)
	class USkeletalMeshComponentBudgeted* CharmMesh; // 0x290 (0x8)
	bool bIsFrontEndPreview; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class USceneComponent* CharmAttachedTo; // 0x2a0 (0x8)
	struct FName CharmAttachedToSocket; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	class ACustomCosmeticCharmModifier* CharmModifier; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerCharm.PreDestruction (Has no native function)
	void PreDestruction(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerCharm.OnCharmVisibilityChanged (Has no native function)
	void OnCharmVisibilityChanged(bool& bVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerCharm.GetCharmSoundAssetByIndex (Underlying native function: GetCharmSoundAssetByIndex 0x83db258)
	class USoundBase* GetCharmSoundAssetByIndex(int& IndexIn, bool& bValidOut); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerCharm.GetCharmSoundAssetByDescName (Underlying native function: GetCharmSoundAssetByDescName 0x83db188)
	class USoundBase* GetCharmSoundAssetByDescName(struct FName& DescNameIn, bool& bValidOut); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerCharm.GetCharmMeshComponent (Underlying native function: GetCharmMeshComponent 0x71207e4)
	class USkeletalMeshComponentBudgeted* GetCharmMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerCharm.GetCharmAttachedToSocket (Underlying native function: GetCharmAttachedToSocket 0x2d00ed4)
	struct FName GetCharmAttachedToSocket(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerCharm.GetCharmAttachedToComponent (Underlying native function: GetCharmAttachedToComponent 0x27fec44)
	class USceneComponent* GetCharmAttachedToComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

