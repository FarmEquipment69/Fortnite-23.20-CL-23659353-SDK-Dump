// Class /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator
// Size: 0x340
class AGameplayDebuggerCategoryReplicator : public AActor
{
	class APlayerController* OwnerPC; // 0x288 (0x8)
	bool bIsEnabled; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct FGameplayDebuggerNetPack ReplicatedData; // 0x298 (0x18)
	struct FGameplayDebuggerDebugActor DebugActor; // 0x2b0 (0x10)
	struct FGameplayDebuggerVisLogSync VisLogSync; // 0x2c0 (0x10)
	class UGameplayDebuggerRenderingComponent* RenderingComp; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x68]; // 0x2d8 (0x68)

	/* Functions */

	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint (Underlying native function: ServerSetViewPoint 0x612e8a0)
	void ServerSetViewPoint(struct FVector& InViewLocation, struct FVector& InViewDirection); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled (Underlying native function: ServerSetEnabled 0x612e7c0)
	void ServerSetEnabled(bool& bEnable); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor (Underlying native function: ServerSetDebugActor 0x612e690)
	void ServerSetDebugActor(class AActor*& Actor, bool& bSelectInEditor); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled (Underlying native function: ServerSetCategoryEnabled 0x612e560)
	void ServerSetCategoryEnabled(int& CategoryId, bool& bEnable); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent (Underlying native function: ServerSendExtensionInputEvent 0x612e430)
	void ServerSendExtensionInputEvent(int& ExtensionId, int& HandlerId); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent (Underlying native function: ServerSendCategoryInputEvent 0x612e300)
	void ServerSendCategoryInputEvent(int& CategoryId, int& HandlerId); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint (Underlying native function: ServerResetViewPoint 0x612e2a0)
	void ServerResetViewPoint(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)
};

