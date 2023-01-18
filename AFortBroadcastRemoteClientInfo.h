// Class /Script/FortniteGame.FortBroadcastRemoteClientInfo
// Size: 0x510
class AFortBroadcastRemoteClientInfo : public AActor
{
	unsigned char unreflected_288[0x50]; // 0x288 (0x50) 
	bool bActive; // 0x2d8 (0x1)
	bool bRemoteIsInteracting; // 0x2d9 (0x1)
	unsigned char unreflected_2da[0x6]; // 0x2da (0x6) 
	class ABuildingSMActor* RemoteEditActor; // 0x2e0 (0x8)
	struct TArray<int> RemoteEditTileData; // 0x2e8 (0x10)
	class UClass* RemoteBuildableClass; // 0x2f8 (0x8)
	struct TEnumAsByte<EFortResourceType> RemoteBuildingMaterial; // 0x300 (0x1)
	bool bRemoteIsFullScreenMapActive; // 0x301 (0x1)
	bool bRemoteIsInventoryActive; // 0x302 (0x1)
	bool bRemoteCanDBNORevive; // 0x303 (0x1)
	struct FAthenaQuickChatActiveEntry RemoteChatEntry; // 0x304 (0x14)
	struct FBuildingWeakSpotData RemoteWeakspotData; // 0x318 (0x50)
	float RemoteRespawnTime; // 0x368 (0x4)
	int16_t RemotePoiTagID; // 0x36c (0x2)
	unsigned char unreflected_36e[0x2]; // 0x36e (0x2) 
	int RemoteEventScore; // 0x370 (0x4)
	unsigned char padding_374[0x19c]; // 0x374 (0x19c)

	/* Functions */

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerInventoryActive (Underlying native function: ServerSetPlayerInventoryActive 0x8e814f8)
	void ServerSetPlayerInventoryActive(bool& bInventorypActive); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerInteracting (Underlying native function: ServerSetPlayerInteracting 0x8e81448)
	void ServerSetPlayerInteracting(bool& bInteracting); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerHitMarkers (Underlying native function: ServerSetPlayerHitMarkers 0x8e81390)
	void ServerSetPlayerHitMarkers(struct TArray<struct FScreenSpaceHitLocation>& ScreenSpaceHitLocations); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerFullScreenMapActive (Underlying native function: ServerSetPlayerFullScreenMapActive 0x8e812e0)
	void ServerSetPlayerFullScreenMapActive(bool& bFullscreenMapActive); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerEventScore (Underlying native function: ServerSetPlayerEventScore 0x8e81244)
	void ServerSetPlayerEventScore(int& EventScore); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerEditTileData (Underlying native function: ServerSetPlayerEditTileData 0x8e8118c)
	void ServerSetPlayerEditTileData(struct TArray<int>& EditTileData); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerCanDBNORevive (Underlying native function: ServerSetPlayerCanDBNORevive 0x8e810dc)
	void ServerSetPlayerCanDBNORevive(bool& bCanDBNORevive); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerBuildingMaterial (Underlying native function: ServerSetPlayerBuildingMaterial 0x8e8103c)
	void ServerSetPlayerBuildingMaterial(struct TEnumAsByte<EFortResourceType>& Material); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerBuildableClass (Underlying native function: ServerSetPlayerBuildableClass 0x8e80f9c)
	void ServerSetPlayerBuildableClass(class UClass*& BuildableClass); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerRespawnTimeChanged (Underlying native function: OnServerRespawnTimeChanged 0x8e803f8)
	void OnServerRespawnTimeChanged(float& InRespawnTime); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerRemoveMapMarker (Underlying native function: OnServerRemoveMapMarker 0x8e80348)
	void OnServerRemoveMapMarker(struct FMarkerID*& InMarkerID); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPoiTagIDChanged (Underlying native function: OnServerPoiTagIDChanged 0x8e802b4)
	void OnServerPoiTagIDChanged(int16_t& InPoiTagID); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPlayerWeakspotSpawned (Underlying native function: OnServerPlayerWeakspotSpawned 0x8e801f4)
	void OnServerPlayerWeakspotSpawned(struct FBuildingWeakSpotData& WeakSpotData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPlayerQuickChatEntryChanged (Underlying native function: OnServerPlayerQuickChatEntryChanged 0x8e8015c)
	void OnServerPlayerQuickChatEntryChanged(struct FAthenaQuickChatActiveEntry& ChatEntry); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPlayerEditActorChanged (Underlying native function: OnServerPlayerEditActorChanged 0x8e800d4)
	void OnServerPlayerEditActorChanged(class ABuildingSMActor*& EditActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPlayerDamagedResourceBuilding (Underlying native function: OnServerPlayerDamagedResourceBuilding 0x8e7ff38)
	void OnServerPlayerDamagedResourceBuilding(class ABuildingSMActor*& BuildingSMActor, struct TEnumAsByte<EFortResourceType>& PotentialResourceType, int& PotentialResourceCount, bool& bDestroyed, bool& bJustHitWeakspot); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerAddMapMarker (Underlying native function: OnServerAddMapMarker 0x8e7fe84)
	void OnServerAddMapMarker(struct FFortWorldMarkerData& InMarkerData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteWeakspotData (Underlying native function: OnRep_RemoteWeakspotData 0x8e7fd4c)
	void OnRepRemoteWeakspotData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteRespawnTime (Underlying native function: OnRep_RemoteRespawnTime 0x8e7fd24)
	void OnRepRemoteRespawnTime(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemotePoiTagID (Underlying native function: OnRep_RemotePoiTagID 0x8e7fc70)
	void OnRepRemotePoiTagID(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteIsInventoryActive (Underlying native function: OnRep_RemoteIsInventoryActive 0x8e7fc4c)
	void OnRepRemoteIsInventoryActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteIsInteracting (Underlying native function: OnRep_RemoteIsInteracting 0x8e7fc28)
	void OnRepRemoteIsInteracting(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteIsFullScreenMapActive (Underlying native function: OnRep_RemoteIsFullScreenMapActive 0x8e7fc04)
	void OnRepRemoteIsFullScreenMapActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteEventScore (Underlying native function: OnRep_RemoteEventScore 0x8e7fbe0)
	void OnRepRemoteEventScore(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteEditTileData (Underlying native function: OnRep_RemoteEditTileData 0x8e7fbc0)
	void OnRepRemoteEditTileData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteEditActor (Underlying native function: OnRep_RemoteEditActor 0x8e7fb9c)
	void OnRepRemoteEditActor(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteChatEntry (Underlying native function: OnRep_RemoteChatEntry 0x8e7fb7c)
	void OnRepRemoteChatEntry(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteCanDBNORevive (Underlying native function: OnRep_RemoteCanDBNORevive 0x2f5009c)
	void OnRepRemoteCanDBNORevive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteBuildingMaterial (Underlying native function: OnRep_RemoteBuildingMaterial 0x8e7fb5c)
	void OnRepRemoteBuildingMaterial(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteBuildableClass (Underlying native function: OnRep_RemoteBuildableClass 0x8e7fb38)
	void OnRepRemoteBuildableClass(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_bActive (Underlying native function: OnRep_bActive 0x8e7fdc8)
	void OnRepbActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerInventoryActiveChanged (Underlying native function: OnPlayerInventoryActiveChanged 0x8e7fa24)
	void OnPlayerInventoryActiveChanged(bool& bInventoryActive); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerInteractLongUseChanged (Underlying native function: OnPlayerInteractLongUseChanged 0x8e7f93c)
	void OnPlayerInteractLongUseChanged(bool& bInteracting, bool& bLongUseInteractionCompleted); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerHitMarkersChanged (Underlying native function: OnPlayerHitMarkersChanged 0x8e7f8a0)
	void OnPlayerHitMarkersChanged(struct TArray<struct FScreenSpaceHitLocation>& ScreenSpaceHitLocations); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerFullScreenMapActiveChanged (Underlying native function: OnPlayerFullScreenMapActiveChanged 0x8e7f7f4)
	void OnPlayerFullScreenMapActiveChanged(bool& bFullscreenMapActive); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerEventScoreChanged (Underlying native function: OnPlayerEventScoreChanged 0x8e7f74c)
	void OnPlayerEventScoreChanged(int& EventScore); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerEditPreviewChanged (Underlying native function: OnPlayerEditPreviewChanged 0x8e7f6cc)
	void OnPlayerEditPreviewChanged(class ABuildingSMActor*& EditedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerCanDBNOReviveChanged (Underlying native function: OnPlayerCanDBNOReviveChanged 0x8e7f64c)
	void OnPlayerCanDBNOReviveChanged(bool& bCanDBNORevive); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerBuildingMaterialChanged (Underlying native function: OnPlayerBuildingMaterialChanged 0x8e7f638)
	void OnPlayerBuildingMaterialChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerBuildableClassChanged (Underlying native function: OnPlayerBuildableClassChanged 0x8e7f624)
	void OnPlayerBuildableClassChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ClientRemotePlayerRemoveMapMarker (Underlying native function: ClientRemotePlayerRemoveMapMarker 0x8e7df38)
	void ClientRemotePlayerRemoveMapMarker(struct FMarkerID*& MarkerID); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ClientRemotePlayerHitMarkers (Underlying native function: ClientRemotePlayerHitMarkers 0x8e7dea4)
	void ClientRemotePlayerHitMarkers(struct TArray<struct FScreenSpaceHitLocation>& ScreenSpaceHitLocations); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ClientRemotePlayerDamagedResourceBuilding (Underlying native function: ClientRemotePlayerDamagedResourceBuilding 0x8e7dd1c)
	void ClientRemotePlayerDamagedResourceBuilding(class ABuildingSMActor*& BuildingSMActor, struct TEnumAsByte<EFortResourceType>& PotentialResourceType, int& PotentialResourceCount, bool& bDestroyed, bool& bJustHitWeakspot); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ClientRemotePlayerAddMapMarker (Underlying native function: ClientRemotePlayerAddMapMarker 0x8e7dc6c)
	void ClientRemotePlayerAddMapMarker(struct FFortWorldMarkerData& InMarkerData); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)
};

