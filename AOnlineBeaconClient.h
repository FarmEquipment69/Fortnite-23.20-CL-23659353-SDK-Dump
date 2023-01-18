// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x318
class AOnlineBeaconClient : public AOnlineBeacon
{
	class AOnlineBeaconHostObject* BeaconOwner; // 0x2b8 (0x8)
	class UNetConnection* BeaconConnection; // 0x2c0 (0x8)
	enum EBeaconConnectionState ConnectionState; // 0x2c8 (0x1)
	unsigned char padding_2c9[0x4f]; // 0x2c9 (0x4f)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected (Underlying native function: ClientOnConnected 0x4866d04)
	void ClientOnConnected(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)
};

