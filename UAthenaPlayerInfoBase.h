// Class /Script/FortniteUI.AthenaPlayerInfoBase
// Size: 0x4a0
class UAthenaPlayerInfoBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0xd8]; // 0x2d0 (0xd8) 
	struct TWeakObjectPtr<class AFortPlayerStateAthena> WeakPSA; // 0x3a8 (0x8)
	bool bIsLocalPlayer; // 0x3b0 (0x1)
	unsigned char unreflected_3b1[0x3]; // 0x3b1 (0x3) 
	struct FSlateColor ColorPlayerNameAlive; // 0x3b4 (0x14)
	struct FSlateColor ColorPlayerNameDead; // 0x3c8 (0x14)
	struct FSlateColor ColorPlayerNameDisconnected; // 0x3dc (0x14)
	class UOverlay* OverlayTeamMemberInfo; // 0x3f0 (0x8)
	class UImage* ImageHealthBar; // 0x3f8 (0x8)
	class UImage* ImageShieldBar; // 0x400 (0x8)
	class UContentWidget* ContentStormCN; // 0x408 (0x8)
	class UImage* ImageStormCN; // 0x410 (0x8)
	class UImage* ImageDBNOBar; // 0x418 (0x8)
	class UImage* ImagePlatformIcon; // 0x420 (0x8)
	class UCommonTextBlock* TextPlayerName; // 0x428 (0x8)
	class UImage* ImageMarker; // 0x430 (0x8)
	class UAthenaTeamMemberDBNOState* DBNOStateWidget; // 0x438 (0x8)
	class UImage* ImageDeadIndicator; // 0x440 (0x8)
	class UImage* ImageDisconnectedIndicator; // 0x448 (0x8)
	class UImage* ImageResurrectChip; // 0x450 (0x8)
	class UImage* ImageResurrectionChipExpirationBar; // 0x458 (0x8)
	class UCommonWidgetSwitcherLegacy* WidgetSwitcherAvatar; // 0x460 (0x8)
	class UFortSocialAvatarIcon* IconAvatarSocial; // 0x468 (0x8)
	class UImage* ImageAvatarOverride; // 0x470 (0x8)
	class UFortVoiceChatStatusIconProxyAnim* SpeakerWidgetAnim; // 0x478 (0x8)
	class UAthenaLevelEffects* LevelEffects; // 0x480 (0x8)
	class UOverlay* OverlayHealthAndShieldInfo; // 0x488 (0x8)
	unsigned char padding_490[0x10]; // 0x490 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.SetPlayerState (Underlying native function: SetPlayerState 0xa4b0c1c)
	void SetPlayerState(class AFortPlayerStateAthena*& InPlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.HandlePlaylistLoaded (Underlying native function: HandlePlaylistLoaded 0xa4afc3c)
	void HandlePlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.HandlePlayerMutatorDataChanged (Underlying native function: HandlePlayerMutatorDataChanged 0xa4afb58)
	void HandlePlayerMutatorDataChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0xa4af6cc)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandleTalkingVisualDisplayChanged (Has no native function)
	void BPHandleTalkingVisualDisplayChanged(bool& bTalkingVisualsActive); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandleTalkingStateChanged (Has no native function)
	void BPHandleTalkingStateChanged(bool& bIsTalking); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandleSeasonLevelUIDisplayChanged (Has no native function)
	void BPHandleSeasonLevelUIDisplayChanged(int& Level); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandleResurrectionStateChanged (Has no native function)
	void BPHandleResurrectionStateChanged(struct FFortResurrectionUIData& ResurrectionStateData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandlePlaylistLoaded (Has no native function)
	void BPHandlePlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandlePlaylistExtensionWidgetCreated (Has no native function)
	void BPHandlePlaylistExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandlePlayerNameReplicated (Has no native function)
	void BPHandlePlayerNameReplicated(struct FString& PlayerName); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandleMutedStateChanged (Has no native function)
	void BPHandleMutedStateChanged(bool& bIsMuted); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandleIsBeingRevivedStateChanged (Has no native function)
	void BPHandleIsBeingRevivedStateChanged(bool& bIsTalking); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandleGameModeIconChanged (Has no native function)
	void BPHandleGameModeIconChanged(class UTexture2D*& GameModeIcon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerInfoBase.BP_HandleDBNOStateChanged (Has no native function)
	void BPHandleDBNOStateChanged(bool& bDBNO); // (Event | Protected | BlueprintEvent)
};

