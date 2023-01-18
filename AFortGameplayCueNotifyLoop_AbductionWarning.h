// Class /Script/FortniteGame.FortGameplayCueNotifyLoop_AbductionWarning
// Size: 0x9b0
class AFortGameplayCueNotifyLoop_AbductionWarning : public AFortGameplayCueNotify_Loop
{
	float MaxDistance; // 0x960 (0x4)
	struct FName VariableName; // 0x964 (0x4)
	struct FName PlayerSocket; // 0x968 (0x4)
	unsigned char unreflected_96c[0x4]; // 0x96c (0x4) 
	class AActor* TargetActor; // 0x970 (0x8)
	class UFXSystemComponent* WarningFXSystemComponent; // 0x978 (0x8)
	class UNiagaraComponent* WarningFXNiagaraComponent; // 0x980 (0x8)
	struct FVector WarningFXOriginLocation; // 0x988 (0x18)
	class UAudioComponent* WarningAudioComponent; // 0x9a0 (0x8)
	class AActor* RadialForceLoop; // 0x9a8 (0x8)
};

