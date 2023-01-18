// Class /Script/UACCommon.UACNetworkComponent
// Size: 0x220
class UUACNetworkComponent : public UActorComponent
{
	int PlayerId; // 0xa0 (0x4)
	unsigned char padding_a4[0x17c]; // 0xa4 (0x17c)

	/* Functions */

	// Function /Script/UACCommon.UACNetworkComponent.SendPacketToServer (Underlying native function: SendPacketToServer 0x7e2c360)
	void SendPacketToServer(unsigned char& Type, struct TArray<unsigned char>& Packet); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/UACCommon.UACNetworkComponent.SendPacketToClient (Underlying native function: SendPacketToClient 0x7e2c288)
	void SendPacketToClient(unsigned char& Type, struct TArray<unsigned char>& Packet); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/UACCommon.UACNetworkComponent.SendClientHello (Underlying native function: SendClientHello 0x7e2c204)
	void SendClientHello(uint32_t& SessionKey); // (Net | NetReliable | Native | Event | Public | NetClient)
};

