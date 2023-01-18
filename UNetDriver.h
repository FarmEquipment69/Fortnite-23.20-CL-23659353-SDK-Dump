// Class /Script/Engine.NetDriver
// Size: 0x788
class UNetDriver : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FString NetConnectionClassName; // 0x30 (0x10)
	struct FString ReplicationDriverClassName; // 0x40 (0x10)
	struct FString ReplicationBridgeClassName; // 0x50 (0x10)
	int MaxDownloadSize; // 0x60 (0x4)
	unsigned char bClampListenServerTickRate; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	int NetServerMaxTickRate; // 0x68 (0x4)
	int MaxNetTickRate; // 0x6c (0x4)
	int MaxInternetClientRate; // 0x70 (0x4)
	int MaxClientRate; // 0x74 (0x4)
	float ServerTravelPause; // 0x78 (0x4)
	float SpawnPrioritySeconds; // 0x7c (0x4)
	float RelevantTimeout; // 0x80 (0x4)
	float KeepAliveTime; // 0x84 (0x4)
	float InitialConnectTimeout; // 0x88 (0x4)
	float ConnectionTimeout; // 0x8c (0x4)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	class UNetConnection* ServerConnection; // 0x98 (0x8)
	struct TArray<class UNetConnection*> ClientConnections; // 0xa0 (0x10)
	unsigned char unreflected_b0[0x60]; // 0xb0 (0x60) 
	int RecentlyDisconnectedTrackingTime; // 0x110 (0x4)
	unsigned char unreflected_114[0x3c]; // 0x114 (0x3c) 
	class UWorld* World; // 0x150 (0x8)
	class UPackage* WorldPackage; // 0x158 (0x8)
	unsigned char unreflected_160[0x20]; // 0x160 (0x20) 
	unsigned char NetConnectionClass_180[0x8]; // 0x180 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	unsigned char ReplicationDriverClass_188[0x8]; // 0x188 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	unsigned char ReplicationBridgeClass_190[0x8]; // 0x190 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	unsigned char unreflected_198[0x10]; // 0x198 (0x10) 
	struct FName NetDriverName; // 0x1a8 (0x4)
	unsigned char unreflected_1ac[0x4]; // 0x1ac (0x4) 
	struct TArray<struct FChannelDefinition> ChannelDefinitions; // 0x1b0 (0x10)
	struct TMap<struct FName, struct FChannelDefinition> ChannelDefinitionMap; // 0x1c0 (0x50)
	struct TArray<class UChannel*> ActorChannelPool; // 0x210 (0x10)
	unsigned char unreflected_220[0x19]; // 0x220 (0x19) 
	unsigned char bNoTimeouts; // 0x239 (0x1)
	unsigned char bNeverApplyNetworkEmulationSettings; // 0x239 (0x1)
	unsigned char unreflected_23a[0x4de]; // 0x23a (0x4de) 
	class UReplicationDriver* ReplicationDriver; // 0x718 (0x8)
	unsigned char padding_720[0x68]; // 0x720 (0x68)
};

