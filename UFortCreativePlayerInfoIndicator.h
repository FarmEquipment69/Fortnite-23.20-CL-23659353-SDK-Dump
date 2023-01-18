// Class /Script/FortniteUI.FortCreativePlayerInfoIndicator
// Size: 0x408
class UFortCreativePlayerInfoIndicator : public UFortActorIndicatorWidget
{
	struct FVector RelativeLocationWhileDBNO; // 0x378 (0x18)
	struct FVector RelativeLocationWhileAlive; // 0x390 (0x18)
	struct FVector2D ScreenSpaceOffsetToScale; // 0x3a8 (0x10)
	struct TArray<enum EFortMinigameState> ValidMinigameTypesToShowIndicator; // 0x3b8 (0x10)
	bool bKeepTargetUntilNewValidTarget; // 0x3c8 (0x1)
	unsigned char unreflected_3c9[0x7]; // 0x3c9 (0x7) 
	class UImage* ImageHealthBar; // 0x3d0 (0x8)
	class UImage* ImageShieldBar; // 0x3d8 (0x8)
	class UImage* ImageDBNOBar; // 0x3e0 (0x8)
	class AFortPlayerStateAthena* TrackedPlayerState; // 0x3e8 (0x8)
	unsigned char padding_3f0[0x18]; // 0x3f0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePlayerInfoIndicator.HandlePlayerExitedVolume (Underlying native function: HandlePlayerExitedVolume 0xa6927ac)
	void HandlePlayerExitedVolume(class APlayerState*& Client, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativePlayerInfoIndicator.HandlePlayerEnteredVolume (Underlying native function: HandlePlayerEnteredVolume 0xa6926e8)
	void HandlePlayerEnteredVolume(class APlayerState*& Client, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativePlayerInfoIndicator.HandleMinigameStateChanged (Underlying native function: HandleMinigameStateChanged 0xa692344)
	void HandleMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativePlayerInfoIndicator.HandleIndicatorRulesChanged (Underlying native function: HandleIndicatorRulesChanged 0xa6922c8)
	void HandleIndicatorRulesChanged(enum EPlayerIndicatorDisplayMode& DisplayMode); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativePlayerInfoIndicator.HandleHitPointsChanged (Underlying native function: HandleHitPointsChanged 0xa691fec)
	void HandleHitPointsChanged(class AFortPlayerState*& PlayerState, float& Health, float& HealthMax, float& Shield, float& ShieldMax); // (Final | Native | Private)
};

