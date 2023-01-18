// Class /Script/FortniteGame.FortPlayerPet
// Size: 0x2f8
class AFortPlayerPet : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UAthenaPetItemDefinition* PetItemDef; // 0x290 (0x8)
	class UAudioComponent* PetAudioComponent; // 0x298 (0x8)
	unsigned char unreflected_2a0[0x4]; // 0x2a0 (0x4) 
	unsigned char bIsFrontEndPreview; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	class USkeletalMeshComponentBudgeted* PetMesh; // 0x2a8 (0x8)
	class USphereComponent* InteractionCollisionSphere; // 0x2b0 (0x8)
	unsigned char bSuppressInteract; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x7]; // 0x2b9 (0x7) 
	struct TArray<class UMaterialInterface*> SavedMaterials; // 0x2c0 (0x10)
	unsigned char unreflected_2d0[0x20]; // 0x2d0 (0x20) 
	class UFortTaggedSoundBank* SoundBank; // 0x2f0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerPet.ResetPetMaterials (Underlying native function: ResetPetMaterials 0x84180fc)
	void ResetPetMaterials(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPet.ReInitPetDisplay (Underlying native function: ReInitPetDisplay 0x8418034)
	void ReInitPetDisplay(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPet.PetMaterialsOverride (Has no native function)
	void PetMaterialsOverride(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPet.OnRequestedCustomizationComplete (Underlying native function: OnRequestedCustomizationComplete 0x8417ebc)
	void OnRequestedCustomizationComplete(class AFortPlayerPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerPet.InitalizeFromItemDef (Underlying native function: InitalizeFromItemDef 0x8416324)
	void InitalizeFromItemDef(class UAthenaPetItemDefinition*& InPetItemDef); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPet.GetFortPlayerPawn (Underlying native function: GetFortPlayerPawn 0x84154f8)
	class AFortPlayerPawn* GetFortPlayerPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

