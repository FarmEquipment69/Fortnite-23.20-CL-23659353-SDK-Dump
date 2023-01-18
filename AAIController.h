// Class /Script/AIModule.AIController
// Size: 0x3b0
class AAIController : public AController
{
	unsigned char unreflected_320[0x38]; // 0x320 (0x38) 
	unsigned char bStartAILogicOnPossess; // 0x358 (0x1)
	unsigned char bStopAILogicOnUnposses; // 0x358 (0x1)
	unsigned char bLOSflag; // 0x358 (0x1)
	unsigned char bSkipExtraLOSChecks; // 0x358 (0x1)
	unsigned char bAllowStrafe; // 0x358 (0x1)
	unsigned char bWantsPlayerState; // 0x358 (0x1)
	unsigned char bSetControlRotationFromPawnOrientation; // 0x358 (0x1)
	unsigned char unreflected_359[0x7]; // 0x359 (0x7) 
	class UPathFollowingComponent* PathFollowingComponent; // 0x360 (0x8)
	class UBrainComponent* BrainComponent; // 0x368 (0x8)
	class UAIPerceptionComponent* PerceptionComponent; // 0x370 (0x8)
	class UPawnActionsComponent* ActionsComp; // 0x378 (0x8)
	class UBlackboardComponent* Blackboard; // 0x380 (0x8)
	class UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x388 (0x8)
	class UClass* DefaultNavigationFilterClass; // 0x390 (0x8)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x398 (0x10)
	unsigned char padding_3a8[0x8]; // 0x3a8 (0x8)

	/* Functions */

	// Function /Script/AIModule.AIController.UseBlackboard (Underlying native function: UseBlackboard 0xa17ee58)
	bool UseBlackboard(class UBlackboardData*& BlackboardAsset, class UBlackboardComponent*& BlackboardComponent); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.AIController.UnclaimTaskResource (Underlying native function: UnclaimTaskResource 0xa17edd8)
	void UnclaimTaskResource(class UClass*& ResourceClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIController.SetPathFollowingComponent (Underlying native function: SetPathFollowingComponent 0x86e9e68)
	void SetPathFollowingComponent(class UPathFollowingComponent*& NewPFComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIController.SetMoveBlockDetection (Underlying native function: SetMoveBlockDetection 0xa17ed54)
	void SetMoveBlockDetection(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIController.RunBehaviorTree (Underlying native function: RunBehaviorTree 0xa17ecc0)
	bool RunBehaviorTree(class UBehaviorTree*& BTAsset); // (Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIController.OnUsingBlackBoard (Has no native function)
	void OnUsingBlackBoard(class UBlackboardComponent*& BlackboardComp, class UBlackboardData*& BlackboardAsset); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed (Underlying native function: OnGameplayTaskResourcesClaimed 0xa17eb34)
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet& NewlyClaimed, struct FGameplayResourceSet& FreshlyReleased); // (Native | Public)

	// Function /Script/AIModule.AIController.MoveToLocation (Underlying native function: MoveToLocation 0xa17e8a8)
	struct TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(struct FVector& Dest, float& AcceptanceRadius, bool& bStopOnOverlap, bool& bUsePathfinding, bool& bProjectDestinationToNavigation, bool& bCanStrafe, class UClass*& FilterClass, bool& bAllowPartialPath); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.AIController.MoveToActor (Underlying native function: MoveToActor 0xa17e674)
	struct TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor*& Goal, float& AcceptanceRadius, bool& bStopOnOverlap, bool& bUsePathfinding, bool& bCanStrafe, class UClass*& FilterClass, bool& bAllowPartialPath); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIController.K2_SetFocus (Underlying native function: K2_SetFocus 0xa17e5ec)
	void K2SetFocus(class AActor*& NewFocus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIController.K2_SetFocalPoint (Underlying native function: K2_SetFocalPoint 0xa17e554)
	void K2SetFocalPoint(struct FVector& FP); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.AIController.K2_ClearFocus (Underlying native function: K2_ClearFocus 0xa17e29c)
	void K2ClearFocus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIController.HasPartialPath (Underlying native function: HasPartialPath 0xa17e1c8)
	bool HasPartialPath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIController.GetPathFollowingComponent (Underlying native function: GetPathFollowingComponent 0x6a4b088)
	class UPathFollowingComponent* GetPathFollowingComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIController.GetMoveStatus (Underlying native function: GetMoveStatus 0xa17e1a8)
	struct TEnumAsByte<EPathFollowingStatus> GetMoveStatus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIController.GetImmediateMoveDestination (Underlying native function: GetImmediateMoveDestination 0xa17e170)
	struct FVector GetImmediateMoveDestination(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIController.GetFocusActor (Underlying native function: GetFocusActor 0xa17e14c)
	class AActor* GetFocusActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIController.GetFocalPointOnActor (Underlying native function: GetFocalPointOnActor 0xa17e0a4)
	struct FVector GetFocalPointOnActor(class AActor*& Actor); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIController.GetFocalPoint (Underlying native function: GetFocalPoint 0xa17e06c)
	struct FVector GetFocalPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.AIController.GetAIPerceptionComponent (Underlying native function: GetAIPerceptionComponent 0x83fc164)
	class UAIPerceptionComponent* GetAIPerceptionComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIController.ClaimTaskResource (Underlying native function: ClaimTaskResource 0xa17dde4)
	void ClaimTaskResource(class UClass*& ResourceClass); // (Final | Native | Public | BlueprintCallable)
};

