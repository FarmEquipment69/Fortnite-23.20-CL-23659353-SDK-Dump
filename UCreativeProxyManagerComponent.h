// Class /Script/FortniteGame.CreativeProxyManagerComponent
// Size: 0x108
class UCreativeProxyManagerComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnProxyDataChangedDelegate; // 0xa0 (0x10)
	class UClass* ProxyClass; // 0xb0 (0x8)
	struct TMap<struct FUniqueNetIdRepl, class ACreativePlayerReplicationProxy*> ProxiesMap; // 0xb8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.GetProxyForUniqueNetId (Underlying native function: GetProxyForUniqueNetId 0x8780244)
	class ACreativePlayerReplicationProxy* GetProxyForUniqueNetId(struct FUniqueNetIdRepl& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.GetProxyForPlayer (Underlying native function: GetProxyForPlayer 0x87801b4)
	class ACreativePlayerReplicationProxy* GetProxyForPlayer(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.DestroyProxyForUniqueNetId (Underlying native function: DestroyProxyForUniqueNetId 0x877eba8)
	void DestroyProxyForUniqueNetId(struct FUniqueNetIdRepl& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.DestroyProxyForPlayer (Underlying native function: DestroyProxyForPlayer 0x877eaf0)
	void DestroyProxyForPlayer(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.DestroyAllProxies (Underlying native function: DestroyAllProxies 0x877eadc)
	void DestroyAllProxies(); // (Final | Native | Public | BlueprintCallable)
};

