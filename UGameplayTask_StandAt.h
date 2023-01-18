// Class /Script/GameplayInteractionsModule.GameplayTask_StandAt
// Size: 0x128
class UGameplayTask_StandAt : public UGameplayTask
{
	unsigned char unreflected_60[0x8]; // 0x60 (0x8) 
	struct FMulticastInlineDelegate OnRequestFailed; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnCompleted; // 0x78 (0x10)
	unsigned char unreflected_88[0x98]; // 0x88 (0x98) 
	class UCharacterMovementComponent* MovementComponent; // 0x120 (0x8)

	/* Functions */

	// Function /Script/GameplayInteractionsModule.GameplayTask_StandAt.StandAt (Underlying native function: StandAt 0x7f1d070)
	static class UGameplayTask_StandAt* StandAt(class APawn*& Pawn, float& Duration); // (Final | Native | Static | Public | BlueprintCallable)
};

