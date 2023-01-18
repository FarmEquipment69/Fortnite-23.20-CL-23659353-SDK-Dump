// Class /Script/FortniteGame.FortEventResponderComponent
// Size: 0xe8
class UFortEventResponderComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnMeshNetEvent; // 0xa0 (0x10)
	struct TArray<struct FGameplayTag> MeshEventTags; // 0xb0 (0x10)
	struct FGameplayTagContainer FilteredEventTypes; // 0xc0 (0x20)
	bool bServerRespondToEvents; // 0xe0 (0x1)
	bool bClientRespondToEvents; // 0xe1 (0x1)
	unsigned char padding_e2[0x6]; // 0xe2 (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortEventResponderComponent.OnMeshNetworkReady (Underlying native function: OnMeshNetworkReady 0x845f5a0)
	void OnMeshNetworkReady(enum EMeshNetworkNodeType& NodeType); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortEventResponderComponent.FortResponderHandleEventSignature__DelegateSignature (Has no native function)
	void FortResponderHandleEventSignatureDelegateSignature(struct FGameplayTag& EventTag, bool& bPersistentOnOff, enum EEventResponderEventType& EventType, struct FString& EventParameters); // (MulticastDelegate | Public | Delegate)
};

