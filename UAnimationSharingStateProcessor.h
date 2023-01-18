// Class /Script/AnimationSharing.AnimationSharingStateProcessor
// Size: 0x50
class UAnimationSharingStateProcessor : public UObject
{
	struct TWeakObjectPtr<class UEnum> AnimationStateEnum; // 0x28 (0x28)

	/* Functions */

	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState (Underlying native function: ProcessActorState 0x78027d0)
	void ProcessActorState(int& OutState, class AActor*& InActor, unsigned char& CurrentState, unsigned char& OnDemandState, bool& bShouldProcess); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum (Underlying native function: GetAnimationStateEnum 0x780270c)
	class UEnum* GetAnimationStateEnum(); // (Native | Event | Public | BlueprintEvent)
};

