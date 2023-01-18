// Class /Script/FortniteGame.FortTamedNpcIndicator
// Size: 0x270
class UFortTamedNpcIndicator : public UUserWidget
{
	class AActor* OwningActor; // 0x268 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortTamedNpcIndicator.SetOwningActor (Underlying native function: SetOwningActor 0x8f35338)
	void SetOwningActor(class AActor*& NewOwnerActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTamedNpcIndicator.HidePetIndicator (Has no native function)
	void HidePetIndicator(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTamedNpcIndicator.DisplayPetIndicator (Has no native function)
	void DisplayPetIndicator(bool& bIsLocalPlayerOwned); // (Event | Public | BlueprintEvent)
};

