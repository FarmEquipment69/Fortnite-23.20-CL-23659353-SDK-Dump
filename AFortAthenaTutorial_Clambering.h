// Class /Script/FortniteGame.FortAthenaTutorial_Clambering
// Size: 0x338
class AFortAthenaTutorial_Clambering : public AFortAthenaTutorialBase
{
	class AFortAthenaTutorialMarker* ClamberMarker; // 0x2f0 (0x8)
	class AFortAthenaTutorialMarker* ClamberArrows; // 0x2f8 (0x8)
	class ATriggerBox* ClamberTriggerBox; // 0x300 (0x8)
	class ATriggerBox* ClamberEndTriggerBox; // 0x308 (0x8)
	struct FGameplayTagContainer ClamberHUDElementTags; // 0x310 (0x20)
	struct FGameplayTag TagDisableClambering; // 0x330 (0x4)
	unsigned char padding_334[0x4]; // 0x334 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Clambering.OnBeginOverlapClamberTriggerBox (Underlying native function: OnBeginOverlapClamberTriggerBox 0x856e078)
	void OnBeginOverlapClamberTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Clambering.OnBeginOverlapClamberEndTriggerBox (Underlying native function: OnBeginOverlapClamberEndTriggerBox 0x856e200)
	void OnBeginOverlapClamberEndTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)
};

