// Class /Script/FortniteGame.FortContextualTutorialController
// Size: 0xb8
class UFortContextualTutorialController : public UObject
{
	struct TArray<class UFortContextualTutorial*> ActiveContextualTutorials; // 0x28 (0x10)
	struct TArray<class UFortContextualTutorial*> PendingContextualTutorials; // 0x38 (0x10)
	struct TArray<class UFortContextualTutorial*> CompletedContextualTutorials; // 0x48 (0x10)
	struct TArray<class UFortContextualTutorial*> PendingCompletedContextualTutorials; // 0x58 (0x10)
	unsigned char unreflected_68[0x30]; // 0x68 (0x30) 
	class AFortPlayerController* OwnerController; // 0x98 (0x8)
	unsigned char padding_a0[0x18]; // 0xa0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortContextualTutorialController.HideGameModeMessageRequest (Underlying native function: HideGameModeMessageRequest 0x85463b0)
	void HideGameModeMessageRequest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortContextualTutorialController.HandleUpdateActiveTutorialsForPhase (Underlying native function: HandleUpdateActiveTutorialsForPhase 0x85462ec)
	void HandleUpdateActiveTutorialsForPhase(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortContextualTutorialController.HandleStartSkydivingForActivation (Underlying native function: HandleStartSkydivingForActivation 0x85461a8)
	void HandleStartSkydivingForActivation(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortContextualTutorialController.HandleDBNOChanged (Underlying native function: HandleDBNOChanged 0x8545ba0)
	void HandleDBNOChanged(class AFortPawn*& Pawn, bool& IsBDNO); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortContextualTutorialController.HandleDamageReceived (Underlying native function: HandleDamageReceived 0x8545c68)
	void HandleDamageReceived(); // (Final | Native | Protected)
};

