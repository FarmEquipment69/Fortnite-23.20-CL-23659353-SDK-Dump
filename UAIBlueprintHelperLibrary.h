// Class /Script/AIModule.AIBlueprintHelperLibrary
// Size: 0x28
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation (Underlying native function: UnlockAIResourcesWithAnimation 0xa1bbbbc)
	static void UnlockAIResourcesWithAnimation(class UAnimInstance*& AnimInstance, bool& bUnlockMovement, bool& UnlockAILogic); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass (Underlying native function: SpawnAIFromClass 0xa1bb838)
	static class APawn* SpawnAIFromClass(class UObject*& WorldContextObject, class UClass*& PawnClass, class UBehaviorTree*& BehaviorTree, struct FVector& Location, struct FRotator& Rotation, bool& bNoCollisionFail, class AActor*& Owner); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation (Underlying native function: SimpleMoveToLocation 0xa1bb77c)
	static void SimpleMoveToLocation(class AController*& Controller, struct FVector& Goal); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor (Underlying native function: SimpleMoveToActor 0xa1bb6c8)
	static void SimpleMoveToActor(class AController*& Controller, class AActor*& Goal); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.SendAIMessage (Underlying native function: SendAIMessage 0xa1bb274)
	static void SendAIMessage(class APawn*& Target, struct FName& message, class UObject*& MessageSource, bool& bSuccess); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation (Underlying native function: LockAIResourcesWithAnimation 0xa1bae70)
	static void LockAIResourcesWithAnimation(class UAnimInstance*& AnimInstance, bool& bLockMovement, bool& LockAILogic); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIRotation (Underlying native function: IsValidAIRotation 0xa1badc8)
	static bool IsValidAIRotation(struct FRotator& Rotation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAILocation (Underlying native function: IsValidAILocation 0xa1bace8)
	static bool IsValidAILocation(struct FVector& Location); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIDirection (Underlying native function: IsValidAIDirection 0xa1babf4)
	static bool IsValidAIDirection(struct FVector& DirectionVector); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex (Underlying native function: GetNextNavLinkIndex 0xa1ba7f8)
	static int GetNextNavLinkIndex(class AController*& Controller); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints (Underlying native function: GetCurrentPathPoints 0xa1ba6b8)
	static struct TArray<struct FVector> GetCurrentPathPoints(class AController*& Controller); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex (Underlying native function: GetCurrentPathIndex 0xa1ba614)
	static int GetCurrentPathIndex(class AController*& Controller); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPath (Underlying native function: GetCurrentPath 0xa1ba4e8)
	static class UNavigationPath* GetCurrentPath(class AController*& Controller); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetBlackboard (Underlying native function: GetBlackboard 0x2ac4e18)
	static class UBlackboardComponent* GetBlackboard(class AActor*& Target); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetAIController (Underlying native function: GetAIController 0x28f2104)
	static class AAIController* GetAIController(class AActor*& ControlledActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject (Underlying native function: CreateMoveToProxyObject 0xa1ba1e0)
	static class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject*& WorldContextObject, class APawn*& Pawn, struct FVector& Destination, class AActor*& TargetActor, float& AcceptanceRadius, bool& bStopOnOverlap); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

