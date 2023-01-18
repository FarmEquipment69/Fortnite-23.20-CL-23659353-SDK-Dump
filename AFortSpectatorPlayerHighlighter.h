// Class /Script/FortniteGame.FortSpectatorPlayerHighlighter
// Size: 0x2a0
class AFortSpectatorPlayerHighlighter : public AActor
{
	class UStaticMeshComponent* CustomDepthOutlineMesh; // 0x288 (0x8)
	class AFortPlayerStateAthena* HighlightedPlayerState; // 0x290 (0x8)
	bool bBeingFollowedBySpectatorCam; // 0x298 (0x1)
	bool bFirstPlaceHighlightEnabled; // 0x299 (0x1)
	enum EAttachmentRule HighlightedPlayerLocationAttachmentRule; // 0x29a (0x1)
	enum EAttachmentRule HighlightedPlayerRotationAttachmentRule; // 0x29b (0x1)
	enum EAttachmentRule HighlightedPlayerScaleAttachmentRule; // 0x29c (0x1)
	unsigned char padding_29d[0x3]; // 0x29d (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.SpectatorCameraTypeChanged (Has no native function)
	void SpectatorCameraTypeChanged(enum ESpectatorCameraType& NewCameraType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.ShouldBeVisible (Underlying native function: ShouldBeVisible 0x8e81e18)
	bool ShouldBeVisible(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.PlayerTeamColorChanged (Has no native function)
	void PlayerTeamColorChanged(struct FLinearColor& TeamColor); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.HighlightedPlayerPawnChanged (Has no native function)
	void HighlightedPlayerPawnChanged(class AFortPlayerPawn*& NewPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.HandleSpectatorCameraTypeChanged (Underlying native function: HandleSpectatorCameraTypeChanged 0x8e7f12c)
	void HandleSpectatorCameraTypeChanged(class AFortPlayerControllerSpectating*& SpectatorPC, enum ESpectatorCameraType& NewCameraType); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.HandlePlayerOutlinesEnabledChanged (Underlying native function: HandlePlayerOutlinesEnabledChanged 0x8e7f0a8)
	void HandlePlayerOutlinesEnabledChanged(bool& bOutlinesEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.HandleHighlightedPlayerPawnChanged (Underlying native function: HandleHighlightedPlayerPawnChanged 0x8e7f094)
	void HandleHighlightedPlayerPawnChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.HandleHighlightedPlayerDisconnectedChanged (Underlying native function: HandleHighlightedPlayerDisconnectedChanged 0x8e7efcc)
	void HandleHighlightedPlayerDisconnectedChanged(class AFortPlayerStateAthena*& InPlayerState, bool& bInIsDisconnected); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.HandleHighlightedPlayerDeadStateChanged (Underlying native function: HandleHighlightedPlayerDeadStateChanged 0x8e7efcc)
	void HandleHighlightedPlayerDeadStateChanged(class AFortPlayerStateAthena*& InPlayerState, bool& bInIsDead); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.HandleFollowedPlayerChanged (Underlying native function: HandleFollowedPlayerChanged 0x8e7ef08)
	void HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.HandleFirstPlaceHighlightEnabledChanged (Underlying native function: HandleFirstPlaceHighlightEnabledChanged 0x8e7ee88)
	void HandleFirstPlaceHighlightEnabledChanged(bool& bFirstPlaceHighlightEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.GetCurrentSpectatorCameraType (Underlying native function: GetCurrentSpectatorCameraType 0x8e7e3d4)
	enum ESpectatorCameraType GetCurrentSpectatorCameraType(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.FirstPlaceHighlightEnabledChanged (Has no native function)
	void FirstPlaceHighlightEnabledChanged(bool& bInFirstPlaceHighlightEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpectatorPlayerHighlighter.BeingFollowedBySpectatorCamChanged (Has no native function)
	void BeingFollowedBySpectatorCamChanged(bool& bInBeingFollowedBySpectatorCam); // (Event | Protected | BlueprintEvent)
};

