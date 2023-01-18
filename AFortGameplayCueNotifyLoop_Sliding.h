// Class /Script/FortniteGame.FortGameplayCueNotifyLoop_Sliding
// Size: 0x9f0
class AFortGameplayCueNotifyLoop_Sliding : public AFortGameplayCueNotify_Loop
{
	bool bCanUpdateParameters; // 0x960 (0x1)
	unsigned char unreflected_961[0x7]; // 0x961 (0x7) 
	struct FSlidingAudioParamData VelocityParam; // 0x968 (0x28)
	struct FSlidingAudioParamData SpeedlineVelocityParam; // 0x990 (0x28)
	struct FSlidingAudioParamData WaterImmersionParam; // 0x9b8 (0x28)
	class UFortLayeredAudioComponent* LayeredAudioComp; // 0x9e0 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0x9e8 (0x8)
};

