// Class /Script/FortniteGame.FortGameplayCueNotifyAthena_FallDamageImmunity
// Size: 0x9a8
class AFortGameplayCueNotifyAthena_FallDamageImmunity : public AFortGameplayCueNotify_Loop
{
	class UFortLayeredAudioComponent* FortLayeredAudioComponent; // 0x960 (0x8)
	struct FName LayeredAudioVelocityName; // 0x968 (0x4)
	unsigned char unreflected_96c[0x4]; // 0x96c (0x4) 
	struct FVector2D ZVelocityInput; // 0x970 (0x10)
	struct FVector2D ZVelocityOutput; // 0x980 (0x10)
	float LayeredAudioFadeInDuration; // 0x990 (0x4)
	float LayeredAudioFadeOutDuration; // 0x994 (0x4)
	class USoundBase* RemovalSound; // 0x998 (0x8)
	class AFortPlayerPawn* TargetPlayerPawn; // 0x9a0 (0x8)
};

