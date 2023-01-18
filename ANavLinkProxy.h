// Class /Script/AIModule.NavLinkProxy
// Size: 0x2d8
class ANavLinkProxy : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	struct TArray<struct FNavigationLink> PointLinks; // 0x298 (0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x2a8 (0x10)
	class UNavLinkCustomComponent* SmartLinkComp; // 0x2b8 (0x8)
	bool bSmartLinkIsRelevant; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x7]; // 0x2c1 (0x7) 
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x2c8 (0x10)

	/* Functions */

	// Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled (Underlying native function: SetSmartLinkEnabled 0xa1db0b8)
	void SetSmartLinkEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.NavLinkProxy.ResumePathFollowing (Underlying native function: ResumePathFollowing 0xa1dade0)
	void ResumePathFollowing(class AActor*& Agent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached (Has no native function)
	void ReceiveSmartLinkReached(class AActor*& Agent, struct FVector& Destination); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled (Underlying native function: IsSmartLinkEnabled 0xa1da520)
	bool IsSmartLinkEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.NavLinkProxy.HasMovingAgents (Underlying native function: HasMovingAgents 0xa1da4f4)
	bool HasMovingAgents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

