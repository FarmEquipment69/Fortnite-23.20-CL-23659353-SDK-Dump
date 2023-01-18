// Class /Script/VerseAIBase.AIComponentBase
// Size: 0xd8
class UAIComponentBase : public UEntityEnableableComponent
{
	unsigned char unreflected_80[0x40]; // 0x80 (0x40) 
	class AFortPawn* CachedPawn; // 0xc0 (0x8)
	class AAIController* CachedAIController; // 0xc8 (0x8)
	unsigned char padding_d0[0x8]; // 0xd0 (0x8)

	/* Functions */

	// Function /Script/VerseAIBase.AIComponentBase.OnPossessedPawnChanged (Underlying native function: OnPossessedPawnChanged 0x7216804)
	void OnPossessedPawnChanged(class APawn*& OldPawn, class APawn*& NewPawn); // (Final | Native | Protected)

	// Function /Script/VerseAIBase.AIComponentBase.OnControllerEndPlay (Underlying native function: OnControllerEndPlay 0x7216694)
	void OnControllerEndPlay(class AActor*& InSource, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Protected)
};

