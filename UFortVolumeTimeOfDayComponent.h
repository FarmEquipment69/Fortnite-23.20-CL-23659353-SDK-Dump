// Class /Script/FortniteGame.FortVolumeTimeOfDayComponent
// Size: 0x178
class UFortVolumeTimeOfDayComponent : public UActorComponent
{
	bool bUseEditorOverrideData; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	float TimeOverride; // 0xa4 (0x4)
	float SpeedOverride; // 0xa8 (0x4)
	bool bOverrideLightIntensity; // 0xac (0x1)
	unsigned char unreflected_ad[0x3]; // 0xad (0x3) 
	float LightIntensityOverride; // 0xb0 (0x4)
	bool bOverrideLightColor; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	struct FLinearColor LightColorOverride; // 0xb8 (0x10)
	bool bOverrideFogDensity; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float FogDensityOverride; // 0xcc (0x4)
	bool bOverrideFogColor; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x3]; // 0xd1 (0x3) 
	struct FLinearColor FogColorOverride; // 0xd4 (0x10)
	bool bOverridePostProcess; // 0xe4 (0x1)
	unsigned char unreflected_e5[0x3]; // 0xe5 (0x3) 
	unsigned char PostProcessOverride_e8[0x8]; // 0xe8 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	struct TWeakObjectPtr<class UClass> OverrideTODClass; // 0xf0 (0x28)
	bool bSplitscreenUseOverrideTODClass; // 0x118 (0x1)
	bool bDirectlyTrackLocalViewTarget; // 0x119 (0x1)
	bool bDirectlyTrackLocalCameraPosition; // 0x11a (0x1)
	unsigned char unreflected_11b[0x1]; // 0x11b (0x1) 
	float LocalTrackingTickRate; // 0x11c (0x4)
	float LocalTrackingOverlapRadius; // 0x120 (0x4)
	unsigned char unreflected_124[0x34]; // 0x124 (0x34) 
	struct TScriptInterface<class IFortTimeOfDayManagerInterface> TimeOfDayManager; // 0x158 (0x10)
	struct FFortVolumeTimeOfDayConfig TimeOfDayConfig; // 0x168 (0x1)
	bool bIsOverridingTimeOfDay; // 0x169 (0x1)
	unsigned char padding_16a[0xe]; // 0x16a (0xe)

	/* Functions */

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.UpdateLocalTracking (Underlying native function: UpdateLocalTracking 0x89ea220)
	void UpdateLocalTracking(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.TryGetTimeOfDayManager (Underlying native function: TryGetTimeOfDayManager 0x89eb334)
	static struct TScriptInterface<class IFortTimeOfDayManagerInterface> TryGetTimeOfDayManager(class AActor*& TimeOfDayComponentOwner); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.SwitchToLocalTODManager (Underlying native function: SwitchToLocalTODManager 0x89eb264)
	void SwitchToLocalTODManager(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.SwitchToGlobalTODManager (Underlying native function: SwitchToGlobalTODManager 0x89eb250)
	void SwitchToGlobalTODManager(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.SpectatorFollowedPlayerChanged (Underlying native function: SpectatorFollowedPlayerChanged 0x89eb194)
	void SpectatorFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.OnRep_TimeOfDayManager (Underlying native function: OnRep_TimeOfDayManager 0x89ea938)
	void OnRepTimeOfDayManager(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.OnRep_TimeOfDayConfig (Underlying native function: OnRep_TimeOfDayConfig 0x89ea220)
	void OnRepTimeOfDayConfig(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.MutatorSettingsChanged (Underlying native function: MutatorSettingsChanged 0x84a7650)
	void MutatorSettingsChanged(struct FPropertyOverrideData& OverrideData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.HandleViewTargetChanged (Underlying native function: HandleViewTargetChanged 0x89ea220)
	void HandleViewTargetChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.GetTimeOfDayManager (Underlying native function: GetTimeOfDayManager 0x89e9a84)
	static struct TScriptInterface<class IFortTimeOfDayManagerInterface> GetTimeOfDayManager(class AActor*& TimeOfDayComponentOwner); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.CreateLocalTimeOfDayManager (Underlying native function: CreateLocalTimeOfDayManager 0x89e8cb4)
	void CreateLocalTimeOfDayManager(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.ApplyTimeOfDayComponentSettings (Underlying native function: ApplyTimeOfDayComponentSettings 0x89e871c)
	void ApplyTimeOfDayComponentSettings(bool& bShouldSwitch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeTimeOfDayComponent.ApplyInhibitorFogOverrides (Underlying native function: ApplyInhibitorFogOverrides 0x89e854c)
	void ApplyInhibitorFogOverrides(float& FogDensity, struct FLinearColor& FogColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

