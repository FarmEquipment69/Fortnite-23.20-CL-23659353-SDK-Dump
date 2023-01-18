// Class /Script/FortniteGame.FortGameplayCueNotifyLoop_SpookyMist
// Size: 0xb00
class AFortGameplayCueNotifyLoop_SpookyMist : public AFortGameplayCueNotify_Loop
{
	float InteractVisibility; // 0x960 (0x4)
	int HeadFXComponentIndex; // 0x964 (0x4)
	int BodyFXComponentIndex; // 0x968 (0x4)
	unsigned char unreflected_96c[0x4]; // 0x96c (0x4) 
	class UMaterialParameterCollection* MaterialParameterCollection; // 0x970 (0x8)
	struct FName RibbonsFXParameterName; // 0x978 (0x4)
	struct FName FriendlyFXParameterName; // 0x97c (0x4)
	struct FName SpookyMistModeMatParameterName; // 0x980 (0x4)
	struct FName MovementOpacityMatParameterName; // 0x984 (0x4)
	struct FName VelocityAudioParameterName; // 0x988 (0x4)
	struct FName FlashStartTimeMatParameterName; // 0x98c (0x4)
	float SpeedRibbonVelocityThreshold; // 0x990 (0x4)
	float WalkVisibilityVelocityThreshold; // 0x994 (0x4)
	float VisibilityLevelInterpSpeed; // 0x998 (0x4)
	unsigned char unreflected_99c[0x4]; // 0x99c (0x4) 
	struct FScalableFloat WalkVizMultiplier; // 0x9a0 (0x28)
	struct FScalableFloat SprintVizMultiplier; // 0x9c8 (0x28)
	struct FScalableFloat FriendlyVizMultiplier; // 0x9f0 (0x28)
	struct FScalableFloat ShadowPlaneOpacity; // 0xa18 (0x28)
	struct FScalableFloat Duration; // 0xa40 (0x28)
	struct FScalableFloat TellDuration; // 0xa68 (0x28)
	class USoundBase* ExpirationSound; // 0xa90 (0x8)
	float ExpirationSoundPeriod; // 0xa98 (0x4)
	float AudioVelocityInterpSpeed; // 0xa9c (0x4)
	float MinAudioRange; // 0xaa0 (0x4)
	float MaxAudioRange; // 0xaa4 (0x4)
	bool bShowExpireTell; // 0xaa8 (0x1)
	unsigned char unreflected_aa9[0x17]; // 0xaa9 (0x17) 
	class UPostProcessComponent* PostProcessComponent; // 0xac0 (0x8)
	class UTimelineComponent* InteractionTimelineComponent; // 0xac8 (0x8)
	class UParticleSystemComponent* HeadFX; // 0xad0 (0x8)
	class UParticleSystemComponent* BodyFX; // 0xad8 (0x8)
	unsigned char unreflected_ae0[0x10]; // 0xae0 (0x10) 
	struct TArray<class USkeletalMeshComponent*> PlayerSkeletalMeshes; // 0xaf0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotifyLoop_SpookyMist.ExpireWarningTick (Underlying native function: ExpireWarningTick 0x81408d0)
	void ExpireWarningTick(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayCueNotifyLoop_SpookyMist.ClearExpireTell (Underlying native function: ClearExpireTell 0x813f6b8)
	void ClearExpireTell(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayCueNotifyLoop_SpookyMist.BeginExpireTell (Underlying native function: BeginExpireTell 0x813eea4)
	void BeginExpireTell(); // (Final | Native | Protected)
};

