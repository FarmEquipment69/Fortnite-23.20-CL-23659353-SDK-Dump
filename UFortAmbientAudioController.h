// Class /Script/FortniteGame.FortAmbientAudioController
// Size: 0xc8
class UFortAmbientAudioController : public UActorComponent
{
	struct FGameplayTag RequiredTagSubstr; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class AFortPlayerController* PlayerController; // 0xa8 (0x8)
	float PauseFadeTime; // 0xb0 (0x4)
	unsigned char padding_b4[0x14]; // 0xb4 (0x14)

	/* Functions */

	// Function /Script/FortniteGame.FortAmbientAudioController.OnDayPhaseChanged (Underlying native function: OnDayPhaseChanged 0x113bbc0)
	void OnDayPhaseChanged(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAmbientAudioController.GetAmbientAudioControllerFromContext (Underlying native function: GetAmbientAudioControllerFromContext 0x8e5de70)
	static class UFortAmbientAudioController* GetAmbientAudioControllerFromContext(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

