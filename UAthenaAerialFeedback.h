// Class /Script/FortniteUI.AthenaAerialFeedback
// Size: 0x340
class UAthenaAerialFeedback : public UFortAerialFeedback
{
	struct FGameplayTagContainer GliderRedeployTags; // 0x300 (0x20)
	struct FGameplayTag AirbagDeployTag; // 0x320 (0x4)
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	class UFortItemDefinition* AirbagItemDefinition; // 0x328 (0x8)
	unsigned char padding_330[0x10]; // 0x330 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaAerialFeedback.HandleSkydiveLeaderChanged (Underlying native function: HandleSkydiveLeaderChanged 0xa50a248)
	void HandleSkydiveLeaderChanged(bool& bEnabled, bool& bLocal, class AFortPlayerState*& LeaderPlayerState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAerialFeedback.HandleKeybindsChanged (Underlying native function: HandleKeybindsChanged 0xa509a00)
	void HandleKeybindsChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAerialFeedback.HandleBalloonMovementChanged (Underlying native function: HandleBalloonMovementChanged 0xa5094d4)
	void HandleBalloonMovementChanged(bool& bUsingBalloonMovement); // (Final | Native | Private)
};

