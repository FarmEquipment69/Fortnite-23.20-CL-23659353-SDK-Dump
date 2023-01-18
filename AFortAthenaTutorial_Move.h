// Class /Script/FortniteGame.FortAthenaTutorial_Move
// Size: 0x380
class AFortAthenaTutorial_Move : public AFortAthenaTutorialBase
{
	class AFortAthenaTutorialMarker* JumpMarker; // 0x2f0 (0x8)
	class AFortAthenaTutorialMarker* JumpArrows; // 0x2f8 (0x8)
	class ATriggerBox* JumpTriggerBox; // 0x300 (0x8)
	class ATriggerBox* JumpEndTriggerBox; // 0x308 (0x8)
	class AFortAthenaTutorialMarker* CrouchMarker; // 0x310 (0x8)
	class AFortAthenaTutorialMarker* CrouchArrows; // 0x318 (0x8)
	class ATriggerBox* CrouchTriggerBox; // 0x320 (0x8)
	class ATriggerBox* CrouchEndTriggerBox; // 0x328 (0x8)
	class AFortStaticMeshActor* BlockerJump; // 0x330 (0x8)
	class AFortStaticMeshActor* BlockerCrouch; // 0x338 (0x8)
	struct FGameplayTagContainer JumpHUDElementTags; // 0x340 (0x20)
	struct FGameplayTagContainer CrouchHUDElementTags; // 0x360 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Move.OnBeginOverlapJumpTriggerBox (Underlying native function: OnBeginOverlapJumpTriggerBox 0x856e078)
	void OnBeginOverlapJumpTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Move.OnBeginOverlapJumpEndTriggerBox (Underlying native function: OnBeginOverlapJumpEndTriggerBox 0x856e200)
	void OnBeginOverlapJumpEndTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Move.OnBeginOverlapCrouchTriggerBox (Underlying native function: OnBeginOverlapCrouchTriggerBox 0x856e388)
	void OnBeginOverlapCrouchTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Move.OnBeginOverlapCrouchEndTriggerBox (Underlying native function: OnBeginOverlapCrouchEndTriggerBox 0x856e2c4)
	void OnBeginOverlapCrouchEndTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)
};

