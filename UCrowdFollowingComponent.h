// Class /Script/AIModule.CrowdFollowingComponent
// Size: 0x308
class UCrowdFollowingComponent : public UPathFollowingComponent
{
	unsigned char unreflected_2b8[0x18]; // 0x2b8 (0x18) 
	struct FVector CrowdAgentMoveDirection; // 0x2d0 (0x18)
	unsigned char padding_2e8[0x20]; // 0x2e8 (0x20)

	/* Functions */

	// Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering (Underlying native function: SuspendCrowdSteering 0xa1db13c)
	void SuspendCrowdSteering(bool& bSuspend); // (Native | Public | BlueprintCallable)
};

