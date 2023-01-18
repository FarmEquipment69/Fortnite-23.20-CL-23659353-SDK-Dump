// Class /Script/MeshNetwork.MeshNetworkSubsystem
// Size: 0x108
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnMeshNodeTypeChanged; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnConnectedToRootChanged; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnGameServerNodeTypeChanged; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnMeshMetaDataUpdated; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnMeshPlayerRequested; // 0x70 (0x10)
	unsigned char unreflected_80[0x30]; // 0x80 (0x30) 
	enum EMeshNetworkNodeType NodeType; // 0xb0 (0x1)
	enum EMeshNetworkNodeType GameServerNodeType; // 0xb1 (0x1)
	bool bConnectedToRoot; // 0xb2 (0x1)
	bool bMetadataReceived; // 0xb3 (0x1)
	unsigned char padding_b4[0x54]; // 0xb4 (0x54)

	/* Functions */

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey (Underlying native function: SetMetaDataWithKey 0x72d9828)
	void SetMetaDataWithKey(struct FName& Key, struct FMeshMetaDataStruct& MetaData); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.SetMetaData (Underlying native function: SetMetaData 0x72d9100)
	void SetMetaData(struct FMeshMetaDataStruct& MetaData); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey (Underlying native function: GetMetaDataWithKey 0x72d9164)
	bool GetMetaDataWithKey(struct FName& Key, struct FMeshMetaDataStruct& MetaData); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMetaData (Underlying native function: GetMetaData 0x72d9100)
	void GetMetaData(struct FMeshMetaDataStruct& MetaData); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType (Underlying native function: GetMeshNetworkNodeType 0x72d90e8)
	enum EMeshNetworkNodeType GetMeshNetworkNodeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType (Underlying native function: GetGameServerNodeType 0x72d90ac)
	enum EMeshNetworkNodeType GetGameServerNodeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot (Underlying native function: GetConnectedToRoot 0x72d9094)
	bool GetConnectedToRoot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication (Underlying native function: EnableMeshReplication 0x72d8fe0)
	void EnableMeshReplication(class AActor*& Actor, class UClass*& MeshComponentClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication (Underlying native function: DisableMeshReplication 0x72d8da8)
	void DisableMeshReplication(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)
};

