// Class /Script/FortniteAI.AIHotSpot
// Size: 0x438
class AAIHotSpot : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<class UAIHotSpotSlot*> UserSlots; // 0x290 (0x10)
	class UAIHotSpotSlotGenerator* SlotGenerator; // 0x2a0 (0x8)
	struct TArray<class UAIHotSpotSlot*> Slots; // 0x2a8 (0x10)
	class AActor* FocusActor; // 0x2b8 (0x8)
	class UClass* FilterClass; // 0x2c0 (0x8)
	struct FVector CustomNavmeshSearchExtent; // 0x2c8 (0x18)
	unsigned char bStartEnabled; // 0x2e0 (0x1)
	unsigned char bAllowSlotlessAssignment; // 0x2e0 (0x1)
	unsigned char bAllowClaimingMultipleSlots; // 0x2e0 (0x1)
	unsigned char bTrackOverlappingSlots; // 0x2e0 (0x1)
	unsigned char bProjectSlotsOnNavmesh; // 0x2e0 (0x1)
	unsigned char bCustomNavmeshSearchExtent; // 0x2e0 (0x1)
	unsigned char bIsEnabled; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	struct TArray<class AAIController*> NoSlotAssignees; // 0x2e8 (0x10)
	unsigned char unreflected_2f8[0x128]; // 0x2f8 (0x128) 
	class UPrimitiveComponent* RenderingComponent; // 0x420 (0x8)
	class UBillboardComponent* SpriteComponent; // 0x428 (0x8)
	unsigned char padding_430[0x8]; // 0x430 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.AIHotSpot.SetEnabled (Underlying native function: SetEnabled 0xa2355b4)
	void SetEnabled(bool& bEnabled); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.RemoveGroupFromHotspot (Underlying native function: RemoveGroupFromHotspot 0xa235404)
	int RemoveGroupFromHotspot(struct TArray<class AAIController*>& GroupOfAI); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.RemoveFromHotspot (Underlying native function: RemoveFromHotspot 0xa235338)
	bool RemoveFromHotspot(class AAIController*& AI, bool& bAssignFromWaitingList); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotOccupied (Underlying native function: OnSlotOccupied 0xa23523c)
	void OnSlotOccupied(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotFreed (Underlying native function: OnSlotFreed 0xa235140)
	void OnSlotFreed(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotEnabled (Underlying native function: OnSlotEnabled 0xa23507c)
	void OnSlotEnabled(int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotDisabled (Underlying native function: OnSlotDisabled 0xa234fb8)
	void OnSlotDisabled(int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotClaimed (Underlying native function: OnSlotClaimed 0xa234ebc)
	void OnSlotClaimed(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotBlocked (Underlying native function: OnSlotBlocked 0xa234dc0)
	void OnSlotBlocked(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnRemovedSlotlessBehavior (Underlying native function: OnRemovedSlotlessBehavior 0xa234cf4)
	void OnRemovedSlotlessBehavior(class AAIController*& AI, bool& bIsClamingSlot); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnRemovedBehavior (Underlying native function: OnRemovedBehavior 0xa234b70)
	void OnRemovedBehavior(class AAIController*& AI, int& Index, int& UserId, enum EAIHotSpotSlot& PrevState, bool& bWasOnWaitingList); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnMoveToSlotFinished (Underlying native function: OnMoveToSlotFinished 0xa234a30)
	void OnMoveToSlotFinished(class AAIController*& AI, int& Index, int& UserId, bool& bResult); // (BlueprintAuthorityOnly | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnHotSpotEnabled (Underlying native function: OnHotSpotEnabled 0x22c0e58)
	void OnHotSpotEnabled(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnHotSpotDisabled (Underlying native function: OnHotSpotDisabled 0x8546790)
	void OnHotSpotDisabled(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnAssignedSlotlessBehavior (Underlying native function: OnAssignedSlotlessBehavior 0xa23499c)
	bool OnAssignedSlotlessBehavior(class AAIController*& AI); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnAssignedOccupiedBehavior (Underlying native function: OnAssignedOccupiedBehavior 0xa23489c)
	bool OnAssignedOccupiedBehavior(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnAssignedClaimedBehavior (Underlying native function: OnAssignedClaimedBehavior 0xa234758)
	bool OnAssignedClaimedBehavior(class AAIController*& AI, int& Index, int& UserId, bool& bWasOnWaitingList); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OccupySlotByIndex (Underlying native function: OccupySlotByIndex 0x89ea9e8)
	bool OccupySlotByIndex(int& Index); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.IsSlotlessAssignmentAllowed (Underlying native function: IsSlotlessAssignmentAllowed 0xa234324)
	bool IsSlotlessAssignmentAllowed(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.IsEnabled (Underlying native function: IsEnabled 0xa2342ec)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.IsAIAllowed (Underlying native function: IsAIAllowed 0xa2341c4)
	bool IsAIAllowed(class AAIController*& AI); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteAI.AIHotSpot.HasEnabledSlots (Underlying native function: HasEnabledSlots 0xa234184)
	bool HasEnabledSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.HasAssignedAI (Underlying native function: HasAssignedAI 0xa2340c0)
	bool HasAssignedAI(class AAIController*& AI, enum EAIHotSpotAssignmentFilter& Filter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotUserIdByIndex (Underlying native function: GetSlotUserIdByIndex 0xa233ecc)
	int GetSlotUserIdByIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotStateByOwner (Underlying native function: GetSlotStateByOwner 0xa233e14)
	enum EAIHotSpotSlot GetSlotStateByOwner(class AAIController*& AIOwner); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotStateByIndex (Underlying native function: GetSlotStateByIndex 0xa233d80)
	enum EAIHotSpotSlot GetSlotStateByIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotRotationByIndex (Underlying native function: GetSlotRotationByIndex 0xa233cc8)
	struct FRotator GetSlotRotationByIndex(int& Index); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotOwnerByIndex (Underlying native function: GetSlotOwnerByIndex 0xa233bdc)
	class AAIController* GetSlotOwnerByIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotLocationByIndex (Underlying native function: GetSlotLocationByIndex 0xa233b3c)
	struct FVector GetSlotLocationByIndex(int& Index); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotIndexByOwner (Underlying native function: GetSlotIndexByOwner 0xa233a84)
	int GetSlotIndexByOwner(class AAIController*& AIOwner); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotCount (Underlying native function: GetSlotCount 0xa2339f8)
	int GetSlotCount(enum EAIHotSpotSlotFilter& Filter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotByOwner (Underlying native function: GetSlotByOwner 0xa23395c)
	class UAIHotSpotSlot* GetSlotByOwner(class AAIController*& AIOwner); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotByIndex (Underlying native function: GetSlotByIndex 0xa2338d0)
	class UAIHotSpotSlot* GetSlotByIndex(int& Index); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetAssignedAICount (Underlying native function: GetAssignedAICount 0xa2337bc)
	int GetAssignedAICount(enum EAIHotSpotAssignmentFilter& Filter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetAssignedAI (Underlying native function: GetAssignedAI 0xa2336f0)
	struct TArray<class AAIController*> GetAssignedAI(enum EAIHotSpotAssignmentFilter& Filter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.FindBestSlotIndices (Underlying native function: FindBestSlotIndices 0xa233500)
	struct TArray<int> FindBestSlotIndices(struct TArray<class AAIController*>& AI); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.FindBestSlotIndex (Underlying native function: FindBestSlotIndex 0xa23346c)
	int FindBestSlotIndex(class AAIController*& AI); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.CanUseSlotByIndex (Underlying native function: CanUseSlotByIndex 0xa2333a8)
	bool CanUseSlotByIndex(class AAIController*& AI, int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.AssignToSlotByIndex (Underlying native function: AssignToSlotByIndex 0xa2332e0)
	bool AssignToSlotByIndex(class AAIController*& AI, int& Index); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.AssignToHotspot (Underlying native function: AssignToHotspot 0x9c147ec)
	bool AssignToHotspot(class AAIController*& AI); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.AssignGroupToHotspot (Underlying native function: AssignGroupToHotspot 0xa233130)
	int AssignGroupToHotspot(struct TArray<class AAIController*>& GroupOfAI); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.AssignFromWaitingList (Underlying native function: AssignFromWaitingList 0xa23311c)
	void AssignFromWaitingList(); // (Final | Native | Public | BlueprintCallable)
};

