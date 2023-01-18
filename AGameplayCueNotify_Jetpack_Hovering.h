// Class /Script/FortniteGame.GameplayCueNotify_Jetpack_Hovering
// Size: 0xaa0
class AGameplayCueNotify_Jetpack_Hovering : public AFortGameplayCueNotify_Loop
{
	unsigned char unreflected_960[0x8]; // 0x960 (0x8) 
	bool bUsesFuel; // 0x968 (0x1)
	unsigned char unreflected_969[0x7]; // 0x969 (0x7) 
	class UCurveFloat* OutOfFuelAudioCurve; // 0x970 (0x8)
	class UAudioComponent* AccelAudioComp; // 0x978 (0x8)
	class UAudioComponent* IdleAudioComp; // 0x980 (0x8)
	class UAudioComponent* OutOfFuelAudioComp; // 0x988 (0x8)
	class UParticleSystemComponent* ParticleSystemComp; // 0x990 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0x998 (0x8)
	float ActivationTime; // 0x9a0 (0x4)
	float UpwardVelocity; // 0x9a4 (0x4)
	float FuelVolumeMultiplier; // 0x9a8 (0x4)
	bool bPlayedFuelWarning; // 0x9ac (0x1)
	unsigned char unreflected_9ad[0x3]; // 0x9ad (0x3) 
	struct FGameplayAttribute FuelAttribute; // 0x9b0 (0x38)
	struct FGameplayAttribute MaxFuelAttribute; // 0x9e8 (0x38)
	struct FGameplayAttribute UpwardThrustAttribute; // 0xa20 (0x38)
	struct FTimerHandle* GroundFXTimerHandle; // 0xa58 (0x8)
	struct TArray<float> BeepTimes; // 0xa60 (0x10)
	class USoundBase* SoundOnFuelLowWarning; // 0xa70 (0x8)
	unsigned char unreflected_a78[0x8]; // 0xa78 (0x8) 
	class UFortSoundIndicatorComponent* SoundIndicatorComponent; // 0xa80 (0x8)
	class USoundBase* SoundOnThrust; // 0xa88 (0x8)
	unsigned char padding_a90[0x10]; // 0xa90 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.GameplayCueNotify_Jetpack_Hovering.TryToPlayGroundEffects (Has no native function)
	void TryToPlayGroundEffects(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.GameplayCueNotify_Jetpack_Hovering.PlayLowFuelWarning (Has no native function)
	void PlayLowFuelWarning(); // (Event | Protected | BlueprintEvent)
};

