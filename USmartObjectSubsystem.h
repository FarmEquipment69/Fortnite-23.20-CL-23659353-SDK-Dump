// Class /Script/SmartObjectsModule.SmartObjectSubsystem
// Size: 0x208
class USmartObjectSubsystem : public UWorldSubsystem
{
	struct FSoftClassPath SpacePartitionClassName; // 0x30 (0x18)
	class UClass* SpacePartitionClass; // 0x48 (0x8)
	class USmartObjectSpacePartition* SpacePartition; // 0x50 (0x8)
	class ASmartObjectSubsystemRenderingActor* RenderingActor; // 0x58 (0x8)
	struct FSmartObjectContainer SmartObjectContainer; // 0x60 (0xb0)
	unsigned char unreflected_110[0xd0]; // 0x110 (0xd0) 
	struct TArray<class USmartObjectComponent*> RegisteredSOComponents; // 0x1e0 (0x10)
	struct TArray<class USmartObjectComponent*> PendingSmartObjectRegistration; // 0x1f0 (0x10)
	unsigned char padding_200[0x8]; // 0x200 (0x8)

	/* Functions */

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.Use (Underlying native function: Use 0x7f28834)
	class USmartObjectBehaviorDefinition* Use(struct FSmartObjectClaimHandle& ClaimHandle, class UClass*& DefinitionClass); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.SetSlotEnabled (Underlying native function: SetSlotEnabled 0x5bc66c0)
	bool SetSlotEnabled(struct FSmartObjectSlotHandle*& SlotHandle, bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromSlot (Underlying native function: RemoveTagFromSlot 0x5bc65b0)
	bool RemoveTagFromSlot(struct FSmartObjectSlotHandle*& SlotHandle, struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromInstance (Underlying native function: RemoveTagFromInstance 0x7f28428)
	void RemoveTagFromInstance(struct FSmartObjectHandle& Handle, struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.Release (Underlying native function: Release 0x7f28384)
	bool Release(struct FSmartObjectClaimHandle& ClaimHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponentByRequestResult (Underlying native function: GetSmartObjectComponentByRequestResult 0x7f28068)
	class USmartObjectComponent* GetSmartObjectComponentByRequestResult(struct FSmartObjectRequestResult& Result); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponent (Underlying native function: GetSmartObjectComponent 0x7f27fc0)
	class USmartObjectComponent* GetSmartObjectComponent(struct FSmartObjectClaimHandle& ClaimHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTransformFromRequestResult (Underlying native function: GetSlotTransformFromRequestResult 0x7f27e70)
	bool GetSlotTransformFromRequestResult(struct FSmartObjectRequestResult& RequestResult, struct FTransform& OutSlotTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTransform (Underlying native function: GetSlotTransform 0x7f27d1c)
	bool GetSlotTransform(struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform& OutSlotTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTags (Underlying native function: GetSlotTags 0x5bc64f0)
	struct FGameplayTagContainer GetSlotTags(struct FSmartObjectSlotHandle*& SlotHandle); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotLocation (Underlying native function: GetSlotLocation 0x7f27be4)
	bool GetSlotLocation(struct FSmartObjectClaimHandle& ClaimHandle, struct FVector& OutSlotLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetInstanceTags (Underlying native function: GetInstanceTags 0x7f27b4c)
	struct FGameplayTagContainer GetInstanceTags(struct FSmartObjectHandle& Handle); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinitionByRequestResult (Underlying native function: GetBehaviorDefinitionByRequestResult 0x7f27920)
	class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(struct FSmartObjectRequestResult& RequestResult, class UClass*& DefinitionClass); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinition (Underlying native function: GetBehaviorDefinition 0x7f2782c)
	class USmartObjectBehaviorDefinition* GetBehaviorDefinition(struct FSmartObjectClaimHandle& ClaimHandle, class UClass*& DefinitionClass); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects (Underlying native function: FindSmartObjects 0x7f276f8)
	bool FindSmartObjects(struct FSmartObjectRequest& Request, struct TArray<struct FSmartObjectRequestResult>& OutResults); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.FindSmartObject (Underlying native function: FindSmartObject 0x7f27620)
	struct FSmartObjectRequestResult FindSmartObject(struct FSmartObjectRequest& Request); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.Claim (Underlying native function: Claim 0x7f27570)
	struct FSmartObjectClaimHandle Claim(struct FSmartObjectRequestResult& RequestResult); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.AddTagToSlot (Underlying native function: AddTagToSlot 0x5bc63f0)
	void AddTagToSlot(struct FSmartObjectSlotHandle*& SlotHandle, struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.AddTagToInstance (Underlying native function: AddTagToInstance 0x7f274a0)
	void AddTagToInstance(struct FSmartObjectHandle& Handle, struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

