// Class /Script/FortniteGame.FortAthenaMutator_JumpPenalty
// Size: 0x3c0
class AFortAthenaMutator_JumpPenalty : public AFortAthenaMutator
{
	bool bApplyJumpPenalty; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	struct FScalableFloat bOverridePenalties; // 0x338 (0x28)
	struct TArray<struct FAthenaJumpPenalty*> Penalties; // 0x360 (0x10)
	struct FScalableFloat bOverrideResetTime; // 0x370 (0x28)
	struct FScalableFloat ResetTime; // 0x398 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_JumpPenalty.OnFortPawnChanged (Underlying native function: OnFortPawnChanged 0x84cf848)
	void OnFortPawnChanged(class AFortPawn*& NewPawn); // (Final | Native | Private)
};

