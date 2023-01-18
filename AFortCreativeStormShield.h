// Class /Script/FortniteGame.FortCreativeStormShield
// Size: 0x620
class AFortCreativeStormShield : public AFortMissionStormShield
{
	struct FVector ViewTargetLocation; // 0x560 (0x18)
	bool bIsViewTargetPawnOutside; // 0x578 (0x1)
	enum EAthenaGamePhaseStep GamePhaseStep; // 0x579 (0x1)
	unsigned char unreflected_57a[0x2]; // 0x57a (0x2) 
	float NextTargetRadius; // 0x57c (0x4)
	struct FVector NextTargetLocation; // 0x580 (0x18)
	float NextNextTargetRadius; // 0x598 (0x4)
	unsigned char unreflected_59c[0x4]; // 0x59c (0x4) 
	struct FVector NextNextTargetLocation; // 0x5a0 (0x18)
	float InstancedServerTime; // 0x5b8 (0x4)
	float StartWaitTime; // 0x5bc (0x4)
	float StartShrinkTime; // 0x5c0 (0x4)
	float FinishShrinkTime; // 0x5c4 (0x4)
	float FinishDestroyTime; // 0x5c8 (0x4)
	float AudioLowPassValue; // 0x5cc (0x4)
	float AudioPitchMod; // 0x5d0 (0x4)
	float AudioCrossfade; // 0x5d4 (0x4)
	class UCurveFloat* MovementAudioCrossfadeCurve; // 0x5d8 (0x8)
	class UCurveFloat* MovementAudioPitchModCurve; // 0x5e0 (0x8)
	class UCurveFloat* ClockTickingAudioVolumeCurve; // 0x5e8 (0x8)
	class UCurveFloat* ClockTickingAudioPitchCurve; // 0x5f0 (0x8)
	class UAudioComponent* ShieldBoundaryAudio; // 0x5f8 (0x8)
	class UAudioComponent* HoldingAudio; // 0x600 (0x8)
	class UAudioComponent* HoldingTickAudio; // 0x608 (0x8)
	class AFortVolume* SpawnVolume; // 0x610 (0x8)
	unsigned char padding_618[0x8]; // 0x618 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeStormShield.SetGamePhaseStep (Underlying native function: SetGamePhaseStep 0x87b69b4)
	void SetGamePhaseStep(enum EAthenaGamePhaseStep& NewGamePhaseStep); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeStormShield.OnRep_GamePhaseStep (Underlying native function: OnRep_GamePhaseStep 0x87b5c04)
	void OnRepGamePhaseStep(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeStormShield.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x87b5a40)
	void OnGamePhaseStepChanged(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeStormShield.GetServerTime (Underlying native function: GetServerTime 0x87b3170)
	float GetServerTime(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeStormShield.BP_OnTargetRadiusReached (Has no native function)
	void BPOnTargetRadiusReached(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeStormShield.BP_OnRep_GamePhaseStep (Has no native function)
	void BPOnRepGamePhaseStep(); // (Event | Protected | BlueprintEvent)
};

