// Class /Script/FortniteAI.AthenaAISettings
// Size: 0xa0
class UAthenaAISettings : public UDataAsset
{
	unsigned char bAllowAIDirector; // 0x30 (0x1)
	unsigned char bAllowAIGoalManager; // 0x30 (0x1)
	unsigned char bForceRVOUse; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float MaxPlayerSpeedScaleFootstepSounds; // 0x34 (0x4)
	float MinFootstepHearingRange; // 0x38 (0x4)
	float MaxFootstepHearingRange; // 0x3c (0x4)
	float DamagedHearingRange; // 0x40 (0x4)
	float CrouchHearingModifier; // 0x44 (0x4)
	float MaxNPCHearingRange; // 0x48 (0x4)
	float MaxPerceptualStimuliAge; // 0x4c (0x4)
	float DeAggroRange; // 0x50 (0x4)
	float ReducedDeAggroRange; // 0x54 (0x4)
	float DurationReduceAggroLimits; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	class UClass* NavigationSystemConfig; // 0x60 (0x8)
	struct TWeakObjectPtr<class UAthenaAISettingsAIDIrectorLOD> AIDIrectorLOD; // 0x68 (0x28)
	struct TArray<class UClass*> AIServices; // 0x90 (0x10)
};

