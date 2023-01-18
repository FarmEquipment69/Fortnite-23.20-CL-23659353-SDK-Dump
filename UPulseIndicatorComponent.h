// Class /Script/FortniteGame.PulseIndicatorComponent
// Size: 0x220
class UPulseIndicatorComponent : public UActorComponent
{
	struct TArray<struct FIndicatedActorDataWithFilter> IndicatedActorFilters; // 0xa0 (0x10)
	struct FString IndicatorGroupIdentifierOverride; // 0xb0 (0x10)
	struct FString StencilGroupIdentifierOverride; // 0xc0 (0x10)
	class USoundBase* PlayerPingSound; // 0xd0 (0x8)
	struct FIndicatedActorParticleSystemData PlayerParticleSystemData; // 0xd8 (0x48)
	struct FScalableFloat PulseTime; // 0x120 (0x28)
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FScalableFloat MarkRadius; // 0x150 (0x28)
	unsigned char unreflected_178[0x8]; // 0x178 (0x8) 
	struct FScalableFloat MarkDuration; // 0x180 (0x28)
	unsigned char unreflected_1a8[0x8]; // 0x1a8 (0x8) 
	struct FScalableFloat StepTime; // 0x1b0 (0x28)
	unsigned char unreflected_1d8[0x8]; // 0x1d8 (0x8) 
	struct FString PlayerGroupIdentifier; // 0x1e0 (0x10)
	struct FDelegate OnActorAdded; // 0x1f0 (0xc)
	struct FDelegate OnActorRemoved; // 0x1fc (0xc)
	class AFortPlayerControllerAthena* IndicatingController; // 0x208 (0x8)
	unsigned char padding_210[0x10]; // 0x210 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.PulseIndicatorComponent.StopPulseMarkers (Underlying native function: StopPulseMarkers 0x871be64)
	void StopPulseMarkers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PulseIndicatorComponent.StartPulseMarkers (Underlying native function: StartPulseMarkers 0x26daa0c)
	void StartPulseMarkers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PulseIndicatorComponent.SetIndicatingController (Underlying native function: SetIndicatingController 0x871baa0)
	void SetIndicatingController(class AFortPlayerControllerAthena*& Controller); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PulseIndicatorComponent.SetDisplayTeam (Underlying native function: SetDisplayTeam 0x871ba24)
	void SetDisplayTeam(unsigned char& NewDisplayTeam); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PulseIndicatorComponent.CanUseComponentIndicators (Underlying native function: CanUseComponentIndicators 0x8719be8)
	bool CanUseComponentIndicators(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

