// Class /Script/FortniteGame.FortItemLayerAnimInstance_Lobster
// Size: 0x4e0
class UFortItemLayerAnimInstance_Lobster : public UFortItemLayerAnimInstance
{
	struct FRotator RootRotationOffset; // 0x460 (0x18)
	struct TArray<struct FFortMeleeDeflectAnimData> MeleeDeflectAnimData; // 0x478 (0x10)
	class UAnimSequence* DeflectEntry1Anim; // 0x488 (0x8)
	class UAnimSequence* DeflectHold1Anim; // 0x490 (0x8)
	class UAnimSequence* DeflectExit1Anim; // 0x498 (0x8)
	class UAnimSequence* DeflectTransition12Anim; // 0x4a0 (0x8)
	class UAnimSequence* DeflectHold2Anim; // 0x4a8 (0x8)
	class UAnimSequence* DeflectExit2Anim; // 0x4b0 (0x8)
	class UAnimSequence* DeflectTransition21Anim; // 0x4b8 (0x8)
	int ActiveDeflectionIndex; // 0x4c0 (0x4)
	int NextDeflectionIndex; // 0x4c4 (0x4)
	bool bIsMeleeGuarding; // 0x4c8 (0x1)
	bool bIsMeleeDeflecting; // 0x4c9 (0x1)
	bool bIsMeleeDodging; // 0x4ca (0x1)
	bool bIsMeleeDodgingNorth; // 0x4cb (0x1)
	bool bIsMeleeDodgingSouth; // 0x4cc (0x1)
	bool bIsMeleeDodgingWest; // 0x4cd (0x1)
	bool bIsMeleeDodgingEast; // 0x4ce (0x1)
	unsigned char padding_4cf[0x11]; // 0x4cf (0x11)

	/* Functions */

	// Function /Script/FortniteGame.FortItemLayerAnimInstance_Lobster.AnimNotify_GuardLoopEntered (Underlying native function: AnimNotify_GuardLoopEntered 0x82455a0)
	void AnimNotifyGuardLoopEntered(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortItemLayerAnimInstance_Lobster.AnimNotify_DeflectHold2Entered (Underlying native function: AnimNotify_DeflectHold2Entered 0x8245494)
	void AnimNotifyDeflectHold2Entered(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortItemLayerAnimInstance_Lobster.AnimNotify_DeflectHold1Entered (Underlying native function: AnimNotify_DeflectHold1Entered 0x8245480)
	void AnimNotifyDeflectHold1Entered(); // (Final | Native | Public)
};

