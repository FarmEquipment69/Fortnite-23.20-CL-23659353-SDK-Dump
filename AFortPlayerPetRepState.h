// Class /Script/FortniteGame.FortPlayerPetRepState
// Size: 0x2b8
class AFortPlayerPetRepState : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class AActor* LookAtTarget; // 0x290 (0x8)
	class UAthenaPetItemDefinition* PetItemDef; // 0x298 (0x8)
	struct FPetStimuliRepData* StimuliTag; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x10]; // 0x2a8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerPetRepState.OnRep_StimuliTag (Underlying native function: OnRep_StimuliTag 0x2d15080)
	void OnRepStimuliTag(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPetRepState.OnRep_PetItemDef (Underlying native function: OnRep_PetItemDef 0x26daa0c)
	void OnRepPetItemDef(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPetRepState.OnRep_LookAtTarget (Underlying native function: OnRep_LookAtTarget 0x29ede14)
	void OnRepLookAtTarget(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPetRepState.GetFortPlayerPawn (Underlying native function: GetFortPlayerPawn 0x84154f8)
	class AFortPlayerPawn* GetFortPlayerPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

