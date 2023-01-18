// ScriptStruct /Script/FortniteGame.FortPOIAmbientAudioOneShot
// Size: 0x58
struct FFortPOIAmbientAudioOneShot
{
	struct TWeakObjectPtr<class USoundBase> OneShotSound; // 0x0 (0x28)
	struct FVector2D RetriggerTimeRange; // 0x28 (0x10)
	struct FVector2D TriggerDistanceRange; // 0x38 (0x10)
	struct TArray<enum EFortDayPhase> AllowedDayPhases; // 0x48 (0x10)
};

