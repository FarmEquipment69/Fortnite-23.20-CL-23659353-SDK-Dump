// Class /Script/Engine.NetConnection
// Size: 0x1d58
class UNetConnection : public UPlayer
{
	struct TArray<class UChildConnection*> Children; // 0x48 (0x10)
	class UNetDriver* Driver; // 0x58 (0x8)
	class UClass* PackageMapClass; // 0x60 (0x8)
	class UPackageMap* PackageMap; // 0x68 (0x8)
	struct TArray<class UChannel*> OpenChannels; // 0x70 (0x10)
	struct TArray<class AActor*> SentTemporaries; // 0x80 (0x10)
	class AActor* ViewTarget; // 0x90 (0x8)
	class AActor* OwningActor; // 0x98 (0x8)
	int MaxPacket; // 0xa0 (0x4)
	unsigned char InternalAck; // 0xa4 (0x1)
	unsigned char unreflected_a5[0xbb]; // 0xa5 (0xbb) 
	struct FUniqueNetIdRepl PlayerId; // 0x160 (0x30)
	unsigned char unreflected_190[0x48]; // 0x190 (0x48) 
	double LastReceiveTime; // 0x1d8 (0x8)
	unsigned char unreflected_1e0[0x11e0]; // 0x1e0 (0x11e0) 
	int DefaultMaxChannelSize; // 0x13c0 (0x4)
	unsigned char unreflected_13c4[0x284]; // 0x13c4 (0x284) 
	struct TArray<class UChannel*> ChannelsToTick; // 0x1648 (0x10)
	unsigned char padding_1658[0x700]; // 0x1658 (0x700)
};

