// Class /Script/FortniteGame.FortGameplayCueNotifyLoop_Swinging
// Size: 0xa28
class AFortGameplayCueNotifyLoop_Swinging : public AFortGameplayCueNotify_Loop
{
	class UFortLayeredAudioComponent* LayeredAudioComp; // 0x960 (0x8)
	struct FSwingingAudioParamDataMapRange AngleParam; // 0x968 (0x28)
	struct FSwingingAudioParamDataMapRange LengthParam; // 0x990 (0x28)
	struct FSwingingAudioParamDataMapRange SpeedParam; // 0x9b8 (0x28)
	struct FSwingingAudioParamData AttachedParam; // 0x9e0 (0x4)
	struct FSwingingAudioParamData SkiddingParam; // 0x9e4 (0x4)
	struct FSwingingAudioParamDataMapRange WaterImmersionParam; // 0x9e8 (0x28)
	struct FGameplayTag SkiddingTag; // 0xa10 (0x4)
	unsigned char unreflected_a14[0x4]; // 0xa14 (0x4) 
	class AFortPlayerPawn* PlayerPawn; // 0xa18 (0x8)
	bool bCanUpdateParameters; // 0xa20 (0x1)
	unsigned char padding_a21[0x7]; // 0xa21 (0x7)
};

