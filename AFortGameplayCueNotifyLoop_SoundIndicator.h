// Class /Script/FortniteGame.FortGameplayCueNotifyLoop_SoundIndicator
// Size: 0x9a0
class AFortGameplayCueNotifyLoop_SoundIndicator : public AFortGameplayCueNotify_Loop
{
	enum EFortSoundIndicatorTypes SoundIndicatorType; // 0x960 (0x1)
	unsigned char unreflected_961[0x7]; // 0x961 (0x7) 
	class USoundBase* SoundBaseCue; // 0x968 (0x8)
	float SoundIndicatorMaxDistance; // 0x970 (0x4)
	unsigned char unreflected_974[0x4]; // 0x974 (0x4) 
	struct TArray<struct TEnumAsByte<EFortTeamAffiliation>> ShowAffiliations; // 0x978 (0x10)
	class UTexture* SoundIndicatorIconOverride; // 0x988 (0x8)
	struct FLinearColor SoundIndicatorTintOverride; // 0x990 (0x10)
};

