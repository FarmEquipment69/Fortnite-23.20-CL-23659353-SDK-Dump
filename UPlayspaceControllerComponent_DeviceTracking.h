// Class /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking
// Size: 0x310
class UPlayspaceControllerComponent_DeviceTracking : public UFortControllerComponent
{
	struct FDetailedDeviceTrackingInfo CurrentSelectedDevice; // 0xa0 (0x88)
	struct FBasicDeviceTrackingInfosPage BasicDeviceTrackingInfosPage; // 0x128 (0x18)
	struct FBasicDeviceTrackingInfosPage BasicDeviceTrackingInfosWithBindingsPage; // 0x140 (0x18)
	struct FBasicDeviceTrackingInfosPage FindBasicDeviceTrackingInfosPage; // 0x158 (0x18)
	unsigned char unreflected_170[0x150]; // 0x170 (0x150) 
	struct TMap<int, struct FBasicDeviceTrackingInfo> DeviceGuidToBasicDeviceInfo; // 0x2c0 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerRequestPageFindBasicDeviceTrackingInfos (Underlying native function: ServerRequestPageFindBasicDeviceTrackingInfos 0x8784238)
	void ServerRequestPageFindBasicDeviceTrackingInfos(struct FString& DeviceDisplayNameToLookFor, bool& bAddRequestedPageToCurrentPage); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerRequestPageBasicDeviceTrackingInfosWithBindings (Underlying native function: ServerRequestPageBasicDeviceTrackingInfosWithBindings 0x87841b4)
	void ServerRequestPageBasicDeviceTrackingInfosWithBindings(bool& bAddRequestedPageToCurrentPage); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerRequestPageBasicDeviceTrackingInfos (Underlying native function: ServerRequestPageBasicDeviceTrackingInfos 0x8784130)
	void ServerRequestPageBasicDeviceTrackingInfos(bool& bAddRequestedPageToCurrentPage); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerRequestBasicDeviceInfos (Underlying native function: ServerRequestBasicDeviceInfos 0x878409c)
	void ServerRequestBasicDeviceInfos(struct TArray<int>& DeviceTrackingGUIDsRequested); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerRequestBasicDeviceInfo (Underlying native function: ServerRequestBasicDeviceInfo 0x8784018)
	void ServerRequestBasicDeviceInfo(int& DeviceTrackingGUIDRequested); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerRequestAssignCurrentSelectedDevice (Underlying native function: ServerRequestAssignCurrentSelectedDevice 0x8783f94)
	void ServerRequestAssignCurrentSelectedDevice(int& DeviceTrackingGUIDToAssign); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerClearFindBasicDeviceTrackingInfosPage (Underlying native function: ServerClearFindBasicDeviceTrackingInfosPage 0x8783edc)
	void ServerClearFindBasicDeviceTrackingInfosPage(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerClearBasicDeviceTrackingInfosWithBindingsPage (Underlying native function: ServerClearBasicDeviceTrackingInfosWithBindingsPage 0x7181fa8)
	void ServerClearBasicDeviceTrackingInfosWithBindingsPage(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerClearBasicDeviceTrackingInfosPage (Underlying native function: ServerClearBasicDeviceTrackingInfosPage 0x7337d68)
	void ServerClearBasicDeviceTrackingInfosPage(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ServerAckCurrentSelectedDeviceOnRep (Underlying native function: ServerAckCurrentSelectedDeviceOnRep 0x7337ed0)
	void ServerAckCurrentSelectedDeviceOnRep(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.PlayerExitSpatialGameplayActor_WithPawn (Underlying native function: PlayerExitSpatialGameplayActor_WithPawn 0x878315c)
	void PlayerExitSpatialGameplayActorWithPawn(struct FEventMessageTag& Channel, struct FPlayerExitSpatialActorContext& PlayerExitSpatialActorContext); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.PlayerEnteredSpatialGameplayActor_WithPawn (Underlying native function: PlayerEnteredSpatialGameplayActor_WithPawn 0x8783088)
	void PlayerEnteredSpatialGameplayActorWithPawn(struct FEventMessageTag& Channel, struct FPlayerEnterSpatialActorContext& PlayerEnterSpatialActorContext); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.OnRep_FindBasicDeviceTrackingInfosPage (Underlying native function: OnRep_FindBasicDeviceTrackingInfosPage 0x8782f10)
	void OnRepFindBasicDeviceTrackingInfosPage(); // (Final | Native | Public)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.OnRep_CurrentSelectedDevice (Underlying native function: OnRep_CurrentSelectedDevice 0x8782efc)
	void OnRepCurrentSelectedDevice(); // (Final | Native | Public)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.OnRep_BasicDeviceTrackingInfosWithBindingsPage (Underlying native function: OnRep_BasicDeviceTrackingInfosWithBindingsPage 0x8782ee8)
	void OnRepBasicDeviceTrackingInfosWithBindingsPage(); // (Final | Native | Public)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.OnRep_BasicDeviceTrackingInfosPage (Underlying native function: OnRep_BasicDeviceTrackingInfosPage 0x8782ed4)
	void OnRepBasicDeviceTrackingInfosPage(); // (Final | Native | Public)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.OnDeviceRemovedFromPlayspace (Underlying native function: OnDeviceRemovedFromPlayspace 0x8782ab4)
	void OnDeviceRemovedFromPlayspace(int& RemovedDeviceTrackingGUID, struct FCreativeDeviceInstanceInfo& RemovedDeviceInfo); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.OnDeviceChangedInPlayspace (Underlying native function: OnDeviceChangedInPlayspace 0x87829c4)
	void OnDeviceChangedInPlayspace(int& ChangedDeviceTrackingGUID, struct FCreativeDeviceInstanceInfo& ChangedDeviceInfo); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.MarkCurrentDeviceLocallyDirty (Underlying native function: MarkCurrentDeviceLocallyDirty 0x8782648)
	void MarkCurrentDeviceLocallyDirty(int& CurrentDeviceGUID); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ClientRequestBasicDeviceInfosResponse (Underlying native function: ClientRequestBasicDeviceInfosResponse 0x877e8a8)
	void ClientRequestBasicDeviceInfosResponse(struct TArray<int>& DeviceTrackingGUIDsRequested, struct TArray<struct FBasicDeviceTrackingInfo>& BasicDeviceInfos); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ClientRequestBasicDeviceInfoResponse (Underlying native function: ClientRequestBasicDeviceInfoResponse 0x877e760)
	void ClientRequestBasicDeviceInfoResponse(int& DeviceTrackingGUIDRequested, bool& bFoundDeviceInstanceInfo, struct FBasicDeviceTrackingInfo& BasicDeviceInfo); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ClientAssignCurrentSelectedDeviceRequestFailed (Underlying native function: ClientAssignCurrentSelectedDeviceRequestFailed 0x7337ee8)
	void ClientAssignCurrentSelectedDeviceRequestFailed(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.PlayspaceControllerComponent_DeviceTracking.ClientAckCurrentSelectedDeviceAlreadyUpToDate (Underlying native function: ClientAckCurrentSelectedDeviceAlreadyUpToDate 0x7337d80)
	void ClientAckCurrentSelectedDeviceAlreadyUpToDate(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)
};

