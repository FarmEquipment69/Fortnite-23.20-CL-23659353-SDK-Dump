// Class /Script/FortniteGame.AthenaMarkerComponent
// Size: 0x828
class UAthenaMarkerComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x38]; // 0xa0 (0x38) 
	struct FMulticastInlineDelegate OnAddMapMarkerOnServerEvent; // 0xd8 (0x10)
	struct FMulticastInlineDelegate OnRemoveMapMarkerOnServerEvent; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnClientMapMarkersChangedEvent; // 0xf8 (0x10)
	unsigned char unreflected_108[0x30]; // 0x108 (0x30) 
	class UClass* MarkerWidgetClass; // 0x138 (0x8)
	class UClass* MarkerActorClass; // 0x140 (0x8)
	unsigned char unreflected_148[0x10]; // 0x148 (0x10) 
	struct FFortWorldMarkerContainer MarkerStream; // 0x158 (0x128)
	int LocalPlaceableMarkersPerRate; // 0x280 (0x4)
	int RemotePlayableMarkerSoundsPerRate; // 0x284 (0x4)
	struct TMap<int, int> RemotePlayableMarkerSoundsPerPlayerIDMap; // 0x288 (0x50)
	unsigned char unreflected_2d8[0x448]; // 0x2d8 (0x448) 
	class UFortWorldMarker* PendingCancelMarker; // 0x720 (0x8)
	class UFortWorldMarker* LastHoveredMarker; // 0x728 (0x8)
	class UFortWorldMarker* LastPingMarker; // 0x730 (0x8)
	unsigned char unreflected_738[0x8]; // 0x738 (0x8) 
	struct TArray<class AFortPlayerMarkerBase*> MarkerActorPool; // 0x740 (0x10)
	struct FUserWidgetPool MarkerWidgetPool; // 0x750 (0x88)
	bool bIsAimingDownSights; // 0x7d8 (0x1)
	unsigned char padding_7d9[0x4f]; // 0x7d9 (0x4f)

	/* Functions */

	// Function /Script/FortniteGame.AthenaMarkerComponent.UnmarkActorOnClient (Underlying native function: UnmarkActorOnClient 0x846155c)
	void UnmarkActorOnClient(struct FMarkerID*& MarkerID); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.SetMarkerWidgetClass (Underlying native function: SetMarkerWidgetClass 0x2d13be4)
	void SetMarkerWidgetClass(class UClass*& InMarkerClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.SetMarkerActorClass (Underlying native function: SetMarkerActorClass 0x2d13c64)
	void SetMarkerActorClass(class UClass*& InMarkerActorClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.ServerRemoveMapMarker (Underlying native function: ServerRemoveMapMarker 0x8460a94)
	void ServerRemoveMapMarker(struct FMarkerID*& MarkerID, enum ECancelMarkerReason& CancelReason); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.AthenaMarkerComponent.ServerAddMapMarker (Underlying native function: ServerAddMapMarker 0x84609bc)
	void ServerAddMapMarker(struct FFortClientMarkerRequest& MarkerRequest); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.AthenaMarkerComponent.OnTimelineScrubbed (Underlying native function: OnTimelineScrubbed 0x845fe78)
	void OnTimelineScrubbed(); // (Final | Native | Public)

	// Function /Script/FortniteGame.AthenaMarkerComponent.OnRep_MarkerStream (Underlying native function: OnRep_MarkerStream 0x845fc3c)
	void OnRepMarkerStream(); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaMarkerComponent.OnPingCommandDeclined (Underlying native function: OnPingCommandDeclined 0x845f9e8)
	void OnPingCommandDeclined(struct FMarkerID*& MarkerID, bool& bPlayUnableToPerformAction); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.AthenaMarkerComponent.MarkActorOnServer (Underlying native function: MarkActorOnServer 0x845ed08)
	struct FMarkerID* MarkActorOnServer(class AActor*& ActorToBeMarked, bool& bIncludeSquad, bool& bUseHoveredMarkerDetail); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.MarkActorOnClient (Underlying native function: MarkActorOnClient 0x845eac8)
	struct FMarkerID* MarkActorOnClient(class AActor*& ActorToBeMarked, bool& bIncludeSquad, bool& bUseHoveredMarkerDetail); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.HandleServerSquadChange (Underlying native function: HandleServerSquadChange 0x82886e8)
	void HandleServerSquadChange(class AFortPlayerStateAthena*& InPlayerState, unsigned char& PreviousSquadId); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaMarkerComponent.GetMarkerIDsByType (Underlying native function: GetMarkerIDsByType 0x845e020)
	struct TArray<struct FMarkerID*> GetMarkerIDsByType(enum EFortWorldMarkerType& MarkerType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.GetMarkerCurrentPosition (Underlying native function: GetMarkerCurrentPosition 0x845df4c)
	struct FVector GetMarkerCurrentPosition(struct FMarkerID*& MarkerID); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.GetMarkerColor (Underlying native function: GetMarkerColor 0x845de60)
	struct FLinearColor GetMarkerColor(struct FMarkerID*& MarkerID); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.FindMarkerByMarkedActor (Underlying native function: FindMarkerByMarkedActor 0x845d658)
	class UFortWorldMarker* FindMarkerByMarkedActor(class AActor*& MarkedActor); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.FindMarkerByID (Underlying native function: FindMarkerByID 0x845d5c0)
	class UFortWorldMarker* FindMarkerByID(struct FMarkerID*& MarkerID); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMarkerComponent.EnableCommandWheel (Underlying native function: EnableCommandWheel 0x7548044)
	void EnableCommandWheel(bool& bInEnableCommandWheel); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.AthenaMarkerComponent.CancelAllMarkers (Underlying native function: CancelAllMarkers 0x845d44c)
	void CancelAllMarkers(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

