// Class /Script/PlayspaceSystem.GameplayVolume
// Size: 0x310
class AGameplayVolume : public AActor
{
	struct TWeakObjectPtr<class UClass> PlayspaceClassTemplate; // 0x288 (0x28)
	enum EPlayspaceCreationType PlayspaceCreationType; // 0x2b0 (0x1)
	unsigned char unreflected_2b1[0x7]; // 0x2b1 (0x7) 
	class UClass* PlayspaceClass; // 0x2b8 (0x8)
	class APlayspace* Playspace; // 0x2c0 (0x8)
	struct FGameplayTagContainer VolumeTags; // 0x2c8 (0x20)
	class UOverlapComponent* BoundsComponent; // 0x2e8 (0x8)
	unsigned char padding_2f0[0x20]; // 0x2f0 (0x20)

	/* Functions */

	// Function /Script/PlayspaceSystem.GameplayVolume.UpdateSize (Underlying native function: UpdateSize 0x7062280)
	void UpdateSize(struct FVector& NewScale); // (Native | Public | HasOutParms | HasDefaults)

	// Function /Script/PlayspaceSystem.GameplayVolume.OnOverlappedPawnControllerChanged (Underlying native function: OnOverlappedPawnControllerChanged 0x7061ef0)
	void OnOverlappedPawnControllerChanged(class APawn*& Pawn, class AController*& OldController, class AController*& NewController); // (Native | Protected)

	// Function /Script/PlayspaceSystem.GameplayVolume.InitializeBoundsComponent (Underlying native function: InitializeBoundsComponent 0x7061b3c)
	void InitializeBoundsComponent(class UOverlapComponent*& NewBoundsComponent); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/PlayspaceSystem.GameplayVolume.GetPlayspace (Underlying native function: GetPlayspace 0x2522aa8)
	class APlayspace* GetPlayspace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

