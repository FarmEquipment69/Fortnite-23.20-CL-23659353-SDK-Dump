// Class /Script/ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x298
class AReplicationGraphDebugActor : public AActor
{
	class UReplicationGraph* ReplicationGraph; // 0x288 (0x8)
	class UNetReplicationGraphConnection* ConnectionManager; // 0x290 (0x8)

	/* Functions */

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging (Underlying native function: ServerStopDebugging 0x72ed958)
	void ServerStopDebugging(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging (Underlying native function: ServerStartDebugging 0x72ed940)
	void ServerStartDebugging(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass (Underlying native function: ServerSetPeriodFrameForClass 0x72ed878)
	void ServerSetPeriodFrameForClass(class UClass*& Class, int& PeriodFrame); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass (Underlying native function: ServerSetCullDistanceForClass 0x72ed7ac)
	void ServerSetCullDistanceForClass(class UClass*& Class, float& CullDistance); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint (Underlying native function: ServerSetConditionalActorBreakpoint 0x72ed728)
	void ServerSetConditionalActorBreakpoint(class AActor*& Actor); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances (Underlying native function: ServerPrintCullDistances 0x22c0e58)
	void ServerPrintCullDistances(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo (Underlying native function: ServerPrintAllActorInfo 0x72ed5d0)
	void ServerPrintAllActorInfo(struct FString& Str); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo (Underlying native function: ServerCellInfo 0x7062174)
	void ServerCellInfo(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo (Underlying native function: ClientCellInfo 0x72ed48c)
	void ClientCellInfo(struct FVector& CellLocation, struct FVector& CellExtent, struct TArray<class AActor*>& Actors); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)
};

