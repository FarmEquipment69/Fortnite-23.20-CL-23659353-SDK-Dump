// Class /Script/FortniteGame.FortMediaEventsSubsystem
// Size: 0xd8
class UFortMediaEventsSubsystem : public UEngineSubsystem
{
	unsigned char unreflected_30[0x88]; // 0x30 (0x88) 
	struct FMulticastInlineDelegate OnMediaSourceSelected; // 0xb8 (0x10)
	struct FMulticastInlineDelegate MediaSourceReturn; // 0xc8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.ToggleFullScreenPiP (Underlying native function: ToggleFullScreenPiP 0x8970dec)
	void ToggleFullScreenPiP(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.SuspendExternalMediaControllers (Underlying native function: SuspendExternalMediaControllers 0x8970dd4)
	void SuspendExternalMediaControllers(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.SetHudAdEnabled (Underlying native function: SetHudAdEnabled 0x5d7e880)
	void SetHudAdEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.SetExternalMediaControllerEnabled (Underlying native function: SetExternalMediaControllerEnabled 0x8970844)
	void SetExternalMediaControllerEnabled(bool& InEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.ResumeExternalMediaControllers (Underlying native function: ResumeExternalMediaControllers 0x89707ac)
	void ResumeExternalMediaControllers(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.RequestExternalMediaControllerMediaSource (Underlying native function: RequestExternalMediaControllerMediaSource 0x89706b0)
	void RequestExternalMediaControllerMediaSource(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.IsHudAdEnabled (Underlying native function: IsHudAdEnabled 0x54493f0)
	bool IsHudAdEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.EnableFullScreenPiPOption (Underlying native function: EnableFullScreenPiPOption 0x896c278)
	void EnableFullScreenPiPOption(bool& bEnable); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.ClearStreamAssets (Underlying native function: ClearStreamAssets 0x896bef4)
	void ClearStreamAssets(struct FString& StreamAssetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.CanEnablePartnerPiP (Underlying native function: CanEnablePartnerPiP 0x896bebc)
	bool CanEnablePartnerPiP(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaEventsSubsystem.BroadcastStreamAssets (Underlying native function: BroadcastStreamAssets 0x896bd90)
	void BroadcastStreamAssets(struct FFortMediaEventsStreamAssets& InAssets); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

