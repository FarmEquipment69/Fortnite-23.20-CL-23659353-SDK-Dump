// Class /Script/FortniteGame.FortPlayspaceComponent
// Size: 0xf8
class UFortPlayspaceComponent : public UPlayspaceComponent
{
	struct FMulticastInlineDelegate OnMeshNetworkReadyBP; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnMeshNetworkEventBurstBP; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnMeshNetworkEventStartBP; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnMeshNetworkEventChangeBP; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnMeshNetworkEventEndBP; // 0xe0 (0x10)
	bool bSubscribeToMeshNetwork; // 0xf0 (0x1)
	unsigned char padding_f1[0x7]; // 0xf1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayspaceComponent.OnMeshNetworkReady (Underlying native function: OnMeshNetworkReady 0x8ddeabc)
	void OnMeshNetworkReady(enum EMeshNetworkNodeType& NodeType); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayspaceComponent.OnMeshNetworkEventStart (Underlying native function: OnMeshNetworkEventStart 0x8dde87c)
	void OnMeshNetworkEventStart(struct FName& EventName, struct FDateTime*& EventStartTime, enum EMeshNetworkNodeType& NodeType, struct FString& EventParameters); // (0x00000002 | Native | Public | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortPlayspaceComponent.OnMeshNetworkEventEnd (Underlying native function: OnMeshNetworkEventEnd 0x8dde7a8)
	void OnMeshNetworkEventEnd(struct FName& EventName, enum EMeshNetworkNodeType& NodeType); // (0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayspaceComponent.OnMeshNetworkEventChange (Underlying native function: OnMeshNetworkEventChange 0x8dde568)
	void OnMeshNetworkEventChange(struct FName& EventName, struct FDateTime*& EventStartTime, enum EMeshNetworkNodeType& NodeType, struct FString& EventParameters); // (0x00000002 | Native | Public | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortPlayspaceComponent.OnMeshNetworkEventBurst (Underlying native function: OnMeshNetworkEventBurst 0x8dde37c)
	void OnMeshNetworkEventBurst(struct FName& EventName, enum EMeshNetworkNodeType& NodeType, struct FString& EventParameters); // (0x00000002 | Native | Public | HasOutParms)
};

