// Class /Script/FortniteGame.GameplayCueNotify_Jetpack_FuelRegen
// Size: 0x488
class AGameplayCueNotify_Jetpack_FuelRegen : public AFortGameplayCueNotify_Looping
{
	struct TWeakObjectPtr<class AFortPlayerPawn> FortPlayerPawn; // 0x368 (0x8)
	unsigned char bAudioEnabled; // 0x370 (0x1)
	unsigned char unreflected_371[0x7]; // 0x371 (0x7) 
	class UAudioComponent* OnFuelRegenRampComponent; // 0x378 (0x8)
	float FuelRegenRampVolumeMultiplier; // 0x380 (0x4)
	unsigned char unreflected_384[0x4]; // 0x384 (0x4) 
	struct FGameplayAttribute FuelAttribute; // 0x388 (0x38)
	struct FGameplayAttribute FuelMaxAttribute; // 0x3c0 (0x38)
	struct FGameplayAttribute ReserveFuelAttribute; // 0x3f8 (0x38)
	struct FGameplayAttribute ReserveFuelMaxAttribute; // 0x430 (0x38)
	class USoundBase* SoundOnFuelChangeRamp; // 0x468 (0x8)
	class USoundBase* SoundOnFuelRecharged; // 0x470 (0x8)
	class UCurveFloat* FuelRegenRampVolumeCurve; // 0x478 (0x8)
	unsigned char padding_480[0x8]; // 0x480 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.GameplayCueNotify_Jetpack_FuelRegen.ResetBlink (Underlying native function: ResetBlink 0x8142ab4)
	void ResetBlink(class AFortPlayerPawn*& PlayerPawn); // (Native | Event | Protected | BlueprintEvent)
};

